#pragma once
#include"UserMenu.h"
#include<fstream>
#include<msclr/marshal_cppstd.h>
#include<string>
//#include"SHP.h"
namespace GUILeScOPrOjTaKe3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserMenu
	/// </summary>
	public ref class UserMenu : public System::Windows::Forms::Form
	{
	public:
		UserMenu(void)
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
		~UserMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(34, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(415, 38);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Hi, XXXXX(Roll No#0000)";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 21;
			this->listBox1->Location = System::Drawing::Point(12, 65);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(448, 298);
			this->listBox1->TabIndex = 18;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &UserMenu::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(12, 380);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 38);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Precentage:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(306, 380);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 38);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Grade:";
			// 
			// UserMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(472, 427);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->MaximumSize = System::Drawing::Size(488, 466);
			this->MinimumSize = System::Drawing::Size(488, 466);
			this->Name = L"UserMenu";
			this->Text = L"UserMenu";
			this->Load += gcnew System::EventHandler(this, &UserMenu::UserMenu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserMenu_Load(System::Object^ sender, System::EventArgs^ e) {
		int LoggedInIndex = 0;
		std::ifstream ldr;
		ldr.open("LoggedIn.txt");
		ldr >> LoggedInIndex;
		ldr.close();
		
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
		rdr.close();
		std::vector<std::string> AtdC1;
		std::vector<std::string> AtdC2;
		std::vector<std::string> AtdC3;
		std::vector<std::string> AtdC4;
		std::vector<std::string> AtdC5;
		std::ifstream rdr2;
		rdr2.open("Attandance.txt");
		while (!rdr2.eof()) {
			std::string str;
			rdr2 >> str;
			AtdC1.push_back(str);
			rdr2 >> str;
			AtdC2.push_back(str);
			rdr2 >> str;
			AtdC3.push_back(str);
			rdr2 >> str;
			AtdC4.push_back(str);
			rdr2 >> str;
			AtdC5.push_back(str);
		}
		rdr2.close();
		for (int i = 0; i < StdName.size(); i++) {
			StdPer[i] = std::to_string(std::stoi(StdC1[i]) + std::stoi(StdC2[i]) + std::stoi(StdC3[i]) + std::stoi(StdC4[i]) + std::stoi(StdC5[i]));
			StdPer[i] = std::to_string(std::stoi(StdPer[i]) / 5);
			if (std::stoi(StdPer[i]) < 50) {
				StdGrade[i] = "F";
			}
			if (std::stoi(StdPer[i]) > 50 && std::stoi(StdPer[i]) < 60) {
				StdGrade[i] = "D";
			}
			if (std::stoi(StdPer[i]) >= 60 && std::stoi(StdPer[i]) < 70) {
				StdGrade[i] = "C";
			}
			if (std::stoi(StdPer[i]) >= 70 && std::stoi(StdPer[i]) < 80) {
				StdGrade[i] = "B";
			}
			if (std::stoi(StdPer[i]) >= 80 && std::stoi(StdPer[i]) < 90) {
				StdGrade[i] = "A";
			}
			if (std::stoi(StdPer[i]) >= 90) {
				StdGrade[i] = "A";
			}
		}
		label2->Text = gcnew String(("Hi, " + StdName[LoggedInIndex] + " (Roll No# "+ StdRoll[LoggedInIndex]+")").c_str());
		std::vector<std::string> ToPrint;
		ToPrint.push_back("English=>             Marks: " + StdC1[LoggedInIndex] + " with Attandance: " + AtdC1[LoggedInIndex]);
		ToPrint.push_back("Urdu=>                Marks: " + StdC2[LoggedInIndex] + " with Attandance: " + AtdC2[LoggedInIndex]);
		ToPrint.push_back("Mathematics=>    Marks: " + StdC3[LoggedInIndex] + " with Attandance: " + AtdC3[LoggedInIndex]);
		ToPrint.push_back("Science=>            Marks: " + StdC4[LoggedInIndex] + " with Attandance: " + AtdC4[LoggedInIndex]);
		ToPrint.push_back("Social.Studies=>      Marks: " + StdC5[LoggedInIndex] + " with Attandance: " + AtdC5[LoggedInIndex]);
		msclr::interop::marshal_context context;
		for (int i = 0; i < 5; i++) {
			listBox1->Items->Add(gcnew String(ToPrint[i].c_str()));
		}
		label1->Text = gcnew String(("Percentage: " + StdPer[LoggedInIndex] + "%").c_str());
		label3->Text = gcnew String(("Grade: " + StdGrade[LoggedInIndex] + "").c_str());

		std::ofstream wtr;
		wtr.open("student.txt");
		for (int i = 0; i < StdRoll.size(); i++) {
			wtr << StdName[i];
			wtr << " ";
			wtr << StdRoll[i];
			wtr << " ";
			wtr << StdC1[i];
			wtr << " ";
			wtr << StdC2[i];
			wtr << " ";
			wtr << StdC3[i];
			wtr << " ";
			wtr << StdC4[i];
			wtr << " ";
			wtr << StdC5[i];
			wtr << " ";
			wtr << StdPer[i];
			wtr << " ";
			wtr << StdGrade[i];
			wtr << " ";
			wtr << StdPass[i];
			if(i!=StdRoll.size()-1)
			wtr << "\n";
		}
		wtr.close();
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}

	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//obj->Show();
	}
	private: System::Void VIEWCALC_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
		
		//obj->Show();
	}
	private: System::Void CHANGEU_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
		
		//obj->Show();
	}
	private: System::Void CHANGEFP_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
		
		//obj->Show();
	}
	private: System::Void CHARGEBILL_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Hide();
		
		//obj->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   ////////////////////////////////////////////////
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
