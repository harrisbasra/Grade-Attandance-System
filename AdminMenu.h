#pragma once
#include"ViewStudentRecord.h"
#include"AddMarks.h"
#include"ChangeMarks.h"
#include"MarkAttandance.h"
#include"AmmendAttandance.h"
#include"AddStudentInEvent.h"
#include"ViewEvents.h"

namespace GUILeScOPrOjTaKe3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminMenu
	/// </summary>
	public ref class AdminMenu : public System::Windows::Forms::Form
	{
	public:
		AdminMenu(void)
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
		~AdminMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ CHANGEFP;

	private: System::Windows::Forms::Button^ CHANGEU;

	private: System::Windows::Forms::Button^ VIEWCALC;
	private: System::Windows::Forms::Button^ CHARGEBILL;

	private: System::Windows::Forms::Button^ DspR;
	private: System::Windows::Forms::Button^ IDCARDALERT;






	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminMenu::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->CHANGEFP = (gcnew System::Windows::Forms::Button());
			this->CHANGEU = (gcnew System::Windows::Forms::Button());
			this->VIEWCALC = (gcnew System::Windows::Forms::Button());
			this->CHARGEBILL = (gcnew System::Windows::Forms::Button());
			this->DspR = (gcnew System::Windows::Forms::Button());
			this->IDCARDALERT = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(185, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(425, 114);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Aqua;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->button1->Location = System::Drawing::Point(122, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 63);
			this->button1->TabIndex = 1;
			this->button1->Text = L"VIEW STUDENT RECORD";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminMenu::button1_Click);
			// 
			// CHANGEFP
			// 
			this->CHANGEFP->BackColor = System::Drawing::Color::Aqua;
			this->CHANGEFP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->CHANGEFP->Location = System::Drawing::Point(318, 143);
			this->CHANGEFP->Name = L"CHANGEFP";
			this->CHANGEFP->Size = System::Drawing::Size(150, 63);
			this->CHANGEFP->TabIndex = 2;
			this->CHANGEFP->Text = L"AMMEND ATTANDANCE";
			this->CHANGEFP->UseVisualStyleBackColor = false;
			this->CHANGEFP->Click += gcnew System::EventHandler(this, &AdminMenu::CHANGEFP_Click);
			// 
			// CHANGEU
			// 
			this->CHANGEU->BackColor = System::Drawing::Color::Aqua;
			this->CHANGEU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->CHANGEU->Location = System::Drawing::Point(216, 250);
			this->CHANGEU->Name = L"CHANGEU";
			this->CHANGEU->Size = System::Drawing::Size(156, 72);
			this->CHANGEU->TabIndex = 3;
			this->CHANGEU->Text = L"VIEW STUDENTS EVENTS";
			this->CHANGEU->UseVisualStyleBackColor = false;
			this->CHANGEU->Click += gcnew System::EventHandler(this, &AdminMenu::CHANGEU_Click);
			// 
			// VIEWCALC
			// 
			this->VIEWCALC->BackColor = System::Drawing::Color::Aqua;
			this->VIEWCALC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F));
			this->VIEWCALC->Location = System::Drawing::Point(516, 43);
			this->VIEWCALC->Name = L"VIEWCALC";
			this->VIEWCALC->Size = System::Drawing::Size(150, 63);
			this->VIEWCALC->TabIndex = 4;
			this->VIEWCALC->Text = L"CHANGE MARKS";
			this->VIEWCALC->UseVisualStyleBackColor = false;
			this->VIEWCALC->Click += gcnew System::EventHandler(this, &AdminMenu::VIEWCALC_Click);
			// 
			// CHARGEBILL
			// 
			this->CHARGEBILL->BackColor = System::Drawing::Color::Aqua;
			this->CHARGEBILL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->CHARGEBILL->Location = System::Drawing::Point(122, 143);
			this->CHARGEBILL->Name = L"CHARGEBILL";
			this->CHARGEBILL->Size = System::Drawing::Size(150, 63);
			this->CHARGEBILL->TabIndex = 5;
			this->CHARGEBILL->Text = L"MARK ATTANDANCE";
			this->CHARGEBILL->UseVisualStyleBackColor = false;
			this->CHARGEBILL->Click += gcnew System::EventHandler(this, &AdminMenu::CHARGEBILL_Click);
			// 
			// DspR
			// 
			this->DspR->BackColor = System::Drawing::Color::Aqua;
			this->DspR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->DspR->Location = System::Drawing::Point(318, 43);
			this->DspR->Name = L"DspR";
			this->DspR->Size = System::Drawing::Size(150, 63);
			this->DspR->TabIndex = 7;
			this->DspR->Text = L"ADD MARKS";
			this->DspR->UseVisualStyleBackColor = false;
			this->DspR->Click += gcnew System::EventHandler(this, &AdminMenu::DspR_Click);
			// 
			// IDCARDALERT
			// 
			this->IDCARDALERT->BackColor = System::Drawing::Color::Aqua;
			this->IDCARDALERT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->IDCARDALERT->Location = System::Drawing::Point(516, 143);
			this->IDCARDALERT->Name = L"IDCARDALERT";
			this->IDCARDALERT->Size = System::Drawing::Size(150, 63);
			this->IDCARDALERT->TabIndex = 8;
			this->IDCARDALERT->Text = L"ADD STUDENTS IN EVENTS";
			this->IDCARDALERT->UseVisualStyleBackColor = false;
			this->IDCARDALERT->Click += gcnew System::EventHandler(this, &AdminMenu::IDCARDALERT_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->CHARGEBILL);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->IDCARDALERT);
			this->groupBox1->Controls->Add(this->CHANGEFP);
			this->groupBox1->Controls->Add(this->DspR);
			this->groupBox1->Controls->Add(this->CHANGEU);
			this->groupBox1->Controls->Add(this->VIEWCALC);
			this->groupBox1->Location = System::Drawing::Point(12, 132);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(763, 346);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &AdminMenu::groupBox1_Enter);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Aqua;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->button2->Location = System::Drawing::Point(413, 250);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 72);
			this->button2->TabIndex = 9;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminMenu::button2_Click);
			// 
			// AdminMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(787, 490);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->MinimumSize = System::Drawing::Size(803, 529);
			this->Name = L"AdminMenu";
			this->Text = L"AdminMenu";
			this->Load += gcnew System::EventHandler(this, &AdminMenu::AdminMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AdminMenu_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Logged Out..! Thanks for using");
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewStudentRecord^ obj = gcnew ViewStudentRecord();
		obj->Show();
	}
	private: System::Void VIEWCALC_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangeMarks^ obj = gcnew ChangeMarks();
		obj->Show();
		
		//obj->Show();
	}
	private: System::Void CHANGEU_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewEvents^ obj = gcnew ViewEvents();
		obj->Show();
	}
	private: System::Void CHANGEFP_Click(System::Object^ sender, System::EventArgs^ e) {
		
		AmmendAttandance^ obj = gcnew AmmendAttandance();
		obj->Show();
		//obj->Show();
	}
	private: System::Void CHARGEBILL_Click(System::Object^ sender, System::EventArgs^ e) {
		MarkAttandance^ obj = gcnew MarkAttandance();
		obj->Show();
		
		//obj->Show();
	}
	private: System::Void PassChnge_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		//obj->Show();
	}
	private: System::Void DspR_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMarks^ obj = gcnew AddMarks();
		obj->Show();
		
		//obj->Show();
	}
	private: System::Void IDCARDALERT_Click(System::Object^ sender, System::EventArgs^ e) {
		AddStudentInEvent^ obj = gcnew AddStudentInEvent();
		obj->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Thanks For Using, TTYL, TC <3");
		this->Close();
	}
};
}
