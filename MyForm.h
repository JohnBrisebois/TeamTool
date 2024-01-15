#include "listClasses.h"
#include <msclr/marshal_cppstd.h>
#pragma once


namespace project {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	/// 
	listClasses::gameList gameList;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			gameList.inputFromFile();
			for (int i = 0; i < gameList.getGameListSize(); i++) {
				String^ gameName = gcnew String(gameList.getGameName(i).c_str());

				listBox_games->Items->Add(gameName);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox_games;
	private: System::Windows::Forms::ListBox^ listBox_players;
	private: System::Windows::Forms::ListBox^ listBox_teams;
	private: System::Windows::Forms::Button^ buttonAddPlayer;
	private: System::Windows::Forms::TextBox^ textFirstName;
	private: System::Windows::Forms::TextBox^ textLastName;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonAddTeam;
	private: System::Windows::Forms::TextBox^ textTeamName;
	private: System::Windows::Forms::Button^ buttonAddGame;
	private: System::Windows::Forms::TextBox^ textGameName;
	private: System::Windows::Forms::Button^ buttonSave;
	private: System::Windows::Forms::Button^ buttonInputGame;
	private: System::Windows::Forms::ComboBox^ menuTeamWin;
	private: System::Windows::Forms::ComboBox^ menuTeamLose;
	private: System::Windows::Forms::Button^ buttonInputGameComplete;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonTeamAvailability;
	private: System::Windows::Forms::ComboBox^ menuAvail;
	private: System::Windows::Forms::CheckedListBox^ listTeamAvail;
	public: System::Windows::Forms::Button^ buttonViewSchedule;
	private: System::Windows::Forms::ListBox^ listBoxMonday;
	private: System::Windows::Forms::Button^ button_createSchedule;
	private: System::Windows::Forms::ListBox^ listBoxTuesday;
	private: System::Windows::Forms::ListBox^ listBoxWednesday;
	private: System::Windows::Forms::ListBox^ listBoxThursday;
	private: System::Windows::Forms::ListBox^ listBoxFriday;
	private: System::Windows::Forms::ListBox^ listBoxSaturday;
	private: System::Windows::Forms::ListBox^ listBoxSunday;
	private: System::Windows::Forms::Label^ label_schedule;
	public:

	public:
	private:







	protected:



	protected:

	protected:






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox_games = (gcnew System::Windows::Forms::ListBox());
			this->listBox_players = (gcnew System::Windows::Forms::ListBox());
			this->listBox_teams = (gcnew System::Windows::Forms::ListBox());
			this->buttonAddPlayer = (gcnew System::Windows::Forms::Button());
			this->textFirstName = (gcnew System::Windows::Forms::TextBox());
			this->textLastName = (gcnew System::Windows::Forms::TextBox());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonAddTeam = (gcnew System::Windows::Forms::Button());
			this->textTeamName = (gcnew System::Windows::Forms::TextBox());
			this->buttonAddGame = (gcnew System::Windows::Forms::Button());
			this->textGameName = (gcnew System::Windows::Forms::TextBox());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonInputGame = (gcnew System::Windows::Forms::Button());
			this->menuTeamWin = (gcnew System::Windows::Forms::ComboBox());
			this->menuTeamLose = (gcnew System::Windows::Forms::ComboBox());
			this->buttonInputGameComplete = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonTeamAvailability = (gcnew System::Windows::Forms::Button());
			this->menuAvail = (gcnew System::Windows::Forms::ComboBox());
			this->listTeamAvail = (gcnew System::Windows::Forms::CheckedListBox());
			this->buttonViewSchedule = (gcnew System::Windows::Forms::Button());
			this->listBoxMonday = (gcnew System::Windows::Forms::ListBox());
			this->button_createSchedule = (gcnew System::Windows::Forms::Button());
			this->listBoxTuesday = (gcnew System::Windows::Forms::ListBox());
			this->listBoxWednesday = (gcnew System::Windows::Forms::ListBox());
			this->listBoxThursday = (gcnew System::Windows::Forms::ListBox());
			this->listBoxFriday = (gcnew System::Windows::Forms::ListBox());
			this->listBoxSaturday = (gcnew System::Windows::Forms::ListBox());
			this->listBoxSunday = (gcnew System::Windows::Forms::ListBox());
			this->label_schedule = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox_games
			// 
			this->listBox_games->Font = (gcnew System::Drawing::Font(L"Swis721 BlkCn BT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox_games->FormattingEnabled = true;
			this->listBox_games->ItemHeight = 22;
			this->listBox_games->Location = System::Drawing::Point(26, 27);
			this->listBox_games->Name = L"listBox_games";
			this->listBox_games->Size = System::Drawing::Size(129, 224);
			this->listBox_games->TabIndex = 0;
			this->listBox_games->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox_games_SelectedIndexChanged);
			// 
			// listBox_players
			// 
			this->listBox_players->Font = (gcnew System::Drawing::Font(L"Swis721 BlkCn BT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox_players->FormattingEnabled = true;
			this->listBox_players->ItemHeight = 22;
			this->listBox_players->Location = System::Drawing::Point(322, 27);
			this->listBox_players->Name = L"listBox_players";
			this->listBox_players->Size = System::Drawing::Size(213, 224);
			this->listBox_players->TabIndex = 1;
			this->listBox_players->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox_players_SelectedIndexChanged);
			// 
			// listBox_teams
			// 
			this->listBox_teams->Font = (gcnew System::Drawing::Font(L"Swis721 BlkCn BT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox_teams->FormattingEnabled = true;
			this->listBox_teams->ItemHeight = 22;
			this->listBox_teams->Location = System::Drawing::Point(161, 27);
			this->listBox_teams->Name = L"listBox_teams";
			this->listBox_teams->Size = System::Drawing::Size(155, 224);
			this->listBox_teams->TabIndex = 2;
			this->listBox_teams->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox_teams_SelectedIndexChanged);
			// 
			// buttonAddPlayer
			// 
			this->buttonAddPlayer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddPlayer->Location = System::Drawing::Point(322, 257);
			this->buttonAddPlayer->Name = L"buttonAddPlayer";
			this->buttonAddPlayer->Size = System::Drawing::Size(213, 43);
			this->buttonAddPlayer->TabIndex = 3;
			this->buttonAddPlayer->Text = L"Add Player";
			this->buttonAddPlayer->UseVisualStyleBackColor = true;
			this->buttonAddPlayer->Click += gcnew System::EventHandler(this, &MyForm::buttonAddPlayer_Click);
			// 
			// textFirstName
			// 
			this->textFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textFirstName->Location = System::Drawing::Point(322, 306);
			this->textFirstName->Name = L"textFirstName";
			this->textFirstName->Size = System::Drawing::Size(97, 22);
			this->textFirstName->TabIndex = 4;
			this->textFirstName->Text = L"First Name";
			this->textFirstName->TextChanged += gcnew System::EventHandler(this, &MyForm::textFirstName_TextChanged);
			// 
			// textLastName
			// 
			this->textLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textLastName->Location = System::Drawing::Point(425, 306);
			this->textLastName->Name = L"textLastName";
			this->textLastName->Size = System::Drawing::Size(110, 22);
			this->textLastName->TabIndex = 5;
			this->textLastName->Text = L"Last Name";
			this->textLastName->TextChanged += gcnew System::EventHandler(this, &MyForm::textLastName_TextChanged);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDelete->Location = System::Drawing::Point(554, 181);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(182, 68);
			this->buttonDelete->TabIndex = 6;
			this->buttonDelete->Text = L"Remove";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm::buttonDelete_Click);
			// 
			// buttonAddTeam
			// 
			this->buttonAddTeam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddTeam->Location = System::Drawing::Point(161, 257);
			this->buttonAddTeam->Name = L"buttonAddTeam";
			this->buttonAddTeam->Size = System::Drawing::Size(155, 43);
			this->buttonAddTeam->TabIndex = 7;
			this->buttonAddTeam->Text = L"Add Team";
			this->buttonAddTeam->UseVisualStyleBackColor = true;
			this->buttonAddTeam->Click += gcnew System::EventHandler(this, &MyForm::buttonAddTeam_Click);
			// 
			// textTeamName
			// 
			this->textTeamName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textTeamName->Location = System::Drawing::Point(161, 306);
			this->textTeamName->Name = L"textTeamName";
			this->textTeamName->Size = System::Drawing::Size(155, 22);
			this->textTeamName->TabIndex = 8;
			this->textTeamName->Text = L"Team Name";
			this->textTeamName->TextChanged += gcnew System::EventHandler(this, &MyForm::textTeamName_TextChanged);
			// 
			// buttonAddGame
			// 
			this->buttonAddGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAddGame->Location = System::Drawing::Point(26, 257);
			this->buttonAddGame->Name = L"buttonAddGame";
			this->buttonAddGame->Size = System::Drawing::Size(129, 43);
			this->buttonAddGame->TabIndex = 9;
			this->buttonAddGame->Text = L"Add Game";
			this->buttonAddGame->UseVisualStyleBackColor = true;
			this->buttonAddGame->Click += gcnew System::EventHandler(this, &MyForm::buttonAddGame_Click);
			// 
			// textGameName
			// 
			this->textGameName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textGameName->Location = System::Drawing::Point(26, 306);
			this->textGameName->Name = L"textGameName";
			this->textGameName->Size = System::Drawing::Size(129, 22);
			this->textGameName->TabIndex = 10;
			this->textGameName->Text = L"Game Name";
			// 
			// buttonSave
			// 
			this->buttonSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSave->Location = System::Drawing::Point(554, 106);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(182, 69);
			this->buttonSave->TabIndex = 11;
			this->buttonSave->Text = L"Save Changes";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &MyForm::buttonSave_Click);
			// 
			// buttonInputGame
			// 
			this->buttonInputGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonInputGame->Location = System::Drawing::Point(26, 334);
			this->buttonInputGame->Name = L"buttonInputGame";
			this->buttonInputGame->Size = System::Drawing::Size(182, 73);
			this->buttonInputGame->TabIndex = 12;
			this->buttonInputGame->Text = L"Input Game Results";
			this->buttonInputGame->UseVisualStyleBackColor = true;
			this->buttonInputGame->Click += gcnew System::EventHandler(this, &MyForm::buttonInputGame_Click);
			// 
			// menuTeamWin
			// 
			this->menuTeamWin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuTeamWin->FormattingEnabled = true;
			this->menuTeamWin->Location = System::Drawing::Point(261, 401);
			this->menuTeamWin->Name = L"menuTeamWin";
			this->menuTeamWin->Size = System::Drawing::Size(176, 32);
			this->menuTeamWin->TabIndex = 13;
			this->menuTeamWin->Text = L"Winning Team";
			this->menuTeamWin->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::menuTeamWin_SelectedIndexChanged);
			// 
			// menuTeamLose
			// 
			this->menuTeamLose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuTeamLose->FormattingEnabled = true;
			this->menuTeamLose->Location = System::Drawing::Point(473, 401);
			this->menuTeamLose->Name = L"menuTeamLose";
			this->menuTeamLose->Size = System::Drawing::Size(176, 32);
			this->menuTeamLose->TabIndex = 14;
			this->menuTeamLose->Text = L"Losing Team";
			this->menuTeamLose->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::menuTeamLose_SelectedIndexChanged);
			// 
			// buttonInputGameComplete
			// 
			this->buttonInputGameComplete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonInputGameComplete->Location = System::Drawing::Point(322, 459);
			this->buttonInputGameComplete->Name = L"buttonInputGameComplete";
			this->buttonInputGameComplete->Size = System::Drawing::Size(271, 72);
			this->buttonInputGameComplete->TabIndex = 15;
			this->buttonInputGameComplete->Text = L"Complete";
			this->buttonInputGameComplete->UseVisualStyleBackColor = true;
			this->buttonInputGameComplete->Click += gcnew System::EventHandler(this, &MyForm::buttonInputGameComplete_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonExit->Location = System::Drawing::Point(554, 27);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(182, 73);
			this->buttonExit->TabIndex = 13;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// buttonTeamAvailability
			// 
			this->buttonTeamAvailability->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonTeamAvailability->Location = System::Drawing::Point(26, 413);
			this->buttonTeamAvailability->Name = L"buttonTeamAvailability";
			this->buttonTeamAvailability->Size = System::Drawing::Size(182, 74);
			this->buttonTeamAvailability->TabIndex = 14;
			this->buttonTeamAvailability->Text = L"Availability";
			this->buttonTeamAvailability->UseVisualStyleBackColor = true;
			this->buttonTeamAvailability->Click += gcnew System::EventHandler(this, &MyForm::buttonTeamAvailability_Click);
			// 
			// menuAvail
			// 
			this->menuAvail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuAvail->FormattingEnabled = true;
			this->menuAvail->Location = System::Drawing::Point(285, 359);
			this->menuAvail->Name = L"menuAvail";
			this->menuAvail->Size = System::Drawing::Size(152, 24);
			this->menuAvail->TabIndex = 15;
			this->menuAvail->Text = L"Team Name";
			this->menuAvail->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::menuAvail_SelectedIndexChanged);
			// 
			// listTeamAvail
			// 
			this->listTeamAvail->CheckOnClick = true;
			this->listTeamAvail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listTeamAvail->FormattingEnabled = true;
			this->listTeamAvail->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Monday", L"Tuesday", L"Wednesday", L"Thursday",
					L"Friday", L"Saturday", L"Sunday"
			});
			this->listTeamAvail->Location = System::Drawing::Point(285, 389);
			this->listTeamAvail->Name = L"listTeamAvail";
			this->listTeamAvail->Size = System::Drawing::Size(106, 123);
			this->listTeamAvail->TabIndex = 16;
			this->listTeamAvail->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listTeamAvail_SelectedIndexChanged);
			// 
			// buttonViewSchedule
			// 
			this->buttonViewSchedule->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonViewSchedule->Location = System::Drawing::Point(26, 493);
			this->buttonViewSchedule->Name = L"buttonViewSchedule";
			this->buttonViewSchedule->Size = System::Drawing::Size(182, 74);
			this->buttonViewSchedule->TabIndex = 15;
			this->buttonViewSchedule->Text = L"Schedule";
			this->buttonViewSchedule->UseVisualStyleBackColor = true;
			this->buttonViewSchedule->Click += gcnew System::EventHandler(this, &MyForm::buttonViewSchedule_Click);
			// 
			// listBoxMonday
			// 
			this->listBoxMonday->FormattingEnabled = true;
			this->listBoxMonday->Location = System::Drawing::Point(233, 368);
			this->listBoxMonday->Name = L"listBoxMonday";
			this->listBoxMonday->Size = System::Drawing::Size(91, 82);
			this->listBoxMonday->TabIndex = 16;
			// 
			// button_createSchedule
			// 
			this->button_createSchedule->Location = System::Drawing::Point(554, 295);
			this->button_createSchedule->Name = L"button_createSchedule";
			this->button_createSchedule->Size = System::Drawing::Size(85, 33);
			this->button_createSchedule->TabIndex = 16;
			this->button_createSchedule->Text = L"Generate";
			this->button_createSchedule->UseVisualStyleBackColor = true;
			this->button_createSchedule->Click += gcnew System::EventHandler(this, &MyForm::button_createSchedule_Click);
			// 
			// listBoxTuesday
			// 
			this->listBoxTuesday->FormattingEnabled = true;
			this->listBoxTuesday->Location = System::Drawing::Point(330, 368);
			this->listBoxTuesday->Name = L"listBoxTuesday";
			this->listBoxTuesday->Size = System::Drawing::Size(91, 82);
			this->listBoxTuesday->TabIndex = 17;
			// 
			// listBoxWednesday
			// 
			this->listBoxWednesday->FormattingEnabled = true;
			this->listBoxWednesday->Location = System::Drawing::Point(233, 456);
			this->listBoxWednesday->Name = L"listBoxWednesday";
			this->listBoxWednesday->Size = System::Drawing::Size(91, 82);
			this->listBoxWednesday->TabIndex = 18;
			// 
			// listBoxThursday
			// 
			this->listBoxThursday->FormattingEnabled = true;
			this->listBoxThursday->Location = System::Drawing::Point(330, 456);
			this->listBoxThursday->Name = L"listBoxThursday";
			this->listBoxThursday->Size = System::Drawing::Size(91, 82);
			this->listBoxThursday->TabIndex = 19;
			// 
			// listBoxFriday
			// 
			this->listBoxFriday->FormattingEnabled = true;
			this->listBoxFriday->Location = System::Drawing::Point(427, 368);
			this->listBoxFriday->Name = L"listBoxFriday";
			this->listBoxFriday->Size = System::Drawing::Size(91, 173);
			this->listBoxFriday->TabIndex = 20;
			// 
			// listBoxSaturday
			// 
			this->listBoxSaturday->FormattingEnabled = true;
			this->listBoxSaturday->Location = System::Drawing::Point(524, 368);
			this->listBoxSaturday->Name = L"listBoxSaturday";
			this->listBoxSaturday->Size = System::Drawing::Size(91, 173);
			this->listBoxSaturday->TabIndex = 21;
			// 
			// listBoxSunday
			// 
			this->listBoxSunday->FormattingEnabled = true;
			this->listBoxSunday->Location = System::Drawing::Point(621, 368);
			this->listBoxSunday->Name = L"listBoxSunday";
			this->listBoxSunday->Size = System::Drawing::Size(91, 173);
			this->listBoxSunday->TabIndex = 22;
			// 
			// label_schedule
			// 
			this->label_schedule->AutoSize = true;
			this->label_schedule->Location = System::Drawing::Point(250, 352);
			this->label_schedule->Name = L"label_schedule";
			this->label_schedule->Size = System::Drawing::Size(196, 13);
			this->label_schedule->TabIndex = 16;
			this->label_schedule->Text = L"Mon/Wed                Tue/Thu                         Fri                           Sat                         Sun";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(768, 586);
			this->Controls->Add(this->buttonViewSchedule);
			this->Controls->Add(this->buttonTeamAvailability);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonInputGame);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->textGameName);
			this->Controls->Add(this->buttonAddGame);
			this->Controls->Add(this->textTeamName);
			this->Controls->Add(this->buttonAddTeam);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->textLastName);
			this->Controls->Add(this->textFirstName);
			this->Controls->Add(this->buttonAddPlayer);
			this->Controls->Add(this->listBox_teams);
			this->Controls->Add(this->listBox_players);
			this->Controls->Add(this->listBox_games);
			this->Name = L"MyForm";
			this->Text = L"Scheduling App";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
