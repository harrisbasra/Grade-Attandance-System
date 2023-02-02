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
	/// Summary for DeleteStudent
	/// </summary>
	public ref class DeleteStudent : public System::Windows::Forms::Form
	{
	public:
		DeleteStudent(void)
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
		~DeleteStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(163, 361);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 38);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DeleteStudent::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox1->Location = System::Drawing::Point(18, 163);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(449, 26);
			this->textBox1->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(7, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Enter Roll Number ::";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(132, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 31);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Delete Student";
			// 
			// DeleteStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 422);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"DeleteStudent";
			this->Text = L"DeleteStudent";
			this->Load += gcnew System::EventHandler(this, &DeleteStudent::DeleteStudent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
		msclr::interop::marshal_context context;
		std::string rollno = context.marshal_as<std::string>(RollNo);
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
			StdName.erase(StdName.begin() + focusid);
			StdRoll.erase(StdRoll.begin() + focusid);
			StdC1.erase(StdC1.begin() + focusid);
			StdC2.erase(StdC2.begin() + focusid);
			StdC3.erase(StdC3.begin() + focusid);
			StdC4.erase(StdC4.begin() + focusid);
			StdC5.erase(StdC5.begin() + focusid);
			StdPer.erase(StdPer.begin() + focusid);
			StdGrade.erase(StdGrade.begin() + focusid);
			StdPass.erase(StdPass.begin() + focusid);
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
private: System::Void DeleteStudent_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
