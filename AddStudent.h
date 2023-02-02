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
	/// Summary for AddStudent
	/// </summary>
	public ref class AddStudent : public System::Windows::Forms::Form
	{
	public:
		AddStudent(void)
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
		~AddStudent()
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
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(140, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Add Student";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox1->Location = System::Drawing::Point(22, 124);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(449, 26);
			this->textBox1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(8, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Enter Name ::";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox2->Location = System::Drawing::Point(22, 205);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(449, 26);
			this->textBox2->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label3->Location = System::Drawing::Point(8, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Enter Roll Number ::";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox3->Location = System::Drawing::Point(21, 283);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(449, 26);
			this->textBox3->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label4->Location = System::Drawing::Point(7, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Enter Password ::";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(167, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 38);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Add ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddStudent::button2_Click);
			// 
			// AddStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(481, 405);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddStudent";
			this->Text = L"AddStudent";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int CheckPresenceTwo(std::string name) {
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
			if (StdRoll[i]==name) {
				return 0;
			}
		}
		return true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "") {
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
			String^ NewName = textBox1->Text;
			String^ NewRoll = textBox2->Text;
			String^ NewPass = textBox3->Text;
			msclr::interop::marshal_context context;
			std::string nname = context.marshal_as<std::string>(NewName);
			std::string nroll = context.marshal_as<std::string>(NewRoll);
			std::string npass = context.marshal_as<std::string>(NewPass);
			if (CheckPresenceTwo(nroll)) {
				StdName.push_back(nname);
				StdRoll.push_back(nroll);
				StdC1.push_back("0");
				StdC2.push_back("0");
				StdC3.push_back("0");
				StdC4.push_back("0");
				StdC5.push_back("0");
				StdPer.push_back("0");
				StdGrade.push_back("F");
				StdPass.push_back(npass);
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
					wtr << "\n";
				}
				wtr.close();
				MessageBox::Show("Done :)");





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
				AtdC1.push_back("0");
				AtdC2.push_back("0");
				AtdC3.push_back("0");
				AtdC4.push_back("0");
				AtdC5.push_back("0");
				std::ofstream wtr2;
				wtr2.open("Attandance.txt");
				for (int i = 0; i < AtdC1.size(); i++) {
					wtr2 << AtdC1[i];
					wtr2 << " ";
					wtr2 << AtdC2[i];
					wtr2 << " ";
					wtr2 << AtdC3[i];
					wtr2 << " ";
					wtr2 << AtdC4[i];
					wtr2 << " ";
					wtr2 << AtdC5[i];
					wtr2 << "\n";
				}
				wtr2.close();
			}
			else {
				MessageBox::Show("Roll Number already present");
			}
		}
		
	}
};
}