// Everything below this line I added.  Everything above this line is part of the built in GUI template
		//keep track of what is selected
		bool gameSelected = false;
		bool teamSelected = false;
		bool playerSelected = false;
		//keep track of menus open
		bool menuInputGame = false;
		bool menuAvailability = false;
		bool menuSchedule = false;

//clear the list of players and re-add them, based on which team is selected
	void refreshPlayers(string selectedGame, string selectedTeam) {
		listBox_players->Items->Clear();
		for (int i = 0; i < gameList.getTeamSize(selectedGame, selectedTeam); i++) {
			string playerName = gameList.getPlayerName(selectedGame, selectedTeam, i);
			String^ playerNamesys = gcnew String(playerName.c_str());
			listBox_players->Items->Add(playerNamesys);
		}
	}

//clear the list of teams and re-add them, based on which game is selected
	void refreshTeams(string selectedGame) {
		listBox_players->Items->Clear();
		listBox_teams->Items->Clear();
		for (int i = 0; i < gameList.getGameSize(selectedGame); i++) {
			String^ teamNamesys = gcnew String(gameList.getTeamName(selectedGame, i).c_str());
			string teamName = msclr::interop::marshal_as<std::string>(teamNamesys);
			String^ teamElosys = gcnew String(to_string(gameList.getTeamElo(selectedGame, teamName)).c_str());
			listBox_teams->Items->Add(teamNamesys + "   ( " + teamElosys + " )");
		}
	}
