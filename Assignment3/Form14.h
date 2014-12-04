#pragma once
#include "StudentRecords.h"
#include "fstream"
#include "Form15.h"
namespace Assignment3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form14
	/// </summary>
	public ref class Form14 : public System::Windows::Forms::Form
	{
	public:
		Form14(void)
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
		~Form14()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::String^ DepartmentSelected;
	private: System::String^ StudentDepartment;
	private: System::Windows::Forms::Button^  button1;
	private: System::String^ StudentName;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(34) {L"Aerospace Engineering", L"Agricultural & Food Engineering", 
				L"Architecture & Regional Planning", L"Biotechnology", L"Center for Educational Technology", L"Chemical Engineering", L"Chemistry", 
				L"Civil Engineering", L"Computer Science & Engineering", L"Cryogenic Engineering", L"Electrical Engineering", L"Electronics & Electrical Communication Engineering", 
				L"G S Sanyal School of Telecommunications", L"Geology & Geophysics", L"Humanities & Social Sciences", L"Industrial Engineering & Management", 
				L"Information Technology", L"Materials Science", L"Mathematics", L"Mechanical Engineering", L"Medical Science & Technology", 
				L"Metallurgical & Materials Engineering", L"Mining Engineering", L"Ocean Engineering & Naval Architecture", L"Oceans, Rivers, Atmosphere and Land Sciences", 
				L"Physics & Meteorology", L"Rajendra Mishra School of Engineering Entrepreneurship", L"Rajiv Gandhi School of Intellectual Property Law", 
				L"Ranbir and Chitra Gupta School of Infrastructure Design and Management", L"Reliability Engineering Centre", L"Rubber Technology Centre", 
				L"Rural Development Centre", L"School of Water Resources", L"Vinod Gupta School of Management"});
			this->comboBox1->Location = System::Drawing::Point(122, 52);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form14::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Select Department : ";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(122, 103);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(177, 21);
			this->comboBox2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Select Student : ";
			this->label2->Click += gcnew System::EventHandler(this, &Form14::label2_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(119, 160);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(116, 13);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Set courses for student";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form14::linkLabel1_LinkClicked);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(132, 197);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form14::button1_Click);
			// 
			// Form14
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 240);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Form14";
			this->Text = L"Electives Tailoring";
			this->Load += gcnew System::EventHandler(this, &Form14::Form14_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 DepartmentSelected = Convert::ToString(comboBox1->Items[comboBox1->SelectedIndex]);
				 comboBox2->Items->Clear();
				 StudentRecords Student;
				 ifstream infile,ninfile;
				 string s;
				 infile.open("StudentNames.dat",ios::in);
					
				 while(infile.good())
				 {
					
					getline(infile,s);
					if(s=="")
						break;
					ninfile.open(s,ios::in);
					ninfile.seekg(0);
					ninfile.read((char*)&Student,sizeof(StudentRecords));
					ninfile.close();

					StudentDepartment = gcnew String(reinterpret_cast<const char*>(Student.ShowDepartment()));
					if(DepartmentSelected == StudentDepartment)
					{
						(comboBox2->Items)->Add(gcnew String(reinterpret_cast<const char*>(Student.ShowName())));
					}
				 
				 }
				 infile.close();
			 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 ifstream infile,ninfile;
			 if(comboBox2->SelectedIndex>-1)
			 {
				StudentName = Convert::ToString(comboBox2->Items[comboBox2->SelectedIndex]);
				StudentRecords Student;
				string s;
				infile.open("StudentNames.dat");

				while(infile.good())
				{
					getline(infile,s);
					ninfile.open(s,ios::in);
					ninfile.read((char*)&Student,sizeof(Student));
					ninfile.close();

					if(StudentName==gcnew String(reinterpret_cast<const char*>(Student.ShowName())))
						break;
				}
			    
				infile.close();

				Form15^ form15 = gcnew Form15();
				form15->LoginRollNumber = Student.ShowLoginRollNumber();
				form15->Show();
			 }
			 else MessageBox::Show("Student not selected!","Error!");
			}
private: System::Void Form14_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form14::Close();
		 }
};
}
