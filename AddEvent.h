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
	/// Summary for AddEvent
	/// </summary>
	public ref class AddEvent : public System::Windows::Forms::Form
	{
	public:
		AddEvent(void)
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
		~AddEvent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(179, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Event";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label2->Location = System::Drawing::Point(12, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Event Name ::";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label3->Location = System::Drawing::Point(12, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Event Date ::";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label4->Location = System::Drawing::Point(12, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Event Location ::";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox1->Location = System::Drawing::Point(27, 126);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(449, 26);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox2->Location = System::Drawing::Point(28, 204);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(449, 26);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->textBox3->Location = System::Drawing::Point(28, 280);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(449, 26);
			this->textBox3->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(194, 358);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 29);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Add ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddEvent::button1_Click);
			// 
			// AddEvent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 410);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddEvent";
			this->Text = L"AddEvent";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "") {
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
			String^ EventD = textBox2->Text;
			String^ EventL = textBox3->Text;
			msclr::interop::marshal_context context;
			std::string EN = context.marshal_as<std::string>(EventNN);
			std::string ED = context.marshal_as<std::string>(EventD);
			std::string EL = context.marshal_as<std::string>(EventL);
			EventName.push_back(EN);
			EventDate.push_back(ED);
			EventLocation.push_back(EL);
			EventPresence.push_back("");
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
		
	}
};
}