//clear the list of games and re-add them
	void refreshGames() {
		listBox_players->Items->Clear();
		listBox_teams->Items->Clear();
		listBox_games->Items->Clear();
		for (int i = 0; i < gameList.getGameListSize(); i++) {
			String^ gameNamesys = gcnew String(gameList.getGameName(i).c_str());
			listBox_games->Items->Add(gameNamesys);
		}
	}

//pull a specific teams availability and apply it to the UI
	void refreshTeamAvailability() {
		if (listBox_games->SelectedIndex != -1 && menuAvail->SelectedIndex != -1) {
			string selectedGame = msclr::interop::marshal_as< std::string >(listBox_games->SelectedItem->ToString());
			string selectedTeam = msclr::interop::marshal_as< std::string >(menuAvail->Text->ToString());
			for (int i = 0; i < 7; i++) {
				bool avail = gameList.getTeamAvailability(selectedGame, selectedTeam, i);
				listTeamAvail->SetItemChecked(i, avail);
			}
		}
	}

//refresh the drop down menu for availability
	void refreshTeamAvailDropdown() {
		menuAvail->Items->Clear();
		if (listBox_games->SelectedIndex != -1) {
			string selectedGame = msclr::interop::marshal_as< std::string >(listBox_games->SelectedItem->ToString());
			int menuLength = gameList.getGameSize(selectedGame);
			for (int i = 0; i < menuLength; i++) {
				String^ teamNamesys = gcnew String(gameList.getTeamName(selectedGame, i).c_str());
				menuAvail->Items->Add(teamNamesys);
			}
		}

	}

