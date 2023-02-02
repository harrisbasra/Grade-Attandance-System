#pragma once
#include<fstream>
#include<msclr/marshal_cppstd.h>
namespace GUILeScOPrOjTaKe3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddStudentInEvent
	/// </summary>
	public ref class AddStudentInEvent : public System::Windows::Forms::Form
	{
	public:
		AddStudentInEvent(void)
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
		~AddStudentInEvent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(91, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Add Students in Events";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox1->Location = System::Drawing::Point(17, 124);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(449, 26);
			this->textBox1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(22, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Enter Event Name ::";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox2->Location = System::Drawing::Point(17, 210);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(449, 26);
			this->textBox2->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label3->Location = System::Drawing::Point(22, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(277, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Enter Student Roll Number to Add ::";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(173, 380);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 38);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Add ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddStudentInEvent::button2_Click);
			// 
			// AddStudentInEvent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(475, 430);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddStudentInEvent";
			this->Text = L"AddStudentInEvent";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int CheckPresence(std::string name) {
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
		for (int i = 0; i < StdRoll.size(); i++) {
			if (StdRoll[i] == name) {
				return 1;
			}
		}
		return false;
	}
	int CheckPresenceTwo(std::string name) {
		std::vector<std::string> EventName;
		std::vector<std::string> EventDate;
		std::vector<std::string> EventLocation;
		std::vector<std::string> EventPresence;
		std::ifstream rdr;
		rdr.open("Event.txt");
		while (!rdr.eof()) {
			std::string str;
			rdr >> str;
			EventName.push_back(str);
			rdr >> str;
			EventDate.push_back(str);
			rdr >> str;
			EventLocation.push_back(str);
			rdr >> str;
			EventPresence.push_back(str);
		}
		rdr.close();
		for (int i = 0; i < EventPresence.size(); i++) {
			if (EventPresence[i].find(name)<EventPresence.size()) {
				return 1;
			}
		}
		return false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" && textBox2->Text != "") {
			std::vector<std::string> EventName;
			std::vector<std::string> EventDate;
			std::vector<std::string> EventLocation;
			std::vector<std::string> EventPresence;
			std::ifstream rdr;
			rdr.open("Event.txt");
			while (!rdr.eof()) {
				std::string str;
				rdr >> str;
				EventName.push_back(str);
				rdr >> str;
				EventDate.push_back(str);
				rdr >> str;
				EventLocation.push_back(str);
				rdr >> str;
				EventPresence.push_back(str);
			}
			rdr.close();
			String^ EventNN = textBox1->Text;
			String^ Incoming = textBox2->Text;
			msclr::interop::marshal_context context;
			std::string EN = context.marshal_as<std::string>(EventNN);
			std::string IC = context.marshal_as<std::string>(Incoming);
			int focusid = -1;
			bool caught = false;
			for (int i = 0; i < EventName.size(); i++) {
				if (EventName[i] == EN) {
					focusid = i;
					caught = true;
				}
			}
			if (!caught) {
				MessageBox::Show("Event Not Found");
			}
			else {
				if (CheckPresenceTwo(IC)) {
					MessageBox::Show("Roll Number Already Present");
				}
				else if (CheckPresence(IC)) {
					EventPresence[focusid].append("," + IC);
					std::ofstream wtr;
					wtr.open("Event.txt");
					for (int i = 0; i < EventName.size(); i++) {
						wtr << EventName[i];
						wtr << " ";
						wtr << EventDate[i];
						wtr << " ";
						wtr << EventLocation[i];
						wtr << " ";
						wtr << EventPresence[i];
						wtr << "\n";
					}
					wtr.close();
					MessageBox::Show("Done :)");
				}
				else {
					MessageBox::Show("No Such Student Found");
				}
			}
		}
			
	}
};
}
