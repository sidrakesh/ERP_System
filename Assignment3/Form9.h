#pragma once
#include "Form10.h"
#include "msclr/marshal.h"
#include "msclr/marshal_cppstd.h"
#include "iostream"
#include "string"
#include "fstream"
#include "CourseDetails.h"
#include "cstdlib"
#include "TeacherRecords.h"
using namespace std;
namespace Assignment3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form9
	/// </summary>
	public ref class Form9 : public System::Windows::Forms::Form
	{
	public:
		Form9(void)
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
		~Form9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button3;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

	private:
		System::String^ CourseName;
		System::String^ CourseCode;
		System::String^ CourseDepartment;
		System::String^ CourseType;
		System::String^ TeacherDepartment;
		System::String^ TeacherName;
		int CourseCredits;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  comboBox3;
			 int CourseSemester;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(262, 256);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 33);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form9::button3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(63, 256);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 33);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Register Course";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form9::button1_Click);
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
			this->comboBox1->Location = System::Drawing::Point(112, 117);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(146, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form9::comboBox1_SelectedIndexChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(112, 224);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(68, 20);
			this->textBox4->TabIndex = 5;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form9::textBox4_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(112, 190);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(66, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form9::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(112, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form9::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(112, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(287, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form9::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Credits : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 227);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Semester : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Department : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Course Code : ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Course Name : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Course Type : ";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Core", L"Elective"});
			this->comboBox2->Location = System::Drawing::Point(112, 80);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(146, 21);
			this->comboBox2->TabIndex = 2;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form9::comboBox2_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 153);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Teacher : ";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(112, 150);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(214, 21);
			this->comboBox3->TabIndex = 15;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form9::comboBox3_SelectedIndexChanged);
			// 
			// Form9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 301);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form9";
			this->Text = L"Subject Registration";
			this->Load += gcnew System::EventHandler(this, &Form9::Form9_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 CourseName = textBox1->Text;
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 CourseCode = textBox2->Text;
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 CourseDepartment = Convert::ToString(comboBox1->Items[comboBox1->SelectedIndex]);
			 ifstream infile,ninfile;
			 TeacherRecords Teacher;
			 string s;
			 infile.open("TeacherNames.dat",ios::in);

			 while(infile.good())
			 {
				getline(infile,s);
				if(s=="")
					break;
				ninfile.open(s,ios::in);
				ninfile.seekg(0);
				ninfile.read((char*)&Teacher,sizeof(TeacherRecords));
				ninfile.close();

				TeacherDepartment = gcnew String(reinterpret_cast<const char*>(Teacher.ShowDepartment()));
				if(TeacherDepartment==CourseDepartment)
					comboBox3->Items->Add(gcnew String(reinterpret_cast<const char*>(Teacher.ShowName())));
			 }
			 infile.close();
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int test;
			 if(Int32::TryParse(textBox3->Text,test))
				 CourseCredits = test;
			 else 
			 {
				MessageBox::Show("Invalid Entry!","Error");
				CourseCredits = -9999;
			 }
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int test;
			 if(Int32::TryParse(textBox4->Text,test))
				CourseSemester = test;
			 else 
			 {
				MessageBox::Show("Invalid Entry!","Error");
				CourseSemester = -9999;
			 }
		 }
private: void StringToChar(char*str,string s) {
		 unsigned int i;
		 for(i=0;i < s.length();i++)
			 str[i] = s[i];
		 str[s.length()]='\0';
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 CourseDetails Course;
			 string s;
			 char str[100];
			 msclr::interop::marshal_context context;

			 if(CourseName==""||CourseDepartment==""||CourseCode==""||CourseCredits==0||CourseSemester==0)
				 MessageBox::Show("One/More entries not yet filled!","Error");
			 else
			 {
				 s = context.marshal_as<std::string>(CourseName);
				 StringToChar(str,s);
				 Course.SetCourseName(str);

				 s = context.marshal_as<std::string>(CourseDepartment);
				 StringToChar(str,s);
				 Course.SetCourseDepartment(str);

				 s = context.marshal_as<std::string>(CourseCode);
				 StringToChar(str,s);
				 Course.SetCourseCode(str);

				 s = context.marshal_as<std::string>(TeacherName);
				 StringToChar(str,s);
				 Course.SetCourseTeacher(str);

				 s = context.marshal_as<std::string>(CourseType);
				 StringToChar(str,s);
				 Course.SetCourseType(str);

				 Course.SetCourseCredits(CourseCredits);
				 Course.SetCourseSemester(CourseSemester);

				 ofstream outfile;
				 outfile.open("CoursesList.dat",ios::out|ios::app);
				 outfile.write((char*)&Course,sizeof(CourseDetails));
				 outfile.close();

				 Form10^ form10 = gcnew Form10();
				 form10->Show();
			 }
		}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 CourseType = Convert::ToString(comboBox2->Items[comboBox2->SelectedIndex]);
		 }
private: System::Void Form9_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form9::Close();
		 }
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 TeacherName = Convert::ToString(comboBox3->Items[comboBox3->SelectedIndex]);
		 }
};
}