//clear the schedule, generate a new one, then display it
	void refreshSchedule() {
		if (listBox_games->SelectedIndex != -1) {
			listBoxMonday->Items->Clear();
			listBoxTuesday->Items->Clear();
			listBoxWednesday->Items->Clear();
			listBoxThursday->Items->Clear();
			listBoxFriday->Items->Clear();
			listBoxSaturday->Items->Clear();
			listBoxSunday->Items->Clear();
			string selectedGame = msclr::interop::marshal_as< std::string >(listBox_games->SelectedItem->ToString());
			for (int i = 0; i < gameList.getScheduleSize(selectedGame, 0); i++) {
				String^ match = gcnew String(gameList.getSchedule(selectedGame, 0, i).c_str());
				listBoxMonday->Items->Add(match);
			}
			for (int i = 0; i < gameList.getScheduleSize(selectedGame, 1); i++) {
				String^ match = gcnew String(gameList.getSchedule(selectedGame, 1, i).c_str());
				listBoxTuesday->Items->Add(match);
			}
			for (int i = 0; i < gameList.getScheduleSize(selectedGame, 2); i++) {
				String^ match = gcnew String(gameList.getSchedule(selectedGame, 2, i).c_str());
				listBoxWednesday->Items->Add(match);
			}
			for (int i = 0; i < gameList.getScheduleSize(selectedGame, 3); i++) {
				String^ match = gcnew String(gameList.getSchedule(selectedGame, 3, i).c_str());
				listBoxThursday->Items->Add(match);
			}
			for (int i = 0; i < gameList.getScheduleSize(selectedGame, 4); i++) {
				String^ match = gcnew String(gameList.getSchedule(selectedGame, 4, i).c_str());
				listBoxFriday->Items->Add(match);
			}
			for (int i = 0; i < gameList.getScheduleSize(selectedGame, 5); i++) {
				String^ match = gcnew String(gameList.getSchedule(selectedGame, 5, i).c_str());
				listBoxSaturday->Items->Add(match);
			}
			for (int i = 0; i < gameList.getScheduleSize(selectedGame, 6); i++) {
				String^ match = gcnew String(gameList.getSchedule(selectedGame, 6, i).c_str());
				listBoxSunday->Items->Add(match);
			}
		}
	}

