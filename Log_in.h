#pragma once

#include "Program.h"

namespace DatabasesAppsdoctorsOffice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
		/// Wyczyœæ wszystkie u¿ywane zasoby.
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
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
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
			this->label1->Location = System::Drawing::Point(64, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nazwa u¿ytkownika";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(92, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Has³o";
			// 
			// txtL_User
			// 
			this->txtL_User->Location = System::Drawing::Point(67, 42);
			this->txtL_User->Multiline = true;
			this->txtL_User->Name = L"txtL_User";
			this->txtL_User->Size = System::Drawing::Size(100, 20);
			this->txtL_User->TabIndex = 2;
			// 
			// txtL_Password
			// 
			this->txtL_Password->Location = System::Drawing::Point(67, 113);
			this->txtL_Password->Multiline = true;
			this->txtL_Password->Name = L"txtL_Password";
			this->txtL_Password->PasswordChar = '*';
			this->txtL_Password->Size = System::Drawing::Size(100, 20);
			this->txtL_Password->TabIndex = 3;
			// 
			// btnLogIn
			// 
			this->btnLogIn->Location = System::Drawing::Point(12, 160);
			this->btnLogIn->Name = L"btnLogIn";
			this->btnLogIn->Size = System::Drawing::Size(75, 23);
			this->btnLogIn->TabIndex = 4;
			this->btnLogIn->Text = L"Zaloguj";
			this->btnLogIn->UseVisualStyleBackColor = true;
			this->btnLogIn->Click += gcnew System::EventHandler(this, &Log_in::btnLogIn_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(164, 160);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"Anuluj";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Log_in::btnCancel_Click);
			// 
			// Log_in
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(251, 194);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnLogIn);
			this->Controls->Add(this->txtL_Password);
			this->Controls->Add(this->txtL_User);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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

	this->Hide();
	Program^ program = gcnew Program();
	program->ShowDialog();
	this->Close();
}



};
}
