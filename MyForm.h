#pragma once
#include<iostream>
#include<fstream>
#include<msclr/marshal_cppstd.h>
#include<cstdlib>
#include<vector>
#include"AdminMenu.h"
#include"UserMenu.h"
#include"AdminMenu1.h"
namespace GUILeScOPrOjTaKe3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ MainExitButton;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->MainExitButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Location = System::Drawing::Point(12, 129);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(616, 303);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Transparent;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F));
			this->radioButton3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton3->Location = System::Drawing::Point(206, 27);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(89, 26);
			this->radioButton3->TabIndex = 19;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"ADMIN";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox4.BackgroundImage")));
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox4->Location = System::Drawing::Point(206, 62);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(209, 235);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::LightGreen;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(26, 180);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 32);
			this->textBox5->TabIndex = 16;
			this->textBox5->Text = L"zzaayyaamm";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::LightGreen;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(26, 82);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(121, 32);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"ZAYAM";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(6, 130);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 21);
			this->label7->TabIndex = 1;
			this->label7->Text = L"PassWord ::";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(6, 46);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 21);
			this->label8->TabIndex = 0;
			this->label8->Text = L"UserName ::";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton2->Location = System::Drawing::Point(414, 27);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(123, 26);
			this->radioButton2->TabIndex = 18;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"STUDENT ";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged_1);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton1->Location = System::Drawing::Point(16, 27);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(113, 26);
			this->radioButton1->TabIndex = 17;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"FACULTY";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox3.BackgroundImage")));
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox3->Location = System::Drawing::Point(411, 62);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(205, 235);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::LightGreen;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(35, 82);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(134, 32);
			this->textBox3->TabIndex = 20;
			this->textBox3->Text = L"1234";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::LightGreen;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(35, 180);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(134, 32);
			this->textBox4->TabIndex = 19;
			this->textBox4->Text = L"qwer123";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(31, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 21);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Password ::";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(31, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(119, 21);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Roll Number ::";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox2.BackgroundImage")));
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox2->Location = System::Drawing::Point(6, 62);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(199, 235);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightGreen;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(26, 180);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 32);
			this->textBox2->TabIndex = 16;
			this->textBox2->Text = L"1234";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightGreen;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(26, 82);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 32);
			this->textBox1->TabIndex = 15;
			this->textBox1->Text = L"zayam";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 21);
			this->label4->TabIndex = 1;
			this->label4->Text = L"PassWord ::";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 21);
			this->label3->TabIndex = 0;
			this->label3->Text = L"UserName ::";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Wheat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(496, 438);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 41);
			this->button2->TabIndex = 18;
			this->button2->Text = L"@LOGIN";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MainExitButton
			// 
			this->MainExitButton->BackColor = System::Drawing::Color::AntiqueWhite;
			this->MainExitButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->MainExitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->MainExitButton->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->MainExitButton->Location = System::Drawing::Point(12, 438);
			this->MainExitButton->Name = L"MainExitButton";
			this->MainExitButton->Size = System::Drawing::Size(132, 41);
			this->MainExitButton->TabIndex = 17;
			this->MainExitButton->Text = L"Exit";
			this->MainExitButton->UseVisualStyleBackColor = false;
			this->MainExitButton->Click += gcnew System::EventHandler(this, &MyForm::MainExitButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 15));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(168, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(304, 23);
			this->label2->TabIndex = 16;
			this->label2->Text = L"VERIFY YOUR IDENTITY FIRST";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 30, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(95, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(467, 46);
			this->label1->TabIndex = 15;
			this->label1->Text = L"PASSWORD MANAGER";
			// 
			// MyForm
			// 
			this->AcceptButton = this->button2;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->MainExitButton;
			this->ClientSize = System::Drawing::Size(640, 497);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->MainExitButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Thanks For Using :)");
		this->Close();
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked) {
			groupBox2->Enabled = 1;
			groupBox3->Enabled = 0;
			groupBox4->Enabled = 0;
		}
		if (!(radioButton1->Checked)) {
			groupBox2->Enabled = 0;
		}
	}

	bool EmployeeConfirmation(std::string username, std::string password) {
		std::string tbc = username + password;
		std::vector<std::string> FacName;
		std::vector<std::string> FacPass;
		std::vector<std::string> FacSubj;
		std::ifstream rdr;
		rdr.open("FacData.txt");
		while (!rdr.eof()) {
			std::string str;
			rdr >> str;
			FacName.push_back(str);
			rdr >> str;
			FacPass.push_back(str);
			rdr >> str;
			FacSubj.push_back(str);
		}
		rdr.close();
		for (int i = 0; i < FacName.size(); i++) {
			FacName[i].append(FacPass[i]);
		}
		for (int i = 0; i < FacName.size(); i++) {
			if (FacName[i] == tbc) {
				std::ofstream oitl;
				oitl.open("LoggedIn.txt");
				oitl << i;
				return true;
			}
		}
		return false;
	}
	bool AdminConfirmation(std::string username, std::string password) {
		std::string tbc = username + "," + password;
		std::vector<std::string> AdminData;
		std::ifstream rdr;
		rdr.open("AdminData.txt");
		while (!rdr.eof()) {
			std::string str;
			rdr >> str;
			AdminData.push_back(str);
		}
		rdr.close();
		for (int i = 0; i < AdminData.size(); i++) {
			if (AdminData[i] == tbc) {
				return true;
			}
		}
		return false;
		return false;
	}
	bool Userconfirmation(std::string ci, std::string cncc) {
		std::string tbc = ci + cncc;
		std::vector<std::string> StdName;
		std::vector<std::string> StdRoll;
		std::vector<std::string> StdC1;
		std::vector<std::string> StdC2;
		std::vector<std::string> StdC3;
		std::vector<std::string> StdC4;
		std::vector<std::string> StdC5;
		std::vector<std::string> StdPer;
		std::vector<std::string> StdGrade;
		std::vector<std::string> StdPass;
		std::ifstream rdr;
		rdr.open("student.txt");
		while (!rdr.eof()) {
			std::string str;
			rdr >> str;
			StdName.push_back(str);
			rdr >> str;
			StdRoll.push_back(str);
			rdr >> str;
			StdC1.push_back(str);
			rdr >> str;
			StdC2.push_back(str);
			rdr >> str;
			StdC3.push_back(str);
			rdr >> str;
			StdC4.push_back(str);
			rdr >> str;
			StdC5.push_back(str);
			rdr >> str;
			StdPer.push_back(str);
			rdr >> str;
			StdGrade.push_back(str);
			rdr >> str;
			StdPass.push_back(str);
		}
		for (int i = 0; i < StdRoll.size(); i++) {
			StdRoll[i].append(StdPass[i]);
		}
		for (int i = 0; i < StdRoll.size(); i++) {
			if (StdRoll[i] == tbc) {
				std::ofstream oitl;
				oitl.open("LoggedIn.txt");
				oitl << i;
				return true;
			}
		}
		return false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked) {
			String^ u1 = textBox1->Text;
			String^ p1 = textBox2->Text;
			std::string u2;
			std::string p2;
			msclr::interop::marshal_context context;
			u2 = context.marshal_as<std::string>(u1);
			p2 = context.marshal_as<std::string>(p1);
			if (EmployeeConfirmation(u2, p2)) {
				MessageBox::Show("Logged In");
				//this->Hide();
				AdminMenu^ obj = gcnew AdminMenu();
				obj->Show();
			}
			else
				MessageBox::Show("Incorrect Parameters");
			
		}
		if (radioButton2->Checked) {
			String^ rn = textBox3->Text;
			String^ spass = textBox4->Text;
			std::string rn2;
			std::string spass2;
			msclr::interop::marshal_context context;
			rn2 = context.marshal_as<std::string>(rn);
			spass2 = context.marshal_as<std::string>(spass);
			if (Userconfirmation(rn2, spass2)) {
				MessageBox::Show("Logged In");
				//this->Hide();
				UserMenu^ obj = gcnew UserMenu();
				obj->Show();
			}
			else
				MessageBox::Show("Incorrect Parameters");

		}
		if (radioButton3->Checked) {
			String^ rn = textBox6->Text;
			String^ spass = textBox5->Text;
			std::string rn2;
			std::string spass2;
			msclr::interop::marshal_context context;
			rn2 = context.marshal_as<std::string>(rn);
			spass2 = context.marshal_as<std::string>(spass);
			if (AdminConfirmation(rn2, spass2)) {
				MessageBox::Show("Logged In");
				//this->Hide();
				AdminMenu1^ obj = gcnew AdminMenu1();
				obj->Show();
			}
			else
				MessageBox::Show("Incorrect Parameters");

		}
	}
	private: System::Void radioButton2_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked) {
			groupBox2->Enabled = 0;
			groupBox3->Enabled = 1;
			groupBox4->Enabled = 0;
		}
		if (!(radioButton2->Checked)) {
			groupBox3->Enabled = 0;
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton3->Checked) {
			groupBox2->Enabled = 0;
			groupBox3->Enabled = 0;
			groupBox4->Enabled = 1;
		}
		if (!(radioButton3->Checked)) {
			groupBox3->Enabled = 0;
		}
	}
};
}