// pull availability from the user-modified gui and apply it to the data structure
	void setTeamAvailability() {
		if (listBox_games->SelectedIndex != -1 && menuAvail->SelectedIndex != -1) {
			string selectedGame = msclr::interop::marshal_as< std::string >(listBox_games->SelectedItem->ToString());
			string selectedTeam = msclr::interop::marshal_as< std::string >(menuAvail->Text->ToString());
			for (int i = 0; i < 7; i++) {
				bool avail = listTeamAvail->GetItemChecked(i);
				gameList.setTeamAvailability(selectedGame, selectedTeam, i, avail);
			}
		}
	}

// pull the list of teams from the data structure and apply them to the "input match" dropdown menu
	void refreshGameInput() {
		menuTeamWin->Items->Clear();
		menuTeamLose->Items->Clear();
		if (listBox_games->SelectedIndex != -1) {
			menuTeamWin->Items->Clear();
			menuTeamLose->Items->Clear();
			string selectedGame = msclr::interop::marshal_as< std::string >(listBox_games->SelectedItem->ToString());
			int menuLength = gameList.getGameSize(selectedGame);
			for (int i = 0; i < menuLength; i++) {
				String^ teamNamesys = gcnew String(gameList.getTeamName(selectedGame, i).c_str());
				menuTeamWin->Items->Add(teamNamesys);
				menuTeamLose->Items->Add(teamNamesys);
			}
		}
	}

