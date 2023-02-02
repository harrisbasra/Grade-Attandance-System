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
	/// Summary for ViewFacultyRecord
	/// </summary>
	public ref class ViewFacultyRecord : public System::Windows::Forms::Form
	{
	public:
		ViewFacultyRecord(void)
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
		~ViewFacultyRecord()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Location = System::Drawing::Point(28, 79);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(514, 280);
			this->listBox1->TabIndex = 14;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewFacultyRecord::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(191, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 31);
			this->label1->TabIndex = 13;
			this->label1->Text = L"View Faculty";
			// 
			// ViewFacultyRecord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(567, 424);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Name = L"ViewFacultyRecord";
			this->Text = L"ViewFacultyRecord";
			this->Load += gcnew System::EventHandler(this, &ViewFacultyRecord::ViewFacultyRecord_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ViewFacultyRecord_Load(System::Object^ sender, System::EventArgs^ e) {
		std::vector<std::string> FacName;
		std::vector<std::string> FacPass;
		std::vector<std::string> FacSubj;
		std::ifstream rdr;
		rdr.open("FacData.txt");
		while (!rdr.eof()) {
			std::string str;
			rdr >> str;
			FacName.push_back(str);
			rdr >> str;
			FacPass.push_back(str);
			rdr >> str;
			FacSubj.push_back(str);
		}
		rdr.close();
		msclr::interop::marshal_context context;
		for (int i = 0; i < FacName.size(); i++) {
			listBox1->Items->Add(gcnew String((FacName[i] + " with Password: " + FacPass[i] + " and teaches " + FacSubj[i]).c_str()));
		}
	}
	};
}
