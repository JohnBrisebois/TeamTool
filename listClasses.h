#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

namespace listClasses {

// player class
    class player
    {
    public:
        string firstName;
        string lastName;
        int number;
        void createPlayer(string first, string last, int num)
        {
            firstName = first;
            lastName = last;
            number = num;
        }
        string getFullName() {
            return firstName + " " + lastName;
        }
    };

// team class / player list
    class team
    {
    public:
        string teamName;
        int elo = 100;
        void setName(string name)
        {
            teamName = name;
        }
        void setElo(int num)
        {
            elo = num;
        }

        int maxlength = 100;
        int allocation = 10;
        int currentSpace = 0;
        int length = 0;
        player* arrayList = NULL;
        bool scheduled = false;
        bool availability[7] = {false, false, true, false, false ,false, false};
        void setAvailability(int index, bool available) {
            availability[index] = available;
        }

        void resize()
        {
            if (arrayList == NULL)
            {
                arrayList = new player[0];
            }
            currentSpace = currentSpace + allocation;
            player* newList = new player[currentSpace];
            for (int i = 0; i < currentSpace - allocation; i++)
            {
                newList[i] = arrayList[i];
            }
            delete[] arrayList;
            arrayList = newList;
        }

        void addPlayer(string first, string last, int num)
        {
            player thisPlayer;
            thisPlayer.createPlayer(first, last, num);
            insert(thisPlayer);
        }

        void insert(player thisPlayer)
        {
            if (length == currentSpace)
            {
                resize();
            }
            if (length == 0)
            {
                arrayList[0] = thisPlayer;
            }
            else
            {
                insertAt(thisPlayer, insertIndex(length - 1, 0, thisPlayer.lastName));
            }
            length++;
        }

        int insertIndex(int high, int low, string data)
        {
            int middle = (high + low) / 2;
            if (middle == low)
            {
                if (data >= arrayList[high].lastName)
                {
                    return high + 1;
                }
                else if (data >= arrayList[middle].lastName)
                {
                    return high;
                }
                else
                {
                    return middle;
                }
            }
            if (data > arrayList[middle].lastName)
            {
                return insertIndex(high, middle, data);
            }
            else if (data < arrayList[middle].lastName)
            {
                return insertIndex(middle, low, data);
            }
            else if (data == arrayList[middle].lastName)
            {
                return middle + 1;
            }
            return -2;
        }

        void insertAt(player item, int index)
        {
            player* newList = new player[currentSpace];
            for (int i = 0; i < length + 1; i++)
            {
                if (i < index)
                {
                    newList[i] = arrayList[i];
                }
                else if (i == index)
                {
                    newList[i] = item;
                }
                else
                {
                    newList[i] = arrayList[i - 1];
                }
            }
            delete[] arrayList;
            arrayList = newList;
        }

        int search(string num)
        {
            return searchIndex(num, length - 1, 0);
        }

        int searchIndex(string num, int high, int low)
        {
            int middle = (high + low) / 2;
            if (middle == low)
            {
                if (arrayList[high].lastName == num)
                {
                    return high + 1;
                }
                else if (arrayList[middle].lastName != num)
                {
                    return -1;
                }
            }
            if (arrayList[middle].lastName < num)
            {
                return searchIndex(num, high, middle);
            }
            else if (arrayList[middle].lastName > num)
            {
                return searchIndex(num, middle, low);
            }
            else if (arrayList[middle].lastName == num)
            {
                return middle + 1;
            }
            return -1;
        }

        int searchNum(int num)
        {
            player currentStudent;
            for (int i = 0; i < length; i++)
            {
                if (arrayList[i].number == num)
                {
                    currentStudent = arrayList[i];
                    return i;
                }
            }
            return -1;
        }
        void removePlayer(int index) {
            if (index == -1)
            {
            }
            else
            {
                for (int i = index; i < length; i++)
                {
                    arrayList[i] = arrayList[i + 1];
                }
                length--;
            }
        }

        void printList()
        {
            for (int i = 0; i < length; i++)
            {
                cout << arrayList[i].firstName << " " << arrayList[i].lastName << " " << arrayList[i].number << endl;
            }
        }
        void printToFile(ofstream& file)
        {
            for (int i = 0; i < length; i++)
            {
                file << "PLAYER" << endl << arrayList[i].firstName << endl << arrayList[i].lastName << endl << arrayList[i].number << endl << endl;
            }
        }
    };

// schedule class
    class schedule {
    public:
        string teamOne[100];
        string teamTwo[100];
        int length = 0;