// this function runs when a game is selected.  It refreshes the relevent menus and buttons affected.
	private: System::Void listBox_games_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		refreshGameInput();
		refreshTeamAvailDropdown();
		refreshSchedule();
		if (listBox_games->SelectedIndex != -1) {
			String^ selectedGamesys = listBox_games->SelectedItem->ToString();
			std::string selectedGame = msclr::interop::marshal_as< std::string >(selectedGamesys);
			listBox_teams->Items->Clear();
			listBox_players->Items->Clear();
			gameSelected = true;
			teamSelected = false;
			playerSelected = false;
			buttonDelete->Text = "Remove " + listBox_games->SelectedItem->ToString();
			for (int i = 0; i < gameList.getGameSize(selectedGame); i++) {
				string teamName = gameList.getTeamName(selectedGame, i);
				String^ teamNamesys = gcnew String(teamName.c_str());
				String^ teamElosys = gcnew String(to_string(gameList.getTeamElo(selectedGame, teamName)).c_str());
				listBox_teams->Items->Add(teamNamesys + "   ( " + teamElosys + " )");
			}
		}
	}

// this function runs when a team is selected.  It refreshes the relevent menus and buttons affected.
	private: System::Void listBox_teams_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (listBox_teams->SelectedIndex != -1) {
			String^ selectedGamesys = listBox_games->SelectedItem->ToString();
			std::string selectedGame = msclr::interop::marshal_as< std::string >(selectedGamesys);
			string selectedTeam = gameList.getTeamName(selectedGame, listBox_teams->SelectedIndex);
			listBox_players->Items->Clear();
			gameSelected = false;
			teamSelected = true;
			playerSelected = false;
			buttonDelete->Text = "Remove " + gcnew String(selectedTeam.c_str());
			for (int i = 0; i < gameList.getTeamSize(selectedGame, selectedTeam); i++) {
				string playerName = gameList.getPlayerName(selectedGame, selectedTeam, i);
				String^ playerNamesys = gcnew String(playerName.c_str());
				listBox_players->Items->Add(playerNamesys);
			}
		}
	}

