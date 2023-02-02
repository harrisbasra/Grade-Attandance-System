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
	/// Summary for AmmendAttandance
	/// </summary>
	public ref class AmmendAttandance : public System::Windows::Forms::Form
	{
	public:
		AmmendAttandance(void)
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
		~AmmendAttandance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(180, 388);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 29);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AmmendAttandance::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox1->Location = System::Drawing::Point(26, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(449, 26);
			this->textBox1->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(12, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Enter Roll Number ::";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(118, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(273, 31);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ammend Attandance";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox2->Location = System::Drawing::Point(26, 252);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(83, 26);
			this->textBox2->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label3->Location = System::Drawing::Point(12, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 20);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Enter Attandance ::";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox3->Location = System::Drawing::Point(115, 252);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(83, 26);
			this->textBox3->TabIndex = 16;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox4->Location = System::Drawing::Point(204, 252);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(83, 26);
			this->textBox4->TabIndex = 17;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox5->Location = System::Drawing::Point(293, 252);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(83, 26);
			this->textBox5->TabIndex = 18;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox6->Location = System::Drawing::Point(382, 252);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(83, 26);
			this->textBox6->TabIndex = 19;
			// 
			// AmmendAttandance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(486, 429);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AmmendAttandance";
			this->Text = L"AmmendAttandance";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
		///////////////////////////////////////////////////////////////////////////////
		std::vector<std::string> AtdC1;
		std::vector<std::string> AtdC2;
		std::vector<std::string> AtdC3;
		std::vector<std::string> AtdC4;
		std::vector<std::string> AtdC5;
		std::ifstream rdr22;
		rdr22.open("Attandance.txt");
		while (!rdr22.eof()) {
			std::string str;
			rdr22 >> str;
			AtdC1.push_back(str);
			rdr22 >> str;
			AtdC2.push_back(str);
			rdr22 >> str;
			AtdC3.push_back(str);
			rdr22 >> str;
			AtdC4.push_back(str);
			rdr22 >> str;
			AtdC5.push_back(str);
		}
		rdr22.close();
		String^ RollNo = textBox1->Text;
		String^ c1 = textBox2->Text;
		String^ c2 = textBox3->Text;
		String^ c3 = textBox4->Text;
		String^ c4 = textBox5->Text;
		String^ c5 = textBox6->Text;
		msclr::interop::marshal_context context;
		std::string rollno = context.marshal_as<std::string>(RollNo);
		std::string s1 = context.marshal_as<std::string>(c1);
		std::string s2 = context.marshal_as<std::string>(c2);
		std::string s3 = context.marshal_as<std::string>(c3);
		std::string s4 = context.marshal_as<std::string>(c4);
		std::string s5 = context.marshal_as<std::string>(c5);
		int focusid = -1;
		bool caught = false;
		for (int i = 0; i < StdRoll.size(); i++) {
			if (StdRoll[i] == rollno) {
				focusid = i;
				caught = true;
			}
		}
		if (!caught) {
			MessageBox::Show("Roll Number Not Found");
		}
		else {
			AtdC1[focusid] = s1;
			AtdC2[focusid] = s2;
			AtdC3[focusid] = s3;
			AtdC4[focusid] = s4;
			AtdC5[focusid] = s5;
			std::ofstream wtr;
			wtr.open("Attandance.txt");
			for (int i = 0; i < AtdC1.size(); i++) {
				wtr << AtdC1[i];
				wtr << " ";
				wtr << AtdC2[i];
				wtr << " ";
				wtr << AtdC3[i];
				wtr << " ";
				wtr << AtdC4[i];
				wtr << " ";
				wtr << AtdC5[i];
				wtr << "\n";
			}
			wtr.close();
			MessageBox::Show("Done :)");
		}
	}
};
}
