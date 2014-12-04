#pragma once
#include "CourseDetails.h"
#include "StudentRecords.h"
#include "fstream"
#include "vector"
#include "Form16.h"
using namespace std;
namespace Assignment3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form15
	/// </summary>
	public ref class Form15 : public System::Windows::Forms::Form
	{
	public:
		Form15(void)
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
		~Form15()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::String^ Department;
	private: System::String^ CourseType;
	private: int Semester;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;

	public: int LoginRollNumber;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(24, 91);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(372, 244);
			this->checkedListBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Select the electives for the student : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"CGPA of student : ";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(121, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(190, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(70, 395);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form15::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(272, 395);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 34);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form15::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 361);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(211, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Specify number of electives to be chosen : ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(238, 358);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(73, 20);
			this->textBox2->TabIndex = 7;
			// 
			// Form15
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(435, 441);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkedListBox1);
			this->Name = L"Form15";
			this->Text = L"Electives Tailoring";
			this->Load += gcnew System::EventHandler(this, &Form15::Form15_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form15_Load(System::Object^  sender, System::EventArgs^  e) {
				 StudentRecords Student;
				 CourseDetails Course;
				 ifstream infile;
				 string s;
				 int i=0;
				 infile.open("StudentNames.dat",ios::in);

				 while(i<LoginRollNumber)
				 {
					getline(infile,s);
					i++;
				 }
				 infile.close();

				 infile.open(s,ios::in);
				 infile.read((char*)&Student,sizeof(StudentRecords));
				 infile.close();

				 Department = gcnew String(reinterpret_cast<const char*>(Student.ShowDepartment()));
				 Semester = Student.ShowCurrentSemester();

				 if(Student.ShowCGPA()==0)
					 textBox1->Text="No CGPA recorded yet";
				 else textBox1->Text=Convert::ToString(Student.ShowCGPA());

				 infile.open("CoursesList.dat",ios::in|ios::ate);
				 int endposition = (int)infile.tellg();
				 infile.close();
				 int n = endposition/sizeof(CourseDetails);
				 for(i=0;i<n;i++)
				 {
					infile.open("CoursesList.dat",ios::in);
					infile.seekg(i*sizeof(CourseDetails));
					infile.read((char*)&Course,sizeof(CourseDetails));
					infile.close();
					CourseType = gcnew String(reinterpret_cast<const char*>(Course.GetCourseType()));
					
					if(Department==gcnew String(reinterpret_cast<const char*>(Course.GetCourseDepartment()))&&Semester==Course.GetCourseSemester()&&CourseType=="Elective")
					{
						(checkedListBox1->Items)->Add(gcnew String(reinterpret_cast<const char*>(Course.GetCourseName())));
					}
				 }
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int i=0,j;
				 ifstream infile;
				 CourseDetails Course;
				 StudentRecords Student;
				 string s;
				 infile.open("StudentNames.dat",ios::in);

				 while(i<LoginRollNumber)
				 {
					getline(infile,s);
					i++;
				 }
				 infile.close();

				 infile.open(s,ios::in);
				 infile.read((char*)&Student,sizeof(StudentRecords));
				 infile.close();

				 infile.open("CoursesList.dat",ios::in|ios::ate);
				 int endposition = (int)infile.tellg();
				 infile.close();
				 int n = endposition/sizeof(CourseDetails);

				 if(textBox2->Text=="")
					 MessageBox::Show("Electives number not specified!","Error!");
				 else{
				 Student.GetPossibleElectivesNumber(Convert::ToInt32(textBox2->Text));

				 for(i=0;i<(checkedListBox1->CheckedItems)->Count;i++)
				 {
					for(j=0;j<n;j++)
					{
						infile.open("CoursesList.dat",ios::in);
						infile.seekg(j*sizeof(CourseDetails));
						infile.read((char*)&Course,sizeof(CourseDetails));
						infile.close();

						if(gcnew String(reinterpret_cast<const char*>(Course.GetCourseName()))==Convert::ToString((checkedListBox1->CheckedItems)[i]))
						{
							Student.AddToElectives(Course);
							break;
						}
					}
				 }

				 ofstream outfile;

				 const char * c = s.c_str();
				 remove(c);

				 outfile.open(s,ios::out|ios::app);
				 outfile.write((char*)&Student,sizeof(StudentRecords));
				 outfile.close();

				 StudentRecords Stud;

				 infile.open(s,ios::in);
				 infile.read((char*)&Stud,sizeof(StudentRecords));
				 infile.close();

				 Form16^ form16 = gcnew Form16();
				 form16->Show();
				 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form15::Close();
		 }
};
}
