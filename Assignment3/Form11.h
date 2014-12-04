#pragma once
#include "Form12.h"
#include "Form13.h"
#include "fstream"
#include "string"
using namespace std;
namespace Assignment3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form11
	/// </summary>
	public ref class Form11 : public System::Windows::Forms::Form
	{
	public:
		Form11(void)
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
		~Form11()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	protected: 
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	public: int LoginRollNumber;
	private: System::Windows::Forms::Button^  button1;
	public: 
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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(54, 33);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(148, 13);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Register For Current Semester";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form11::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(83, 72);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(86, 13);
			this->linkLabel2->TabIndex = 1;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"See GradeSheet";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form11::linkLabel2_LinkClicked);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(86, 108);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form11::button1_Click);
			// 
			// Form11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(248, 155);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Name = L"Form11";
			this->Load += gcnew System::EventHandler(this, &Form11::Form11_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form11_Load(System::Object^  sender, System::EventArgs^  e) {
				 ifstream infile;
				 string s;
				 infile.open("NewSemester.txt");
				 getline(infile,s);
				 infile.close();
				 if(s=="SemesterStarted")
					 linkLabel1->Enabled = true;
				 else linkLabel1->Enabled = false;

				 remove("NewSemester.txt");
			 }
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 Form12^ form12 = gcnew Form12();
				 form12->LoginRollNumber = LoginRollNumber;
				 form12->Show();
				 linkLabel1->Enabled=false;
			 }
	private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 Form13^ form13 = gcnew Form13();
				 form13->LoginRollNumber = LoginRollNumber;
				 form13->Show();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form11::Close();
			 }
};
}
