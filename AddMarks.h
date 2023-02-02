#pragma once
#include<fstream>
#include<msclr/marshal_cppstd.h>
#include<string>
namespace GUILeScOPrOjTaKe3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddMarks
	/// </summary>
	public ref class AddMarks : public System::Windows::Forms::Form
	{
	public:
		AddMarks(void)
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
		~AddMarks()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(176, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Add Marks";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(33, 181);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Marks ::";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox1->Location = System::Drawing::Point(26, 219);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(449, 26);
			this->textBox1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label3->Location = System::Drawing::Point(135, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"For Roll Number :: 1234";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(182, 306);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 29);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddMarks::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 366);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 38);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Add ";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox2->Location = System::Drawing::Point(26, 126);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(449, 26);
			this->textBox2->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label4->Location = System::Drawing::Point(33, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(183, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Course Number (1-5) ::";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14));
			this->label5->Location = System::Drawing::Point(183, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 25);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Subject :: ";
			// 
			// AddMarks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 416);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddMarks";
			this->Text = L"AddMarks";
			this->Load += gcnew System::EventHandler(this, &AddMarks::AddMarks_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "0" || textBox2->Text == "1" || textBox2->Text == "2" || textBox2->Text == "3" || textBox2->Text == "4") {
			int CounterIndex = 0;
			std::ifstream ldr;
			ldr.open("Counter.txt");
			ldr >> CounterIndex;
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
			label3->Text = gcnew String(("For Roll Number :: " + StdRoll[CounterIndex]).c_str());
			if (CounterIndex > StdName.size()) {
				MessageBox::Show("Limit Reached");
				return;
			}
			msclr::interop::marshal_context context;
			if (textBox2->Text == "0") {
				StdC1[CounterIndex] = context.marshal_as<std::string>(textBox1->Text);
			}
			if (textBox2->Text == "1") {
				StdC2[CounterIndex] = context.marshal_as<std::string>(textBox1->Text);
			}
			if (textBox2->Text == "2") {
				StdC3[CounterIndex] = context.marshal_as<std::string>(textBox1->Text);
			}
			if (textBox2->Text == "3") {
				StdC4[CounterIndex] = context.marshal_as<std::string>(textBox1->Text);
			}
			if (textBox2->Text == "4") {
				StdC5[CounterIndex] = context.marshal_as<std::string>(textBox1->Text);
			}
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
			CounterIndex++;
			std::ofstream ldwr;
			ldwr.open("Counter.txt");
			ldwr << CounterIndex;
			ldwr.close();
			MessageBox::Show("Done :)");
		}
		else {
			MessageBox::Show("Enter Valid Subject");
		}
	}
	private: System::Void AddMarks_Load(System::Object^ sender, System::EventArgs^ e) {
		std::ofstream ldwr;
		ldwr.open("Counter.txt");
		ldwr << "0";
		ldwr.close();
		////////////////////////////////////
		String^ handle;
		std::string ofc;
		std::ifstream oitl;
		oitl.open("LoggedIn.txt");
		oitl >> ofc;
		handle = gcnew String(ofc.c_str());
		textBox2->Text = handle;
		textBox2->Enabled = 0;
		if (textBox2->Text == "0") {
			label5->Text = "English";
		}
		if (textBox2->Text == "1") {
			label5->Text = "Urdu";
		}
		if (textBox2->Text == "2") {
			label5->Text = "Mathematics";
		}
		if (textBox2->Text == "3") {
			label5->Text = "Science";
		}
		if (textBox2->Text == "4") {
			label5->Text = "Social Studies";
		}
	}
};
}
