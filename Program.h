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
		int id_user;
		String^ db_conf = L" datasource=localhost; port=3306; username=root; password=root123; database=databasesapps_doctorsoffice";

		Program(int user)
		{
			id_user = user;

			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczy�� wszystkie u�ywane zasoby.
		/// </summary>
		~Program()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tbPage_Users;
	private: System::Windows::Forms::DataGridView^ dgwUsers;
	private: System::Windows::Forms::TextBox^ txtUserSearch;

	private: System::Windows::Forms::Button^ btnUsersSearch;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs�ugi projektanta � nie nale�y modyfikowa�
		/// jej zawarto�ci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tbPage_Users = (gcnew System::Windows::Forms::TabPage());
			this->dgwUsers = (gcnew System::Windows::Forms::DataGridView());
			this->txtUserSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnUsersSearch = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tbPage_Users->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwUsers))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tbPage_Users);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(2106, 1541);
			this->tabControl1->TabIndex = 0;
			// 
			// tbPage_Users
			// 
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
			// dgwUsers
			// 
			this->dgwUsers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgwUsers->Location = System::Drawing::Point(984, 8);
			this->dgwUsers->Name = L"dgwUsers";
			this->dgwUsers->RowHeadersWidth = 102;
			this->dgwUsers->RowTemplate->Height = 40;
			this->dgwUsers->Size = System::Drawing::Size(1096, 1469);
			this->dgwUsers->TabIndex = 3;
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
			this->tabPage2->Location = System::Drawing::Point(10, 48);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(2086, 1483);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2116, 1579);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Program";
			this->Text = L"Program";
			this->tabControl1->ResumeLayout(false);
			this->tbPage_Users->ResumeLayout(false);
			this->tbPage_Users->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwUsers))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnUsersSearch_Click(System::Object^ sender, System::EventArgs^ e) {

		MySqlConnection^ db_conn = gcnew MySqlConnection(db_conf);
		MySqlCommand^ query = gcnew MySqlCommand("SELECT user_id , user_name, user_firstName, user_surname, user_type FROM databasesapps_doctorsoffice.user Where CONCAT(user_name, '', user_firstName, user_surname) LIKE '%"+txtUserSearch->Text+"%';", db_conn);

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
};
}
