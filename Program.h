#pragma once

namespace DatabasesAppsdoctorsOffice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	public:
		int user_id;
	private: System::Windows::Forms::GroupBox^ gWorkHours;
	public:
	private: System::Windows::Forms::GroupBox^ gShema;
	private: System::Windows::Forms::Button^ b10TO18;

	private: System::Windows::Forms::Button^ b9TO17;

	private: System::Windows::Forms::Button^ b8TO16;

	private: System::Windows::Forms::Button^ b7TO15;
	private: System::Windows::Forms::TextBox^ txtSatFrom;



	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtFriFrom;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtThuFrom;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtWedFrom;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtTueFrom;


	private: System::Windows::Forms::Label^ label9;




	private: System::Windows::Forms::Label^ label8;






	private: System::Windows::Forms::GroupBox^ gUserEditor;
	private: System::Windows::Forms::CheckBox^ chB_employee;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtLogin;
	private: System::Windows::Forms::TextBox^ txtSurname;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtMonFrom;
	private: System::Windows::Forms::TextBox^ txtSatTo;
	private: System::Windows::Forms::TextBox^ txtFriTo;
	private: System::Windows::Forms::TextBox^ txtThuTo;
	private: System::Windows::Forms::TextBox^ txtWedTo;

	private: System::Windows::Forms::TextBox^ txtTueTo;
	private: System::Windows::Forms::TextBox^ txtMonTo;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label14;

		   // Rêczne dodanie public
	public: String^ db_conf = L" datasource=localhost; port=3306; username=root; password=root123; database=databasesapps_doctorsoffice";

		  Program(int user)
		  {
			  user_id = user;

			  InitializeComponent();
			  //
			  //TODO: W tym miejscu dodaj kod konstruktora
			  //
		  }

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Program()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gPasswordChange;
	protected:


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnChangePassword;
	private: System::Windows::Forms::TextBox^ txtRepeatNewPassword;
	private: System::Windows::Forms::TextBox^ txtNewPassword;
	private: System::Windows::Forms::TextBox^ txtCurrentPassword;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabControl^ tbPageOffer;

	private: System::Windows::Forms::TabPage^ tbPage_Users;
	private: System::Windows::Forms::DataGridView^ dgwUsers;
	private: System::Windows::Forms::TextBox^ txtUserSearch;
	private: System::Windows::Forms::Button^ btnUsersSearch;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;


	public:
	private: System::Windows::Forms::Button^ btnDeleteUser;
	public:
	private: System::Windows::Forms::Button^ btnEditUser;
	private: System::Windows::Forms::Button^ btnAddUser;







	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tbPageOffer = (gcnew System::Windows::Forms::TabControl());
			this->tbPage_Users = (gcnew System::Windows::Forms::TabPage());
			this->gWorkHours = (gcnew System::Windows::Forms::GroupBox());
			this->txtSatTo = (gcnew System::Windows::Forms::TextBox());
			this->txtFriTo = (gcnew System::Windows::Forms::TextBox());
			this->txtThuTo = (gcnew System::Windows::Forms::TextBox());
			this->txtWedTo = (gcnew System::Windows::Forms::TextBox());
			this->txtTueTo = (gcnew System::Windows::Forms::TextBox());
			this->txtMonTo = (gcnew System::Windows::Forms::TextBox());
			this->txtMonFrom = (gcnew System::Windows::Forms::TextBox());
			this->gShema = (gcnew System::Windows::Forms::GroupBox());
			this->b10TO18 = (gcnew System::Windows::Forms::Button());
			this->b9TO17 = (gcnew System::Windows::Forms::Button());
			this->b8TO16 = (gcnew System::Windows::Forms::Button());
			this->b7TO15 = (gcnew System::Windows::Forms::Button());
			this->txtSatFrom = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtFriFrom = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtThuFrom = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtWedFrom = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtTueFrom = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteUser = (gcnew System::Windows::Forms::Button());
			this->btnEditUser = (gcnew System::Windows::Forms::Button());
			this->btnAddUser = (gcnew System::Windows::Forms::Button());
			this->gUserEditor = (gcnew System::Windows::Forms::GroupBox());
			this->chB_employee = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->dgwUsers = (gcnew System::Windows::Forms::DataGridView());
			this->txtUserSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnUsersSearch = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->gPasswordChange = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnChangePassword = (gcnew System::Windows::Forms::Button());
			this->txtRepeatNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtCurrentPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tbPageOffer->SuspendLayout();
			this->tbPage_Users->SuspendLayout();
			this->gWorkHours->SuspendLayout();
			this->gShema->SuspendLayout();
			this->gUserEditor->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwUsers))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->gPasswordChange->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tbPageOffer
			// 
			this->tbPageOffer->Controls->Add(this->tbPage_Users);
			this->tbPageOffer->Controls->Add(this->tabPage2);
			this->tbPageOffer->Controls->Add(this->tabPage1);
			this->tbPageOffer->Location = System::Drawing::Point(12, -1);
			this->tbPageOffer->Name = L"tbPageOffer";
			this->tbPageOffer->SelectedIndex = 0;
			this->tbPageOffer->Size = System::Drawing::Size(2400, 1541);
			this->tbPageOffer->TabIndex = 0;
			// 
			// tbPage_Users
			// 
			this->tbPage_Users->Controls->Add(this->gWorkHours);
			this->tbPage_Users->Controls->Add(this->btnDeleteUser);
			this->tbPage_Users->Controls->Add(this->btnEditUser);
			this->tbPage_Users->Controls->Add(this->btnAddUser);
			this->tbPage_Users->Controls->Add(this->gUserEditor);
			this->tbPage_Users->Controls->Add(this->dgwUsers);
			this->tbPage_Users->Controls->Add(this->txtUserSearch);
			this->tbPage_Users->Controls->Add(this->btnUsersSearch);
			this->tbPage_Users->Controls->Add(this->label1);
			this->tbPage_Users->Location = System::Drawing::Point(10, 48);
			this->tbPage_Users->Name = L"tbPage_Users";
			this->tbPage_Users->Padding = System::Windows::Forms::Padding(3);
			this->tbPage_Users->Size = System::Drawing::Size(2380, 1483);
			this->tbPage_Users->TabIndex = 0;
			this->tbPage_Users->Text = L"Users";
			this->tbPage_Users->UseVisualStyleBackColor = true;
			// 
			// gWorkHours
			// 
			this->gWorkHours->Controls->Add(this->txtSatTo);
			this->gWorkHours->Controls->Add(this->txtFriTo);
			this->gWorkHours->Controls->Add(this->txtThuTo);
			this->gWorkHours->Controls->Add(this->txtWedTo);
			this->gWorkHours->Controls->Add(this->txtTueTo);
			this->gWorkHours->Controls->Add(this->txtMonTo);
			this->gWorkHours->Controls->Add(this->txtMonFrom);
			this->gWorkHours->Controls->Add(this->gShema);
			this->gWorkHours->Controls->Add(this->txtSatFrom);
			this->gWorkHours->Controls->Add(this->label13);
			this->gWorkHours->Controls->Add(this->txtFriFrom);
			this->gWorkHours->Controls->Add(this->label12);
			this->gWorkHours->Controls->Add(this->txtThuFrom);
			this->gWorkHours->Controls->Add(this->label11);
			this->gWorkHours->Controls->Add(this->txtWedFrom);
			this->gWorkHours->Controls->Add(this->label10);
			this->gWorkHours->Controls->Add(this->txtTueFrom);
			this->gWorkHours->Controls->Add(this->label9);
			this->gWorkHours->Controls->Add(this->label8);
			this->gWorkHours->Location = System::Drawing::Point(52, 633);
			this->gWorkHours->Name = L"gWorkHours";
			this->gWorkHours->Size = System::Drawing::Size(875, 503);
			this->gWorkHours->TabIndex = 8;
			this->gWorkHours->TabStop = false;
			this->gWorkHours->Text = L"Hours";
			this->gWorkHours->Visible = false;
			// 
			// txtSatTo
			// 
			this->txtSatTo->Location = System::Drawing::Point(415, 444);
			this->txtSatTo->Name = L"txtSatTo";
			this->txtSatTo->Size = System::Drawing::Size(183, 38);
			this->txtSatTo->TabIndex = 25;
			// 
			// txtFriTo
			// 
			this->txtFriTo->Location = System::Drawing::Point(415, 360);
			this->txtFriTo->Name = L"txtFriTo";
			this->txtFriTo->Size = System::Drawing::Size(183, 38);
			this->txtFriTo->TabIndex = 24;
			// 
			// txtThuTo
			// 
			this->txtThuTo->Location = System::Drawing::Point(415, 294);
			this->txtThuTo->Name = L"txtThuTo";
			this->txtThuTo->Size = System::Drawing::Size(183, 38);
			this->txtThuTo->TabIndex = 23;
			// 
			// txtWedTo
			// 
			this->txtWedTo->Location = System::Drawing::Point(415, 227);
			this->txtWedTo->Name = L"txtWedTo";
			this->txtWedTo->Size = System::Drawing::Size(183, 38);
			this->txtWedTo->TabIndex = 22;
			// 
			// txtTueTo
			// 
			this->txtTueTo->Location = System::Drawing::Point(415, 159);
			this->txtTueTo->Name = L"txtTueTo";
			this->txtTueTo->Size = System::Drawing::Size(183, 38);
			this->txtTueTo->TabIndex = 21;
			// 
			// txtMonTo
			// 
			this->txtMonTo->Location = System::Drawing::Point(415, 78);
			this->txtMonTo->Name = L"txtMonTo";
			this->txtMonTo->Size = System::Drawing::Size(183, 38);
			this->txtMonTo->TabIndex = 20;
			// 
			// txtMonFrom
			// 
			this->txtMonFrom->Location = System::Drawing::Point(184, 78);
			this->txtMonFrom->Name = L"txtMonFrom";
			this->txtMonFrom->Size = System::Drawing::Size(183, 38);
			this->txtMonFrom->TabIndex = 19;
			// 
			// gShema
			// 
			this->gShema->Controls->Add(this->b10TO18);
			this->gShema->Controls->Add(this->b9TO17);
			this->gShema->Controls->Add(this->b8TO16);
			this->gShema->Controls->Add(this->b7TO15);
			this->gShema->Location = System::Drawing::Point(638, 64);
			this->gShema->Name = L"gShema";
			this->gShema->Size = System::Drawing::Size(200, 433);
			this->gShema->TabIndex = 18;
			this->gShema->TabStop = false;
			this->gShema->Text = L"Shema";
			// 
			// b10TO18
			// 
			this->b10TO18->Location = System::Drawing::Point(41, 352);
			this->b10TO18->Name = L"b10TO18";
			this->b10TO18->Size = System::Drawing::Size(118, 65);
			this->b10TO18->TabIndex = 3;
			this->b10TO18->Text = L"10 - 18";
			this->b10TO18->UseVisualStyleBackColor = true;
			this->b10TO18->Click += gcnew System::EventHandler(this, &Program::b10TO18_Click);
			// 
			// b9TO17
			// 
			this->b9TO17->Location = System::Drawing::Point(41, 255);
			this->b9TO17->Name = L"b9TO17";
			this->b9TO17->Size = System::Drawing::Size(118, 65);
			this->b9TO17->TabIndex = 2;
			this->b9TO17->Text = L"9 - 17";
			this->b9TO17->UseVisualStyleBackColor = true;
			this->b9TO17->Click += gcnew System::EventHandler(this, &Program::b9TO17_Click);
			// 
			// b8TO16
			// 
			this->b8TO16->Location = System::Drawing::Point(41, 166);
			this->b8TO16->Name = L"b8TO16";
			this->b8TO16->Size = System::Drawing::Size(118, 65);
			this->b8TO16->TabIndex = 1;
			this->b8TO16->Text = L"8 - 16";
			this->b8TO16->UseVisualStyleBackColor = true;
			this->b8TO16->Click += gcnew System::EventHandler(this, &Program::b8TO16_Click);
			// 
			// b7TO15
			// 
			this->b7TO15->Location = System::Drawing::Point(41, 71);
			this->b7TO15->Name = L"b7TO15";
			this->b7TO15->Size = System::Drawing::Size(118, 65);
			this->b7TO15->TabIndex = 0;
			this->b7TO15->Text = L"7 - 15";
			this->b7TO15->UseVisualStyleBackColor = true;
			this->b7TO15->Click += gcnew System::EventHandler(this, &Program::b7TO15_Click);
			// 
			// txtSatFrom
			// 
			this->txtSatFrom->Location = System::Drawing::Point(184, 444);
			this->txtSatFrom->Name = L"txtSatFrom";
			this->txtSatFrom->Size = System::Drawing::Size(183, 38);
			this->txtSatFrom->TabIndex = 16;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(5, 433);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(129, 32);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Saturday";
			// 
			// txtFriFrom
			// 
			this->txtFriFrom->Location = System::Drawing::Point(184, 363);
			this->txtFriFrom->Name = L"txtFriFrom";
			this->txtFriFrom->Size = System::Drawing::Size(183, 38);
			this->txtFriFrom->TabIndex = 13;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(10, 366);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 32);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Friday";
			// 
			// txtThuFrom
			// 
			this->txtThuFrom->Location = System::Drawing::Point(184, 297);
			this->txtThuFrom->Name = L"txtThuFrom";
			this->txtThuFrom->Size = System::Drawing::Size(183, 38);
			this->txtThuFrom->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(5, 297);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(140, 32);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Thuesday";
			// 
			// txtWedFrom
			// 
			this->txtWedFrom->Location = System::Drawing::Point(184, 230);
			this->txtWedFrom->Name = L"txtWedFrom";
			this->txtWedFrom->Size = System::Drawing::Size(183, 38);
			this->txtWedFrom->TabIndex = 7;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(10, 165);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(124, 32);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Tuesday";
			// 
			// txtTueFrom
			// 
			this->txtTueFrom->Location = System::Drawing::Point(184, 162);
			this->txtTueFrom->Name = L"txtTueFrom";
			this->txtTueFrom->Size = System::Drawing::Size(183, 38);
			this->txtTueFrom->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 230);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(165, 32);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Wenedsday";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 77);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 32);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Monday";
			// 
			// btnDeleteUser
			// 
			this->btnDeleteUser->Location = System::Drawing::Point(574, 1170);
			this->btnDeleteUser->Name = L"btnDeleteUser";
			this->btnDeleteUser->Size = System::Drawing::Size(172, 64);
			this->btnDeleteUser->TabIndex = 7;
			this->btnDeleteUser->Text = L"Delete";
			this->btnDeleteUser->UseVisualStyleBackColor = true;
			this->btnDeleteUser->Visible = false;
			this->btnDeleteUser->Click += gcnew System::EventHandler(this, &Program::btnDeleteUser_Click);
			// 
			// btnEditUser
			// 
			this->btnEditUser->Location = System::Drawing::Point(303, 1170);
			this->btnEditUser->Name = L"btnEditUser";
			this->btnEditUser->Size = System::Drawing::Size(162, 64);
			this->btnEditUser->TabIndex = 6;
			this->btnEditUser->Text = L"Edit";
			this->btnEditUser->UseVisualStyleBackColor = true;
			this->btnEditUser->Visible = false;
			this->btnEditUser->Click += gcnew System::EventHandler(this, &Program::btnEditUser_Click);
			// 
			// btnAddUser
			// 
			this->btnAddUser->Location = System::Drawing::Point(89, 1170);
			this->btnAddUser->Name = L"btnAddUser";
			this->btnAddUser->Size = System::Drawing::Size(150, 64);
			this->btnAddUser->TabIndex = 5;
			this->btnAddUser->Text = L"Add";
			this->btnAddUser->UseVisualStyleBackColor = true;
			this->btnAddUser->Click += gcnew System::EventHandler(this, &Program::btnAddUser_Click);
			// 
			// gUserEditor
			// 
			this->gUserEditor->Controls->Add(this->chB_employee);
			this->gUserEditor->Controls->Add(this->label7);
			this->gUserEditor->Controls->Add(this->label6);
			this->gUserEditor->Controls->Add(this->label5);
			this->gUserEditor->Controls->Add(this->txtLogin);
			this->gUserEditor->Controls->Add(this->txtSurname);
			this->gUserEditor->Controls->Add(this->txtName);
			this->gUserEditor->Location = System::Drawing::Point(38, 218);
			this->gUserEditor->Name = L"gUserEditor";
			this->gUserEditor->Size = System::Drawing::Size(861, 296);
			this->gUserEditor->TabIndex = 4;
			this->gUserEditor->TabStop = false;
			this->gUserEditor->Text = L"User data editor";
			// 
			// chB_employee
			// 
			this->chB_employee->AutoSize = true;
			this->chB_employee->Location = System::Drawing::Point(77, 242);
			this->chB_employee->Name = L"chB_employee";
			this->chB_employee->Size = System::Drawing::Size(180, 36);
			this->chB_employee->TabIndex = 5;
			this->chB_employee->Text = L"Employee";
			this->chB_employee->UseVisualStyleBackColor = true;
			this->chB_employee->CheckedChanged += gcnew System::EventHandler(this, &Program::chB_employee_CheckedChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(75, 178);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 32);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Login";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(71, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 32);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Surname";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(71, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 32);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Name";
			// 
			// txtLogin
			// 
			this->txtLogin->Location = System::Drawing::Point(383, 188);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(299, 38);
			this->txtLogin->TabIndex = 2;
			// 
			// txtSurname
			// 
			this->txtSurname->Location = System::Drawing::Point(383, 129);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(299, 38);
			this->txtSurname->TabIndex = 1;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(383, 64);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(299, 38);
			this->txtName->TabIndex = 0;
			// 
			// dgwUsers
			// 
			this->dgwUsers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgwUsers->Location = System::Drawing::Point(984, 8);
			this->dgwUsers->Name = L"dgwUsers";
			this->dgwUsers->RowHeadersWidth = 102;
			this->dgwUsers->RowTemplate->Height = 40;
			this->dgwUsers->Size = System::Drawing::Size(1349, 1469);
			this->dgwUsers->TabIndex = 3;
			this->dgwUsers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgwUsers_CellClick);
			this->dgwUsers->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgwUsers_CellContentClick);
			// 
			// txtUserSearch
			// 
			this->txtUserSearch->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtUserSearch->Location = System::Drawing::Point(202, 25);
			this->txtUserSearch->Name = L"txtUserSearch";
			this->txtUserSearch->Size = System::Drawing::Size(242, 38);
			this->txtUserSearch->TabIndex = 2;
			// 
			// btnUsersSearch
			// 
			this->btnUsersSearch->Location = System::Drawing::Point(605, 80);
			this->btnUsersSearch->Name = L"btnUsersSearch";
			this->btnUsersSearch->Size = System::Drawing::Size(322, 48);
			this->btnUsersSearch->TabIndex = 1;
			this->btnUsersSearch->Text = L"Search";
			this->btnUsersSearch->UseVisualStyleBackColor = true;
			this->btnUsersSearch->Click += gcnew System::EventHandler(this, &Program::btnUsersSearch_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Search";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->gPasswordChange);
			this->tabPage2->Location = System::Drawing::Point(10, 48);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(2380, 1483);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Password change";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// gPasswordChange
			// 
			this->gPasswordChange->Controls->Add(this->label4);
			this->gPasswordChange->Controls->Add(this->label3);
			this->gPasswordChange->Controls->Add(this->btnChangePassword);
			this->gPasswordChange->Controls->Add(this->txtRepeatNewPassword);
			this->gPasswordChange->Controls->Add(this->txtNewPassword);
			this->gPasswordChange->Controls->Add(this->txtCurrentPassword);
			this->gPasswordChange->Controls->Add(this->label2);
			this->gPasswordChange->Location = System::Drawing::Point(170, 266);
			this->gPasswordChange->Name = L"gPasswordChange";
			this->gPasswordChange->Size = System::Drawing::Size(624, 587);
			this->gPasswordChange->TabIndex = 2;
			this->gPasswordChange->TabStop = false;
			this->gPasswordChange->Text = L"groupBox1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(49, 271);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(238, 32);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Repeat Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 32);
			this->label3->TabIndex = 5;
			this->label3->Text = L"New Password";
			// 
			// btnChangePassword
			// 
			this->btnChangePassword->Enabled = false;
			this->btnChangePassword->Location = System::Drawing::Point(55, 426);
			this->btnChangePassword->Name = L"btnChangePassword";
			this->btnChangePassword->Size = System::Drawing::Size(281, 121);
			this->btnChangePassword->TabIndex = 4;
			this->btnChangePassword->Text = L"Update";
			this->btnChangePassword->UseVisualStyleBackColor = true;
			this->btnChangePassword->Click += gcnew System::EventHandler(this, &Program::btnChangePassword_Click);
			// 
			// txtRepeatNewPassword
			// 
			this->txtRepeatNewPassword->Location = System::Drawing::Point(303, 271);
			this->txtRepeatNewPassword->Name = L"txtRepeatNewPassword";
			this->txtRepeatNewPassword->PasswordChar = '*';
			this->txtRepeatNewPassword->Size = System::Drawing::Size(259, 38);
			this->txtRepeatNewPassword->TabIndex = 3;
			this->txtRepeatNewPassword->TextChanged += gcnew System::EventHandler(this, &Program::txtRepeatNewPassword_TextChanged);
			// 
			// txtNewPassword
			// 
			this->txtNewPassword->Location = System::Drawing::Point(304, 177);
			this->txtNewPassword->Name = L"txtNewPassword";
			this->txtNewPassword->PasswordChar = '*';
			this->txtNewPassword->Size = System::Drawing::Size(258, 38);
			this->txtNewPassword->TabIndex = 2;
			this->txtNewPassword->TextChanged += gcnew System::EventHandler(this, &Program::txtNewPassword_TextChanged);
			// 
			// txtCurrentPassword
			// 
			this->txtCurrentPassword->Location = System::Drawing::Point(303, 80);
			this->txtCurrentPassword->Name = L"txtCurrentPassword";
			this->txtCurrentPassword->PasswordChar = '*';
			this->txtCurrentPassword->Size = System::Drawing::Size(253, 38);
			this->txtCurrentPassword->TabIndex = 1;
			this->txtCurrentPassword->TextChanged += gcnew System::EventHandler(this, &Program::txtCurrentPassword_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(228, 32);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Curent password";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Location = System::Drawing::Point(10, 48);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(2380, 1483);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(85, 71);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(78, 32);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Offer";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(472, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(504, 38);
			this->textBox1->TabIndex = 1;
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2442, 1541);
			this->Controls->Add(this->tbPageOffer);
			this->Name = L"Program";
			this->Text = L"Program";
			this->tbPageOffer->ResumeLayout(false);
			this->tbPage_Users->ResumeLayout(false);
			this->tbPage_Users->PerformLayout();
			this->gWorkHours->ResumeLayout(false);
			this->gWorkHours->PerformLayout();
			this->gShema->ResumeLayout(false);
			this->gUserEditor->ResumeLayout(false);
			this->gUserEditor->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwUsers))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->gPasswordChange->ResumeLayout(false);
			this->gPasswordChange->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}

	private: Void workTime(int timeStart) {

		array<TextBox^>^ initalTime = { txtMonFrom, txtTueFrom, txtWedFrom, txtThuFrom, txtFriFrom ,txtSatFrom};
		array<TextBox^>^endTime = { txtMonTo, txtTueTo, txtWedTo, txtThuTo, txtFriTo, txtSatTo};

		for (int i = 0; i <= 5; i++)
		{
			initalTime[i]->Text = timeStart + ":00";
			endTime[i]->Text = timeStart + 8 + ":00";
		}

	}