// this function runs when a player is selected.  It modifies the "remove" button
	private: System::Void listBox_players_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (listBox_players->SelectedIndex != -1) {
			gameSelected = false;
			teamSelected = false;
			playerSelected = true;
			buttonDelete->Text = "Remove " + listBox_players->SelectedItem->ToString();
		}
	}

// add player button is clicked
	private: System::Void buttonAddPlayer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (teamSelected == true || playerSelected == true) {
			String^ firstNamesys = textFirstName->Text;
			String^ lastNamesys = textLastName->Text;
			string firstName = msclr::interop::marshal_as< std::string >(firstNamesys);
			string lastName = msclr::interop::marshal_as< std::string >(lastNamesys);
			int num = 123;
			string selectedGame = msclr::interop::marshal_as< std::string >(listBox_games->SelectedItem->ToString());
			string selectedTeam = gameList.getTeamName(selectedGame, listBox_teams->SelectedIndex);

			gameList.addPlayer(selectedGame, selectedTeam, firstName, lastName, num);
			refreshPlayers(selectedGame, selectedTeam);
		}
	}
	private: System::Void textFirstName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textLastName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
// "delete" button is clicked
	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gameSelected == true) {
			std::string selectedGame = msclr::interop::marshal_as< std::string >(listBox_games->SelectedItem->ToString());
			gameList.removeGame(selectedGame);
			refreshGames();
		}
		else if (teamSelected == true) {
			std::string selectedGame = msclr::interop::marshal_as< std::string >(listBox_games->SelectedItem->ToString());
			string selectedTeam = gameList.getTeamName(selectedGame, listBox_teams->SelectedIndex);
			gameList.removeTeam(selectedGame, selectedTeam);
			refreshTeams(selectedGame);
			teamSelected = false;
			gameSelected = true;

		}
		else if (playerSelected == true) {
			std::string selectedGame = msclr::interop::marshal_as< std::string >(listBox_games->SelectedItem->ToString());
			string selectedTeam = gameList.getTeamName(selectedGame, listBox_teams->SelectedIndex);
			int index = listBox_players->SelectedIndex;
			gameList.removePlayer(selectedGame, selectedTeam, index);
			refreshPlayers(selectedGame, selectedTeam);
		}
	}
// add a team
	private: System::Void buttonAddTeam_Click(System::Object^ sender, System::EventArgs^ e) {
		if (gameSelected == true || teamSelected == true || playerSelected == true) {
			string teamName = msclr::interop::marshal_as< std::string >(textTeamName->Text);
			string selectedGame = msclr::interop::marshal_as< std::string >(listBox_games->SelectedItem->ToString());
			gameList.addTeam(selectedGame, teamName, 100, "0000000");
			refreshTeams(selectedGame);
		}
	}
	private: System::Void textTeamName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

// add a game
	private: System::Void buttonAddGame_Click(System::Object^ sender, System::EventArgs^ e) {
		string gameName = msclr::interop::marshal_as< std::string >(textGameName->Text);
		gameList.addGame(gameName);
		refreshGames();
	}
// save the data structure to the save file
	private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
		gameList.outputToFile();
	}