        schedule() {

        }

        void addTeams(string nameOne, string nameTwo) {
            teamOne[length] = nameOne;
            teamTwo[length] = nameTwo;
            length++;
        }
        string getMatch(int index) {
            return teamOne[index] + " vs " + teamTwo[index];
        }
    };

// game class.  contains schedule list and team list
    class game
    {
    public:
        string gameName;
        void setGame(string name)
        {
            gameName = name;
        }
        int maxlength = 100;
        int allocation = 10;
        int currentSpace = 0;
        int length = 0;
        bool hasSchedule = false;
        team* arrayList = NULL;
        schedule * scheduleList = new schedule[7];


        void resize()
        {
            if (arrayList == NULL)
            {
                arrayList = new team[0];
            }
            currentSpace = currentSpace + allocation;
            team* newList = new team[currentSpace];
            for (int i = 0; i < currentSpace - allocation; i++)
            {
                newList[i] = arrayList[i];
            }
            delete[] arrayList;
            arrayList = newList;
        }

        void addTeam(string teamName, int elo, string availability)
        {
            team thisTeam;
            thisTeam.setName(teamName);
            thisTeam.setElo(elo);
            for (int i = 0; i < 7; i++) {
                char avail = availability.at(i);
                if (avail == '0') {
                    thisTeam.availability[i] = false;
                }
                else {
                    thisTeam.availability[i] = true;
                }
                

            }
            insert(thisTeam);
        }

        int getTeamIndex(string name) {
            return searchName(name);
        }

        void insert(team thisTeam)
        {
            if (length == currentSpace)
            {
                resize();
            }
            if (length == 0)
            {
                arrayList[0] = thisTeam;
            }
            else
            {
                insertAt(thisTeam, insertIndex(length - 1, 0, thisTeam.elo));
            }
            length++;
        }

        int insertIndex(int high, int low, int data)
        {
            int middle = (high + low) / 2;
            if (middle == low)
            {
                if (data >= arrayList[high].elo)
                {
                    return high + 1;
                }
                else if (data >= arrayList[middle].elo)
                {
                    return high;
                }
                else
                {
                    return middle;
                }
            }
            if (data > arrayList[middle].elo)
            {
                return insertIndex(high, middle, data);
            }
            else if (data < arrayList[middle].elo)
            {
                return insertIndex(middle, low, data);
            }
            else if (data == arrayList[middle].elo)
            {
                return middle + 1;
            }
            return -2;
        }

        void insertAt(team item, int index)
        {
            team* newList = new team[currentSpace];
            for (int i = 0; i < length + 1; i++)
            {
                if (i < index)
                {
                    newList[i] = arrayList[i];
                }
                else if (i == index)
                {
                    newList[i] = item;
                }
                else
                {
                    newList[i] = arrayList[i - 1];
                }
            }
            delete[] arrayList;
            arrayList = newList;
        }

        void removeTeam(string teamName) {
            int index = getTeamIndex(teamName);
            if (index == -1)
            {
                cout << "The game '" << teamName << "' does not exist" << endl;
            }
            else
            {
                for (int i = index; i < length; i++)
                {
                    arrayList[i] = arrayList[i + 1];
                }
                length--;
            }

        }

        int searchName(string name)
        {
            for (int i = 0; i < length; i++)
            {
                if (arrayList[i].teamName == name)
                {
                    return i;
                }
            }
            return -1;
        }

        void sortTeams() {
            bool sorted = false;
            while (!sorted) {
                sorted = true;
                for (int i = 0; i < length - 1; i++) {
                    if (arrayList[i].elo < arrayList[i + 1].elo) {
                        team temp = arrayList[i];
                        arrayList[i] = arrayList[i + 1];
                        arrayList[i + 1] = temp;
                        sorted = false;
                    }
                }
            }
        }

        void printList()
        {
            for (int i = 0; i < length; i++)
            {
                cout << arrayList[i].teamName << endl;
                arrayList[i].printList();
            }
        }
        
