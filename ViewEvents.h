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
	/// Summary for ViewEvents
	/// </summary>
	public ref class ViewEvents : public System::Windows::Forms::Form
	{
	public:
		ViewEvents(void)
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
		~ViewEvents()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox1;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(138, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(255, 38);
			this->label2->TabIndex = 18;
			this->label2->Text = L"VIEW EVENTS";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 21;
			this->listBox1->Location = System::Drawing::Point(43, 100);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(448, 298);
			this->listBox1->TabIndex = 19;
			// 
			// ViewEvents
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(535, 444);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Name = L"ViewEvents";
			this->Text = L"ViewEvents";
			this->Load += gcnew System::EventHandler(this, &ViewEvents::ViewEvents_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewEvents_Load(System::Object^ sender, System::EventArgs^ e) {
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
		for (int i = 0; i < EventName.size(); i++) {
			listBox1->Items->Add(gcnew String((EventName[i]+"("+EventDate[i]+") with Students: "+EventPresence[i]).c_str()));
		}
	}
	};
}