// add a game to the game list
	private: System::Void buttonInputGame_Click(System::Object^ sender, System::EventArgs^ e) {
		if (menuInputGame == false) {
			removeButtonTeamAvailability();
			removeButtonSchedule();
			menuInputGame = true;
			refreshGameInput();
			Color darkGray;
			buttonInputGame->BackColor = darkGray.DarkGray;
			this->Controls->Add(this->menuTeamWin);
			this->Controls->Add(this->menuTeamLose);
			this->Controls->Add(this->buttonInputGameComplete);
		}
		else {
			removeButtonInputGame();
		}
	}
		   void removeButtonInputGame() {
			   menuTeamWin->Text = "Winning Team";
			   menuTeamLose->Text = "Losing Team";
			   Color gray;
			   buttonInputGame->UseVisualStyleBackColor = true;
			   this->Controls->Remove(this->menuTeamWin);
			   this->Controls->Remove(this->menuTeamLose);
			   this->Controls->Remove(this->buttonInputGameComplete);
			   menuInputGame = false;
		   }
	private: System::Void menuTeamWin_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void menuTeamLose_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

// input match results
	private: System::Void buttonInputGameComplete_Click(System::Object^ sender, System::EventArgs^ e) {
		string winningTeamName = msclr::interop::marshal_as< std::string >(menuTeamWin->Text);
		string losingTeamName = msclr::interop::marshal_as< std::string >(menuTeamLose->Text);
		if (listBox_games->SelectedIndex != -1 && winningTeamName != losingTeamName) {
			string selectedGame = msclr::interop::marshal_as< std::string >(listBox_games->SelectedItem->ToString());
			gameList.setMatchElo(selectedGame, winningTeamName, losingTeamName);
			refreshTeams(selectedGame);
		}
	}
// exit
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

// apply team availability
	private: System::Void buttonTeamAvailability_Click(System::Object^ sender, System::EventArgs^ e) {
		if (menuAvailability == false) {
			removeButtonInputGame();
			removeButtonSchedule();
			menuAvailability = true;
			for (int i = 0; i < 7; i++) {
				listTeamAvail->SetItemChecked(i, true);
			}
			Color darkGray;
			buttonTeamAvailability->BackColor = darkGray.DarkGray;
			this->Controls->Add(this->listTeamAvail);
			this->Controls->Add(this->menuAvail);

		}
		else {
			removeButtonTeamAvailability();
		}
	}
		   void removeButtonTeamAvailability() {
			   menuAvailability = false;
			   buttonTeamAvailability->UseVisualStyleBackColor = true;
			   this->Controls->Remove(this->listTeamAvail);
			   this->Controls->Remove(this->menuAvail);
		   }

// changes selected team in the availability menu
	private: System::Void listTeamAvail_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		string gameName = msclr::interop::marshal_as< std::string >(textGameName->Text);
		string teamName = msclr::interop::marshal_as< std::string >(menuTeamWin->Text);
		setTeamAvailability();

	}
	private: System::Void menuAvail_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		refreshTeamAvailability();
	}

// view schedule
	private: System::Void buttonViewSchedule_Click(System::Object^ sender, System::EventArgs^ e) {
		if (menuSchedule == false) {
			removeButtonInputGame();
			removeButtonTeamAvailability();
			menuSchedule = true;
			Color darkGray;
			buttonViewSchedule->BackColor = darkGray.DarkGray;
			this->Controls->Add(this->button_createSchedule);
			this->Controls->Add(this->listBoxSunday);
			this->Controls->Add(this->listBoxSaturday);
			this->Controls->Add(this->listBoxFriday);
			this->Controls->Add(this->listBoxThursday);
			this->Controls->Add(this->listBoxWednesday);
			this->Controls->Add(this->listBoxTuesday);
			this->Controls->Add(this->listBoxMonday);
			this->Controls->Add(this->label_schedule);

		}
		else {
			removeButtonSchedule();
		}
	}
		   void removeButtonSchedule() {
			   menuSchedule = false;
			   buttonViewSchedule->UseVisualStyleBackColor = true;
			   this->Controls->Remove(this->button_createSchedule);
			   this->Controls->Remove(this->listBoxSunday);
			   this->Controls->Remove(this->listBoxSaturday);
			   this->Controls->Remove(this->listBoxFriday);
			   this->Controls->Remove(this->listBoxThursday);
			   this->Controls->Remove(this->listBoxWednesday);
			   this->Controls->Remove(this->listBoxTuesday);
			   this->Controls->Remove(this->listBoxMonday);
			   this->Controls->Remove(this->label_schedule);
		   }

// create schedule and display it
	private: System::Void button_createSchedule_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox_games->SelectedIndex != -1) {
			std::string selectedGame = msclr::interop::marshal_as< std::string >(listBox_games->SelectedItem->ToString());
			gameList.createSchedule(selectedGame);
		}
		refreshSchedule();
	}
};
}
