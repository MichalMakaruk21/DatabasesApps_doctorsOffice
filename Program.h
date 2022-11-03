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

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnChangePassword;
	private: System::Windows::Forms::TextBox^ txtRepeatNewPassword;
	private: System::Windows::Forms::TextBox^ txtNewPassword;
	private: System::Windows::Forms::TextBox^ txtCurrentPassword;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tbPage_Users;
	private: System::Windows::Forms::DataGridView^ dgwUsers;
	private: System::Windows::Forms::TextBox^ txtUserSearch;
	private: System::Windows::Forms::Button^ btnUsersSearch;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ gUserEditor;
	private: System::Windows::Forms::CheckBox^ chB_employee;
	public:
	private: System::Windows::Forms::Button^ btnDeleteUser;
	public:
	private: System::Windows::Forms::Button^ btnEditUser;
	private: System::Windows::Forms::Button^ btnAddUser;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtLogin;
	private: System::Windows::Forms::TextBox^ txtSurname;
	private: System::Windows::Forms::TextBox^ txtName;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tbPage_Users = (gcnew System::Windows::Forms::TabPage());
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnChangePassword = (gcnew System::Windows::Forms::Button());
			this->txtRepeatNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtCurrentPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnAddUser = (gcnew System::Windows::Forms::Button());
			this->btnEditUser = (gcnew System::Windows::Forms::Button());
			this->btnDeleteUser = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tbPage_Users->SuspendLayout();
			this->gUserEditor->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwUsers))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tbPage_Users);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(2106, 1541);
			this->tabControl1->TabIndex = 0;
			// 
			// tbPage_Users
			// 
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
			this->tbPage_Users->Size = System::Drawing::Size(2086, 1483);
			this->tbPage_Users->TabIndex = 0;
			this->tbPage_Users->Text = L"Users";
			this->tbPage_Users->UseVisualStyleBackColor = true;
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
			this->gUserEditor->Size = System::Drawing::Size(861, 753);
			this->gUserEditor->TabIndex = 4;
			this->gUserEditor->TabStop = false;
			this->gUserEditor->Text = L"User data editor";
			// 
			// chB_employee
			// 
			this->chB_employee->AutoSize = true;
			this->chB_employee->Location = System::Drawing::Point(443, 552);
			this->chB_employee->Name = L"chB_employee";
			this->chB_employee->Size = System::Drawing::Size(180, 36);
			this->chB_employee->TabIndex = 5;
			this->chB_employee->Text = L"Employee";
			this->chB_employee->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(85, 382);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 32);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Login";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(71, 263);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 32);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Surname";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(67, 140);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 32);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Name";
			// 
			// txtLogin
			// 
			this->txtLogin->Location = System::Drawing::Point(383, 392);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(299, 38);
			this->txtLogin->TabIndex = 2;
			// 
			// txtSurname
			// 
			this->txtSurname->Location = System::Drawing::Point(383, 278);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(299, 38);
			this->txtSurname->TabIndex = 1;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(383, 140);
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
			this->dgwUsers->Size = System::Drawing::Size(1038, 1469);
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
			this->btnUsersSearch->Size = System::Drawing::Size(322, 68);
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
			this->tabPage2->Controls->Add(this->groupBox1);
			this->tabPage2->Location = System::Drawing::Point(10, 48);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(2086, 1483);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Password change";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->btnChangePassword);
			this->groupBox1->Controls->Add(this->txtRepeatNewPassword);
			this->groupBox1->Controls->Add(this->txtNewPassword);
			this->groupBox1->Controls->Add(this->txtCurrentPassword);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(170, 266);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(624, 587);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
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
			// btnEditUser
			// 
			this->btnEditUser->Location = System::Drawing::Point(303, 1170);
			this->btnEditUser->Name = L"btnEditUser";
			this->btnEditUser->Size = System::Drawing::Size(162, 64);
			this->btnEditUser->TabIndex = 6;
			this->btnEditUser->Text = L"Edit";
			this->btnEditUser->UseVisualStyleBackColor = true;
			// 
			// btnDeleteUser
			// 
			this->btnDeleteUser->Location = System::Drawing::Point(574, 1170);
			this->btnDeleteUser->Name = L"btnDeleteUser";
			this->btnDeleteUser->Size = System::Drawing::Size(172, 64);
			this->btnDeleteUser->TabIndex = 7;
			this->btnDeleteUser->Text = L"Delete";
			this->btnDeleteUser->UseVisualStyleBackColor = true;
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2627, 1579);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Program";
			this->Text = L"Program";
			this->tabControl1->ResumeLayout(false);
			this->tbPage_Users->ResumeLayout(false);
			this->tbPage_Users->PerformLayout();
			this->gUserEditor->ResumeLayout(false);
			this->gUserEditor->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwUsers))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnUsersSearch_Click(System::Object^ sender, System::EventArgs^ e) {

		MySqlConnection^ db_conn = gcnew MySqlConnection(db_conf);
		MySqlCommand^ query = gcnew MySqlCommand("SELECT user_id, user_name as 'Login', user_firstName 'Firstname', user_surname as 'Surname', user_type as 'Type' FROM databasesapps_doctorsoffice.user Where CONCAT(user_name, '', user_firstName, user_surname) LIKE '%"+txtUserSearch->Text+"%';", db_conn);

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
		catch(Exception^ systemError)
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
		else{
			btnChangePassword->Enabled = false;
		}

	}


private: System::Void btnChangePassword_Click(System::Object^ sender, System::EventArgs^ e) {

		MySqlConnection^ db_conn = gcnew MySqlConnection(db_conf);

		MySqlCommand^ query = gcnew MySqlCommand("UPDATE databasesapps_doctorsoffice.user SET user_password = md5('"+txtNewPassword->Text+"') WHERE user_id = " + user_id + " AND user_password = md5('" + txtCurrentPassword->Text + "');", db_conn);

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

		//txtLogin->Text = dgwUsers->Rows[e->RowIndex]->Cells["Login"]->Value->ToString();
		// Zaimplemetuj Alliasy w zapytaniu
	}
}
private: System::Void btnAddUser_Click(System::Object^ sender, System::EventArgs^ e) {

	if ((txtName->Text->Length < 3 || txtSurname->Text->Length <3 || txtLogin->Text->Length < 6))
	{
		MessageBox::Show("Incorrect parameters");
	}
	else
	{

		MySqlConnection^ db_conn = gcnew MySqlConnection(db_conf);

		MySqlCommand^ query = db_conn->CreateCommand();

		MySqlTransaction^ transaction;

		db_conn->Open();
		// B³¹d
		transaction = db_conn->BeginTransaction(IsolationLevel::ReadCommitted);

		query->Connection = db_conn;
		query->Transaction = transaction;

		try
		{
			// default passowrd == password
			query->CommandText = "Insert Into databasesapps_doctorsoffice.user (user_name, user_firstname, user_surname, user_type, user_password) Values('" + txtLogin->Text + "', '" + txtName->Text + "', '" + txtSurname->Text + "', " + bool(chB_employee->Checked)+", md5('password')); ";
			query->ExecuteNonQuery();
			transaction->Commit();
		}
		catch (Exception^ systemError)
		{
			MessageBox::Show(systemError->Message);
		}
	}
}
};
}