        void genSchedule() {
            for (int i = 0; i < length; i++) {
                arrayList[i].scheduled = false;
            }
            for (int i = 0; i < 7; i++) {
                schedule currDay;
                scheduleList[i] = currDay;
            }
            bool complete = false;
            int counter = 0;
            srand(time(0));
            while (counter < length * length * 6) {
                int i = rand() % length;
                int n = rand() % length;
                int b = rand() % 7;
                if (arrayList[i].availability[b] == true && arrayList[n].availability[b] == true && arrayList[i].scheduled == false && arrayList[n].scheduled == false && i != n) {
                    arrayList[i].scheduled = true;
                    arrayList[n].scheduled = true;
                    scheduleList[b].addTeams(arrayList[i].teamName, arrayList[n].teamName);
                    cout << "added to " << arrayList[i].teamName << endl;
                }
                counter++;
            }
            hasSchedule = true;
        }

        void printToFile(ofstream& file)
        {
            for (int i = 0; i < length; i++)
            {   
                string availability ="";
                for (int b = 0; b < 7; b++) {
                    bool avail = arrayList[i].availability[b];
                    if (avail == true) {
                        availability = availability + "1";
                    }
                    else {
                        availability = availability + "0";
                    }
                }
                file << "TEAMNAME" << endl << arrayList[i].teamName << endl << arrayList[i].elo << endl << availability << endl << endl;
                arrayList[i].printToFile(file);
                file << endl;
            }

        }
    };
// game list
    class gameList
    {
    public:
        game* arrayList = new game[15];
        int length = 0;

