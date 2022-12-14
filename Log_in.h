#pragma once

#include "Program.h"

namespace DatabasesAppsdoctorsOffice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Log_in
	/// </summary>
	public ref class Log_in : public System::Windows::Forms::Form
	{
	public:
		Log_in(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczy?? wszystkie u?ywane zasoby.
		/// </summary>
		~Log_in()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtL_User;
	private: System::Windows::Forms::TextBox^ txtL_Password;
	private: System::Windows::Forms::Button^ btnLogIn;
	private: System::Windows::Forms::Button^ btnCancel;



	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs?ugi projektanta ? nie nale?y modyfikowa?
		/// jej zawarto?ci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtL_User = (gcnew System::Windows::Forms::TextBox());
			this->txtL_Password = (gcnew System::Windows::Forms::TextBox());
			this->btnLogIn = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(171, 21);
			this->label1->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(280, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nazwa u?ytkownika";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(245, 196);
			this->label2->Margin = System::Windows::Forms::Padding(8, 0, 8, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Has?o";
			// 
			// txtL_User
			// 
			this->txtL_User->Location = System::Drawing::Point(179, 100);
			this->txtL_User->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->txtL_User->Multiline = true;
			this->txtL_User->Name = L"txtL_User";
			this->txtL_User->Size = System::Drawing::Size(260, 42);
			this->txtL_User->TabIndex = 2;
			this->txtL_User->Text = L"admin";
			// 
			// txtL_Password
			// 
			this->txtL_Password->Location = System::Drawing::Point(179, 269);
			this->txtL_Password->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->txtL_Password->Multiline = true;
			this->txtL_Password->Name = L"txtL_Password";
			this->txtL_Password->PasswordChar = '*';
			this->txtL_Password->Size = System::Drawing::Size(260, 42);
			this->txtL_Password->TabIndex = 3;
			this->txtL_Password->Text = L"admin";
			// 
			// btnLogIn
			// 
			this->btnLogIn->Location = System::Drawing::Point(32, 382);
			this->btnLogIn->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnLogIn->Name = L"btnLogIn";
			this->btnLogIn->Size = System::Drawing::Size(200, 55);
			this->btnLogIn->TabIndex = 4;
			this->btnLogIn->Text = L"Zaloguj";
			this->btnLogIn->UseVisualStyleBackColor = true;
			this->btnLogIn->Click += gcnew System::EventHandler(this, &Log_in::btnLogIn_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(437, 382);
			this->btnCancel->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(200, 55);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"Anuluj";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Log_in::btnCancel_Click);
			// 
			// Log_in
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 463);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnLogIn);
			this->Controls->Add(this->txtL_Password);
			this->Controls->Add(this->txtL_User);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->Name = L"Log_in";
			this->Text = L"Log_in";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btnLogIn_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ db_conf = L" datasource=localhost; port=3306; username=root; password=root123; database=databasesapps_doctorsoffice";
	MySqlConnection^ db_conn = gcnew MySqlConnection(db_conf);
	MySqlCommand^ query = gcnew MySqlCommand("SELECT user_id FROM databasesapps_doctorsoffice.user Where user_name = '"+txtL_User->Text+"' and user_password = md5('" + txtL_Password->Text + "');", db_conn);


	MySqlDataReader^ read;

	try
	{
		db_conn->Open();
		read = query->ExecuteReader();

		if (read->Read())
		{
			int id_user = read->GetInt32(0);

			this->Hide();
			Program^ program = gcnew Program(id_user);
			program->ShowDialog();
			this->Close();
		}

		else 
		{
			MessageBox::Show("Incorrect username or password");

			//u -> admin
			//p -> admin



		}
	}
	catch(Exception^ ex_dbcon)
	{
		MessageBox::Show(ex_dbcon->Message);
	}

	db_conn->Close();
}
};
}
