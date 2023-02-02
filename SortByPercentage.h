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
	/// Summary for SortByPercentage
	/// </summary>
	public ref class SortByPercentage : public System::Windows::Forms::Form
	{
	public:
		SortByPercentage(void)
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
		~SortByPercentage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox1;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(259, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 31);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Sort By Percentage";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Location = System::Drawing::Point(12, 57);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(777, 303);
			this->listBox1->TabIndex = 12;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SortByPercentage::listBox1_SelectedIndexChanged);
			// 
			// SortByPercentage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(801, 383);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Name = L"SortByPercentage";
			this->Text = L"SortByPercentage";
			this->Load += gcnew System::EventHandler(this, &SortByPercentage::SortByPercentage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SortByPercentage_Load(System::Object^ sender, System::EventArgs^ e) {
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
		
					int i, j, min;
					std::string temp1;
					std::string temp2;
					std::string temp3;
					std::string temp4;
					std::string temp5;
					std::string temp6;
					std::string temp7;
					std::string temp8;
					std::string temp9;
					std::string temp10;
					for (i = 0; i < StdPer.size() - 1; i++) {
						min = i;
						for (j = i + 1; j < StdPer.size(); j++)
							if (StdPer[j] > StdPer[min])
								min = j;
						temp1 = StdName[i];
						StdName[i] = StdName[min];
						StdName[min] = temp1;
						temp2 = StdRoll[i];
						StdRoll[i] = StdRoll[min];
						StdRoll[min] = temp2;
						temp3 = StdC1[i];
						StdC1[i] = StdC1[min];
						StdC1[min] = temp3;
						temp4 = StdC2[i];
						StdC2[i] = StdC2[min];
						StdC2[min] = temp4;
						temp5 = StdC3[i];
						StdC3[i] = StdC3[min];
						StdC3[min] = temp5;
						temp6 = StdC4[i];
						StdC4[i] = StdC4[min];
						StdC4[min] = temp6;
						temp7 = StdC5[i];
						StdC5[i] = StdC5[min];
						StdC5[min] = temp7;
						temp8 = StdPer[i];
						StdPer[i] = StdPer[min];
						StdPer[min] = temp8;
						temp9 = StdGrade[i];
						StdGrade[i] = StdGrade[min];
						StdGrade[min] = temp9;
						temp10 = StdPass[i];
						StdPass[i] = StdPass[min];
						StdPass[min] = temp10;
					}
		
		msclr::interop::marshal_context context;
		for (int i = 0; i < StdName.size(); i++) {
			listBox1->Items->Add(gcnew String((StdName[i] + "(RollNo#" + StdRoll[i] + ") with Grade: " + StdGrade[i] + " and a percentage of " + StdPer[i] + ", with Password: " + StdPass[i]).c_str()));
		}
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
