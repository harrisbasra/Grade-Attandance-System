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
	/// Summary for ChangeMarks
	/// </summary>
	public ref class ChangeMarks : public System::Windows::Forms::Form
	{
	public:
		ChangeMarks(void)
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
		~ChangeMarks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox6;
	protected:
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox6->Location = System::Drawing::Point(373, 246);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(83, 26);
			this->textBox6->TabIndex = 29;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox5->Location = System::Drawing::Point(284, 246);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(83, 26);
			this->textBox5->TabIndex = 28;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox4->Location = System::Drawing::Point(195, 246);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(83, 26);
			this->textBox4->TabIndex = 27;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox3->Location = System::Drawing::Point(106, 246);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(83, 26);
			this->textBox3->TabIndex = 26;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox2->Location = System::Drawing::Point(17, 246);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(83, 26);
			this->textBox2->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label3->Location = System::Drawing::Point(3, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 20);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Enter Marks ::";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(171, 382);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 29);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ChangeMarks::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox1->Location = System::Drawing::Point(17, 161);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(449, 26);
			this->textBox1->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(3, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 20);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Enter Roll Number ::";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(109, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 31);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Change Marks";
			// 
			// ChangeMarks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 423);
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
			this->Name = L"ChangeMarks";
			this->Text = L"ChangeMarks";
			this->Load += gcnew System::EventHandler(this, &ChangeMarks::ChangeMarks_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ChangeMarks_Load(System::Object^ sender, System::EventArgs^ e) {

	}
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
			StdC1[focusid] = s1;
			StdC2[focusid] = s2;
			StdC3[focusid] = s3;
			StdC4[focusid] = s4;
			StdC5[focusid] = s5;
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
		}
	}
};
}