        void addGame(string gameType)
        {
            game newGame;
            newGame.setGame(gameType);
            arrayList[length] = newGame;
            length++;
        }
        void removeGame(string gameType)
        {
            int index = getIndex(gameType);
            if (index == -1)
            {
                cout << "The game '" << gameType << "' does not exist" << endl;
            }
            else
            {
                for (int i = index; i < length; i++)
                {
                    arrayList[i] = arrayList[i + 1];
                }
                length--;
            }
        }
        int getIndex(string gameType)
        {
            for (int i = 0; i < length; i++)
            {
                if (arrayList[i].gameName == gameType)
                {
                    return i;
                }
            }
            return -1;
        }
        void printList()
        {
            for (int i = 0; i < length; i++)
            {
                cout << arrayList[i].gameName << endl;
                arrayList[i].printList();
            }
            cout << endl;
        }
        // below are the functions that will be accessed from the outside.
        void addTeam(string gameType, string teamName, int elo, string availability) {
            arrayList[getIndex(gameType)].addTeam(teamName, elo, availability);
        }
        void removeTeam(string gameType, string teamName) {
            arrayList[getIndex(gameType)].removeTeam(teamName);
        }
        void addPlayer(string gameType, string teamName, string firstName, string lastName, int num) {
            int gameIndex = getIndex(gameType);
            int teamIndex = arrayList[gameIndex].getTeamIndex(teamName);
            arrayList[gameIndex].arrayList[teamIndex].addPlayer(firstName, lastName, num);
        }
        void removePlayer(string gameType, string teamName, int playerIndex) {
            int gameIndex = getIndex(gameType);
            int teamIndex = arrayList[gameIndex].getTeamIndex(teamName);
            arrayList[gameIndex].arrayList[teamIndex].removePlayer(playerIndex);
        }
        int getGameListSize() {
            return length;
        }
        int getGameSize(string gameType) {
            int gameIndex = getIndex(gameType);
            return arrayList[gameIndex].length;
        }
        int getTeamSize(string gameType, string teamName) {
            int gameIndex = getIndex(gameType);
            int teamIndex = arrayList[gameIndex].getTeamIndex(teamName);
            return arrayList[gameIndex].arrayList[teamIndex].length;
        }
        string getGameName(int gameIndex) {
            return arrayList[gameIndex].gameName;
        }
        string getTeamName(string gameType, int teamIndex) {
            int gameIndex = getIndex(gameType);
            return arrayList[gameIndex].arrayList[teamIndex].teamName;
        }
        string getPlayerName(string gameType, string teamName, int playerIndex) {
            int gameIndex = getIndex(gameType);
            int teamIndex = arrayList[gameIndex].getTeamIndex(teamName);
            return arrayList[gameIndex].arrayList[teamIndex].arrayList[playerIndex].getFullName();
        }
        int getTeamElo(string gameType, string teamName) {
            int gameIndex = getIndex(gameType);
            int teamIndex = arrayList[gameIndex].getTeamIndex(teamName);
            return arrayList[gameIndex].arrayList[teamIndex].elo;
        }
        void setMatchElo(string gameType, string teamWin, string teamLose) {
            int gameIndex = getIndex(gameType);
            int teamWinIndex = arrayList[gameIndex].getTeamIndex(teamWin);
            int teamLoseIndex = arrayList[gameIndex].getTeamIndex(teamLose);
            int eloWin = arrayList[gameIndex].arrayList[teamWinIndex].elo;
            int eloLose = arrayList[gameIndex].arrayList[teamLoseIndex].elo;
            int eloChange = 10 + (eloLose - eloWin) / 10;
            eloWin = eloWin + eloChange;
            eloLose = eloLose - eloChange;
            arrayList[gameIndex].arrayList[teamWinIndex].setElo(eloWin);
            arrayList[gameIndex].arrayList[teamLoseIndex].setElo(eloLose);
            arrayList[gameIndex].sortTeams();
        }
        void setTeamAvailability(string gameType, string teamName, int dayIndex, bool available) {
            int gameIndex = getIndex(gameType);
            int teamIndex = arrayList[gameIndex].getTeamIndex(teamName);
            arrayList[gameIndex].arrayList[teamIndex].setAvailability(dayIndex, available);
        }
        bool getTeamAvailability(string gameType, string teamName, int dayIndex) {
            int gameIndex = getIndex(gameType);
            int teamIndex = arrayList[gameIndex].getTeamIndex(teamName);
            return arrayList[gameIndex].arrayList[teamIndex].availability[dayIndex];
        }
        void createSchedule(string gameType) {
            int gameIndex = getIndex(gameType);
            arrayList[gameIndex].genSchedule();
        }
        string getSchedule(string gameType, int dayIndex, int matchIndex) {
            int gameIndex = getIndex(gameType);
            if (arrayList[gameIndex].hasSchedule == true) {
                return arrayList[gameIndex].scheduleList[dayIndex].teamOne[matchIndex] + " vs " + arrayList[gameIndex].scheduleList[dayIndex].teamTwo[matchIndex];
            }
            else {
                return "";
            }
        }
        int getScheduleSize(string gameType, int dayIndex) {
            int gameIndex = getIndex(gameType);
            if (arrayList[gameIndex].hasSchedule == true) {
                return arrayList[gameIndex].scheduleList[dayIndex].length;
            }
            else {
                return 0;
            }
        }
        void inputFromFile()
        {

            ifstream inputFile("data.txt");
            string command;
            string thisLine;
            string teamName;
            string gameType;
            int teamElo;

            while (getline(inputFile, thisLine))
            {
                if (thisLine == "PLAYER")
                {
                    /*format:
                    PLAYER
                    firstname
                    lastname
                    number
                    */
                    getline(inputFile, thisLine);
                    string firstName = thisLine;
                    getline(inputFile, thisLine);
                    string lastName = thisLine;
                    getline(inputFile, thisLine);
                    int num = stoi(thisLine);
                    addPlayer(gameType, teamName, firstName, lastName, num);
                }
                else if (thisLine == "TEAMNAME")
                {
                    /*format:
                    TEAMNAME
                    teamname
                    elo
                    (all following players will be assigned to team)*/
                    getline(inputFile, thisLine);
                    teamName = thisLine;
                    getline(inputFile, thisLine);
                    teamElo = stoi(thisLine);
                    getline(inputFile, thisLine);
                    string availability = thisLine;
                    addTeam(gameType, teamName, teamElo, availability);
                    int gameIndex = getIndex(gameType);
                    arrayList[gameIndex].sortTeams();
                }
                else if (thisLine == "GAMETYPE")
                {
                    getline(inputFile, thisLine);
                    gameType = thisLine;
                    addGame(gameType);
                }
            }
        }
        void outputToFile() {
            ofstream outputFile("data.txt");

            for (int i = 0; i < length; i++)
            {
                outputFile << "GAMETYPE" << endl << arrayList[i].gameName << endl << endl;
                arrayList[i].printToFile(outputFile);
            }

        }
    };

}