#pragma endregion
	private: System::Void btnUsersSearch_Click(System::Object^ sender, System::EventArgs^ e) {

		MySqlConnection^ db_conn = gcnew MySqlConnection(db_conf);
		MySqlCommand^ query = gcnew MySqlCommand("SELECT user_id, user_name as 'Login', user_firstName 'Firstname', user_surname as 'Surname', user_type as 'Type' FROM databasesapps_doctorsoffice.user Where CONCAT(user_name, '', user_firstName, user_surname) LIKE '%" + txtUserSearch->Text + "%';", db_conn);

		try
		{
			db_conn->Open();
			MySqlDataAdapter^ doctorsOffice_Database = gcnew MySqlDataAdapter();
			doctorsOffice_Database->SelectCommand = query;
			DataTable^ table = gcnew DataTable();
			doctorsOffice_Database->Fill(table);

			BindingSource^ dataSource = gcnew BindingSource();
			dataSource->DataSource = table;

			dgwUsers->DataSource = dataSource;

			db_conn->Close();
		}
		catch (Exception^ systemError)
		{
			MessageBox::Show(systemError->Message);
		}

		dgwUsers->Columns[0]->Visible = false;
	}




		   int id_record;

	private: Void btnChangePassword_show() {

		if ((txtNewPassword->Text == txtRepeatNewPassword->Text) && (txtNewPassword->Text != "") && (txtCurrentPassword->Text != "") && (txtNewPassword->Text->Length > 4)) {
			btnChangePassword->Enabled = true;
		}
		else {
			btnChangePassword->Enabled = false;
		}

	}


	private: System::Void btnChangePassword_Click(System::Object^ sender, System::EventArgs^ e) {

		MySqlConnection^ db_conn = gcnew MySqlConnection(db_conf);

		MySqlCommand^ query = gcnew MySqlCommand("UPDATE databasesapps_doctorsoffice.user SET user_password = md5('" + txtNewPassword->Text + "') WHERE user_id = " + user_id + " AND user_password = md5('" + txtCurrentPassword->Text + "');", db_conn);

		try
		{
			db_conn->Open();
			// w if (txtNewPassword->Text == txtRepeatNewPassword->Text) && (txtNewPassword->Text != "")
			if (query->ExecuteNonQuery())
			{


				MessageBox::Show("Password has been changed");
				// Test -> XD
			}
			else
			{
				MessageBox::Show("Wrong parameters");
			}

			db_conn->Close();
		}
		catch (Exception^ systemError)
		{
			MessageBox::Show(systemError->Message);
		}


	}
	private: System::Void txtCurrentPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		btnChangePassword_show();
	}
	private: System::Void txtNewPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		btnChangePassword_show();
	}
	private: System::Void txtRepeatNewPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		btnChangePassword_show();
	}
	private: System::Void dgwUsers_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		// Usless
	}
	private: System::Void dgwUsers_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		if (e->RowIndex >= 0) {
			id_record = Convert::ToInt32(dgwUsers->Rows[e->RowIndex]->Cells[0]->Value);

			txtName->Text = dgwUsers->Rows[e->RowIndex]->Cells["Firstname"]->Value->ToString();

			txtSurname->Text = dgwUsers->Rows[e->RowIndex]->Cells["Surname"]->Value->ToString();

			txtLogin->Text = dgwUsers->Rows[e->RowIndex]->Cells["Login"]->Value->ToString();

			chB_employee->Checked = Convert::ToBoolean(dgwUsers->Rows[e->RowIndex]->Cells["Type"]->Value);


			btnEditUser->Visible = true;
			btnDeleteUser->Visible = true;


			if (chB_employee->Checked) {
				MySqlConnection^ db_conn = gcnew MySqlConnection(db_conf);
				MySqlCommand^ query = gcnew MySqlCommand("SELECT * From databasesapps_doctorsoffice.hours Where user_user_id="+id_record+";", db_conn);

				MySqlDataReader^ data;

				try
				{
					db_conn->Open();
					data = query->ExecuteReader();

					while (data->Read())
					{
						txtMonFrom->Text = data->GetString("mon_from");
						txtMonTo->Text = data->GetString("mon_to");
						txtTueFrom->Text = data->GetString("tue_from");
						txtTueTo->Text = data->GetString("tue_to");
						txtWedFrom->Text = data->GetString("wed_from");
						txtWedTo->Text = data->GetString("wed_to");
						txtThuFrom->Text = data->GetString("thu_from");
						txtThuTo->Text = data->GetString("thu_to");
						txtFriFrom->Text = data->GetString("fri_from");
						txtFriTo->Text = data->GetString("fri_to");
						txtSatFrom->Text = data->GetString("sat_from");
						txtSatTo->Text = data->GetString("sat_to");

					}
					db_conn->Close();
				}
				catch (Exception^ systemError)
				{
					MessageBox::Show(systemError->Message);
				}
			}

			//txtLogin->Text = dgwUsers->Rows[e->RowIndex]->Cells["Login"]->Value->ToString();
			// Zaimplemetuj Alliasy w zapytaniu
		}
	}



	private: Void refereshDataGrid() {
		MySqlConnection^ db_conn = gcnew MySqlConnection(db_conf);
		MySqlCommand^ query = gcnew MySqlCommand("SELECT user_id, user_name as 'Login', user_firstName 'Firstname', user_surname as 'Surname', user_type as 'Type' FROM databasesapps_doctorsoffice.user;", db_conn);

		try
		{
			db_conn->Open();
			MySqlDataAdapter^ doctorsOffice_Database = gcnew MySqlDataAdapter();
			doctorsOffice_Database->SelectCommand = query;
			DataTable^ table = gcnew DataTable();
			doctorsOffice_Database->Fill(table);

			BindingSource^ dataSource = gcnew BindingSource();
			dataSource->DataSource = table;

			dgwUsers->DataSource = dataSource;

			db_conn->Close();
		}
		catch (Exception^ systemError)
		{
			MessageBox::Show(systemError->Message);
		}

		dgwUsers->Columns[0]->Visible = false;
	}

	private: Void clearGroupBoxControls(Control^ collections_set) {
		for each (Control ^ element in collections_set->Controls) {

			if (element->GetType() == TextBox::typeid) {
				element->Text = "";
				//chB_employee->Checked = false;
			}

		}
	}

		   // Spróbuj to upiêkszyæ lambd¹ w zapytaniu
		   int user_type;
	private: Void userType() {
		if (chB_employee->Checked) {
			user_type = 1;
		}
		else {
			user_type = 0;
		}
	}
	private: System::Void btnAddUser_Click(System::Object^ sender, System::EventArgs^ e) {
		userType();

		if ((txtName->Text->Length < 3 || txtSurname->Text->Length < 3 || txtLogin->Text->Length < 6))
		{
			MessageBox::Show("Incorrect parameters");
		}
		else
		{

			MySqlConnection^ db_conn = gcnew MySqlConnection(db_conf);

			MySqlCommand^ query = db_conn->CreateCommand();

			MySqlTransaction^ transaction;

			db_conn->Open();

			// Enviroment error, does not effect compilation
			transaction = db_conn->BeginTransaction(IsolationLevel::ReadCommitted);

			query->Connection = db_conn;
			query->Transaction = transaction;

			try
			{
				// default passowrd == user login
				query->CommandText = "Insert Into databasesapps_doctorsoffice.user Set user_name = '" + txtLogin->Text + "', user_firstname = '" + txtName->Text + "', user_surname = '" + txtSurname->Text + "', user_type = " + user_type + ", user_password = md5('" + txtLogin->Text + "'); ";
				query->ExecuteNonQuery();
				
				if (chB_employee->Checked) {
					
					query->CommandText = "Insert Into databasesapps_doctorsoffice.hours Set user_user_id=last_insert_id(), mon_from='" + txtMonFrom->Text + "', mon_to='" + txtMonTo->Text + "', tue_from='" + txtTueFrom->Text + "', tue_to='" + txtTueTo->Text + "', wed_from='" + txtWedFrom->Text + "', wed_to='" + txtWedTo->Text + "', thu_from='" + txtThuFrom->Text + "', thu_to='" + txtThuTo->Text + "', fri_from='" + txtFriFrom->Text + "', fri_to='" + txtFriTo->Text + "', sat_from='" + txtSatFrom->Text + "', sat_to='" + txtSatTo->Text + "'; ";

					query->ExecuteNonQuery();
				}
				transaction->Commit();

				MessageBox::Show("User has been added");
			}
			catch (Exception^ systemError)
			{
				MessageBox::Show(systemError->Message);
			}
			db_conn->Close();
			refereshDataGrid();
			clearGroupBoxControls(gUserEditor);
			clearGroupBoxControls(gWorkHours);
		}
	}
	private: System::Void btnEditUser_Click(System::Object^ sender, System::EventArgs^ e) {

		userType();

		if ((txtName->Text->Length < 3 || txtSurname->Text->Length < 3 || txtLogin->Text->Length < 3))
		{
			MessageBox::Show("Incorrect parameters");
		}
		else
		{

			MySqlConnection^ db_conn = gcnew MySqlConnection(db_conf);

			MySqlCommand^ query = db_conn->CreateCommand();

			MySqlTransaction^ transaction;

			db_conn->Open();

			// Enviroment error, does not effect compilation
			transaction = db_conn->BeginTransaction(IsolationLevel::ReadCommitted);

			query->Connection = db_conn;
			query->Transaction = transaction;

			if (id_record == 1) {
				MessageBox::Show("You don't have permissions to update administrator");
			}
			else {
				try
				{
					query->CommandText = "Select * From databasesapps_doctorsoffice.hours Where user_user_id=" + id_record + "; ";
					MySqlDataReader^ resoult = query->ExecuteReader();
					resoult->Close();

					// default passowrd == user login
					query->CommandText = "Update databasesapps_doctorsoffice.user Set user_name = '" + txtLogin->Text + "', user_firstname = '" + txtName->Text + "', user_surname = '" + txtSurname->Text + "', user_type = " + user_type + " Where user_id = " + id_record + ";";
					query->ExecuteNonQuery();

					if (resoult->HasRows == true && chB_employee->Checked == true) 
					{
						//Update
						query->CommandText = "Update databasesapps_doctorsoffice.hours Set mon_from='" + txtMonFrom->Text + "', mon_to='" + txtMonTo->Text + "', tue_from='" + txtTueFrom->Text + "', tue_to='" + txtTueTo->Text + "', wed_from='" + txtWedFrom->Text + "', wed_to='" + txtWedTo->Text + "', thu_from='" + txtThuFrom->Text + "', thu_to='" + txtThuTo->Text + "', fri_from='" + txtFriFrom->Text + "', fri_to='" + txtFriTo->Text + "', sat_from='" + txtSatFrom->Text + "', sat_to='" + txtSatTo->Text + "'Where user_id = " + id_record + ";";

						query->ExecuteNonQuery();
					}
					else if(chB_employee->Checked)
					{
						// Insert

						query->CommandText = "Insert Into databasesapps_doctorsoffice.hours Set user_user_id=" + id_record + ", mon_from='" + txtMonFrom->Text + "', mon_to='" + txtMonTo->Text + "', tue_from='" + txtTueFrom->Text + "', tue_to='" + txtTueTo->Text + "', wed_from='" + txtWedFrom->Text + "', wed_to='" + txtWedTo->Text + "', thu_from='" + txtThuFrom->Text + "', thu_to='" + txtThuTo->Text + "', fri_from='" + txtFriFrom->Text + "', fri_to='" + txtFriTo->Text + "', sat_from='" + txtSatFrom->Text + "', sat_to='" + txtSatTo->Text + "'; ";

						query->ExecuteNonQuery();
					}

					transaction->Commit();
					MessageBox::Show("User has been modyfied");
				}
				catch (Exception^ systemError)
				{
					MessageBox::Show(systemError->Message);
				}
				db_conn->Close();
				refereshDataGrid();
				clearGroupBoxControls(gUserEditor);
				clearGroupBoxControls(gWorkHours);
			}
		}
	};
	private: System::Void btnDeleteUser_Click(System::Object^ sender, System::EventArgs^ e) {

		if (id_record == 1){
			MessageBox::Show("You don't have permissions to delete administrator");
		}
		else{
			userType();

			MySqlConnection^ db_conn = gcnew MySqlConnection(db_conf);

			MySqlCommand^ query = db_conn->CreateCommand();

			MySqlTransaction^ transaction;

			db_conn->Open();

			// Enviroment error, does not effect compilation
			transaction = db_conn->BeginTransaction(IsolationLevel::ReadCommitted);

			query->Connection = db_conn;
			query->Transaction = transaction;

			try
			{
				if (MessageBox::Show("Are you sure you want to delete user " + txtLogin->Text + "?", "Warning!!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
					// default passowrd == user login
					query->CommandText = "DELETE FROM databasesapps_doctorsoffice.hours WHERE user_user_id=" + id_record + ";";
					query->ExecuteNonQuery();

					query->CommandText = "DELETE FROM databasesapps_doctorsoffice.user WHERE user_id=" + id_record + ";";
					query->ExecuteNonQuery();

					transaction->Commit();

					MessageBox::Show("User has been deleted");
				}
			}
			catch (Exception^ systemError)
			{
				MessageBox::Show(systemError->Message);
			}
			db_conn->Close();
			refereshDataGrid();
			clearGroupBoxControls(gUserEditor);
			clearGroupBoxControls(gWorkHours);
		}
	}
private: System::Void chB_employee_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	if (chB_employee->Checked) {
		gWorkHours->Visible = true;
	}
	else {
		gWorkHours->Visible = false;
	}
	clearGroupBoxControls(gWorkHours);
}
private: System::Void b7TO15_Click(System::Object^ sender, System::EventArgs^ e) {
	workTime(7);
}
private: System::Void b8TO16_Click(System::Object^ sender, System::EventArgs^ e) {
	workTime(8);
}
private: System::Void b9TO17_Click(System::Object^ sender, System::EventArgs^ e) {
	workTime(9);
}
private: System::Void b10TO18_Click(System::Object^ sender, System::EventArgs^ e) {
	workTime(10);
}
};
};
