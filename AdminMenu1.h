#pragma once
#include"AddEvent.h"
#include"ViewStudentRecord.h"
#include"ViewFacultyRecord.h"
#include"AddStudent.h"
#include"SortByPercentage.h"
#include"AmmendAttandance.h"
#include"ChangeMarks.h"
#include"ChangeRollNo.h"
#include"DeleteStudent.h"
#include"AddStudentInEvent.h"
#include"ViewStudentWise.h"

namespace GUILeScOPrOjTaKe3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminMenu1
	/// </summary>
	public ref class AdminMenu1 : public System::Windows::Forms::Form
	{
	public:
		AdminMenu1(void)
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
		~AdminMenu1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:









	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ CHARGEBILL;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ IDCARDALERT;
	private: System::Windows::Forms::Button^ CHANGEFP;
	private: System::Windows::Forms::Button^ DspR;
	private: System::Windows::Forms::Button^ CHANGEU;
	private: System::Windows::Forms::Button^ PassChnge;
	private: System::Windows::Forms::Button^ VIEWCALC;
	private: System::Windows::Forms::Button^ button4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminMenu1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->CHARGEBILL = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->IDCARDALERT = (gcnew System::Windows::Forms::Button());
			this->CHANGEFP = (gcnew System::Windows::Forms::Button());
			this->DspR = (gcnew System::Windows::Forms::Button());
			this->CHANGEU = (gcnew System::Windows::Forms::Button());
			this->PassChnge = (gcnew System::Windows::Forms::Button());
			this->VIEWCALC = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->CHARGEBILL);
			this->groupBox1->Controls->Add(this->Exit);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->IDCARDALERT);
			this->groupBox1->Controls->Add(this->CHANGEFP);
			this->groupBox1->Controls->Add(this->DspR);
			this->groupBox1->Controls->Add(this->CHANGEU);
			this->groupBox1->Controls->Add(this->PassChnge);
			this->groupBox1->Controls->Add(this->VIEWCALC);
			this->groupBox1->Location = System::Drawing::Point(19, 132);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(763, 346);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Aqua;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button3->Location = System::Drawing::Point(587, 244);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 63);
			this->button3->TabIndex = 22;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminMenu1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Aqua;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button2->Location = System::Drawing::Point(407, 244);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 63);
			this->button2->TabIndex = 21;
			this->button2->Text = L"ADD STUDENTS IN EVENT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminMenu1::button2_Click);
			// 
			// CHARGEBILL
			// 
			this->CHARGEBILL->BackColor = System::Drawing::Color::Aqua;
			this->CHARGEBILL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->CHARGEBILL->Location = System::Drawing::Point(25, 140);
			this->CHARGEBILL->Name = L"CHARGEBILL";
			this->CHARGEBILL->Size = System::Drawing::Size(150, 63);
			this->CHARGEBILL->TabIndex = 16;
			this->CHARGEBILL->Text = L"AMMEND ATTANDANCE";
			this->CHARGEBILL->UseVisualStyleBackColor = false;
			this->CHARGEBILL->Click += gcnew System::EventHandler(this, &AdminMenu1::CHARGEBILL_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Aqua;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->Exit->Location = System::Drawing::Point(217, 244);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(150, 63);
			this->Exit->TabIndex = 20;
			this->Exit->Text = L"ADD EVENT";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &AdminMenu1::Exit_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Aqua;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->button1->Location = System::Drawing::Point(25, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 63);
			this->button1->TabIndex = 12;
			this->button1->Text = L"ADD STUDENT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminMenu1::button1_Click);
			// 
			// IDCARDALERT
			// 
			this->IDCARDALERT->BackColor = System::Drawing::Color::Aqua;
			this->IDCARDALERT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->IDCARDALERT->Location = System::Drawing::Point(217, 140);
			this->IDCARDALERT->Name = L"IDCARDALERT";
			this->IDCARDALERT->Size = System::Drawing::Size(150, 63);
			this->IDCARDALERT->TabIndex = 19;
			this->IDCARDALERT->Text = L"CHANGE ROLL NUMBER";
			this->IDCARDALERT->UseVisualStyleBackColor = false;
			this->IDCARDALERT->Click += gcnew System::EventHandler(this, &AdminMenu1::IDCARDALERT_Click);
			// 
			// CHANGEFP
			// 
			this->CHANGEFP->BackColor = System::Drawing::Color::Aqua;
			this->CHANGEFP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->CHANGEFP->Location = System::Drawing::Point(217, 40);
			this->CHANGEFP->Name = L"CHANGEFP";
			this->CHANGEFP->Size = System::Drawing::Size(150, 63);
			this->CHANGEFP->TabIndex = 13;
			this->CHANGEFP->Text = L"VIEW STUDENT RECORD";
			this->CHANGEFP->UseVisualStyleBackColor = false;
			this->CHANGEFP->Click += gcnew System::EventHandler(this, &AdminMenu1::CHANGEFP_Click);
			// 
			// DspR
			// 
			this->DspR->BackColor = System::Drawing::Color::Aqua;
			this->DspR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->DspR->Location = System::Drawing::Point(407, 40);
			this->DspR->Name = L"DspR";
			this->DspR->Size = System::Drawing::Size(150, 63);
			this->DspR->TabIndex = 18;
			this->DspR->Text = L"VIEW FACULTY RECORD";
			this->DspR->UseVisualStyleBackColor = false;
			this->DspR->Click += gcnew System::EventHandler(this, &AdminMenu1::DspR_Click);
			// 
			// CHANGEU
			// 
			this->CHANGEU->BackColor = System::Drawing::Color::Aqua;
			this->CHANGEU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->CHANGEU->Location = System::Drawing::Point(407, 140);
			this->CHANGEU->Name = L"CHANGEU";
			this->CHANGEU->Size = System::Drawing::Size(150, 63);
			this->CHANGEU->TabIndex = 14;
			this->CHANGEU->Text = L"DELETE STUDENT DATA";
			this->CHANGEU->UseVisualStyleBackColor = false;
			this->CHANGEU->Click += gcnew System::EventHandler(this, &AdminMenu1::CHANGEU_Click);
			// 
			// PassChnge
			// 
			this->PassChnge->BackColor = System::Drawing::Color::Aqua;
			this->PassChnge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->PassChnge->Location = System::Drawing::Point(587, 140);
			this->PassChnge->Name = L"PassChnge";
			this->PassChnge->Size = System::Drawing::Size(150, 63);
			this->PassChnge->TabIndex = 17;
			this->PassChnge->Text = L"SORT BY PERCENTAGE";
			this->PassChnge->UseVisualStyleBackColor = false;
			this->PassChnge->Click += gcnew System::EventHandler(this, &AdminMenu1::PassChnge_Click);
			// 
			// VIEWCALC
			// 
			this->VIEWCALC->BackColor = System::Drawing::Color::Aqua;
			this->VIEWCALC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->VIEWCALC->Location = System::Drawing::Point(587, 40);
			this->VIEWCALC->Name = L"VIEWCALC";
			this->VIEWCALC->Size = System::Drawing::Size(150, 63);
			this->VIEWCALC->TabIndex = 15;
			this->VIEWCALC->Text = L"CHANGE MARKS";
			this->VIEWCALC->UseVisualStyleBackColor = false;
			this->VIEWCALC->Click += gcnew System::EventHandler(this, &AdminMenu1::VIEWCALC_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(192, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(425, 114);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Aqua;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button4->Location = System::Drawing::Point(25, 244);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 63);
			this->button4->TabIndex = 23;
			this->button4->Text = L"VIEW STUDENT WISE";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AdminMenu1::button4_Click);
			// 
			// AdminMenu1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(798, 496);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->MaximumSize = System::Drawing::Size(814, 535);
			this->MinimumSize = System::Drawing::Size(814, 535);
			this->Name = L"AdminMenu1";
			this->Text = L"AdminMenu1";
			this->Load += gcnew System::EventHandler(this, &AdminMenu1::AdminMenu1_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AdminMenu1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		AddStudent^ obj = gcnew AddStudent();
		obj->Show();
	}
	private: System::Void CHANGEFP_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewStudentRecord^ obj = gcnew ViewStudentRecord();
		obj->Show();
	}
	private: System::Void DspR_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewFacultyRecord^ obj = gcnew ViewFacultyRecord();
		obj->Show();
	}

	private: System::Void VIEWCALC_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangeMarks^ obj = gcnew ChangeMarks();
		obj->Show();
	}
	private: System::Void CHARGEBILL_Click(System::Object^ sender, System::EventArgs^ e) {
		AmmendAttandance^ obj = gcnew AmmendAttandance();
		obj->Show();
	}
	private: System::Void IDCARDALERT_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangeRollNo^ obj = gcnew ChangeRollNo();
		obj->Show();
	}
	private: System::Void CHANGEU_Click(System::Object^ sender, System::EventArgs^ e) {
		DeleteStudent^ obj = gcnew DeleteStudent();
		obj->Show();
	}
	private: System::Void PassChnge_Click(System::Object^ sender, System::EventArgs^ e) {
		SortByPercentage^ obj = gcnew SortByPercentage();
		obj->Show();
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		AddEvent^ obj = gcnew AddEvent();
		obj->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		AddStudentInEvent^ obj = gcnew AddStudentInEvent();
		obj->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Thanks For Using, TTYL, TC <3");
		this->Close();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewStudentWise^ obj = gcnew ViewStudentWise();
		obj->Show();
	}
};
}
