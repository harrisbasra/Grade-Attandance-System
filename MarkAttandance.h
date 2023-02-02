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
	/// Summary for MarkAttandance
	/// </summary>
	public ref class MarkAttandance : public System::Windows::Forms::Form
	{
	public:
		MarkAttandance(void)
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
		~MarkAttandance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(165, 363);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 38);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Add ";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(177, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 29);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MarkAttandance::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox1->Location = System::Drawing::Point(20, 220);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(449, 26);
			this->textBox1->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(24, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Enter Attandance ::";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(129, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 31);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Add Attandance";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox2->Location = System::Drawing::Point(18, 131);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(449, 26);
			this->textBox2->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label4->Location = System::Drawing::Point(25, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(183, 20);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Course Number (1-5) ::";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14));
			this->label5->Location = System::Drawing::Point(188, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 25);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Subject :: ";
			// 
			// MarkAttandance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(479, 406);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MarkAttandance";
			this->Text = L"MarkAttandance";
			this->Load += gcnew System::EventHandler(this, &MarkAttandance::MarkAttandance_Load);
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
			if (CounterIndex > AtdC1.size()) {
				MessageBox::Show("Limit Reached");
				return;
			}
			msclr::interop::marshal_context context;
			if (textBox2->Text == "0") {
				
				AtdC1[CounterIndex] = context.marshal_as<std::string>(textBox1->Text);
			}
			if (textBox2->Text == "1") {
				
				AtdC2[CounterIndex] = context.marshal_as<std::string>(textBox1->Text);
			}
			if (textBox2->Text == "2") {
				
				AtdC3[CounterIndex] = context.marshal_as<std::string>(textBox1->Text);
			}
			if (textBox2->Text == "3") {
				
				AtdC4[CounterIndex] = context.marshal_as<std::string>(textBox1->Text);
			}
			if (textBox2->Text == "4") {
				
				AtdC5[CounterIndex] = context.marshal_as<std::string>(textBox1->Text);
			}
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
	private: System::Void MarkAttandance_Load(System::Object^ sender, System::EventArgs^ e) {
		std::ofstream ldwr;
		ldwr.open("Counter.txt");
		ldwr << "0";
		ldwr.close();
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
