#pragma once
#include "StudentRecords.h"
#include "CourseDetails.h"
#include "Form17.h"
#include "fstream"
namespace Assignment3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form12
	/// </summary>
	public ref class Form12 : public System::Windows::Forms::Form
	{
	public:
		Form12(void)
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
		~Form12()
		{
			if (components)
			{
				delete components;
			}
		}

	public: int LoginRollNumber;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	public: 
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
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(44, 98);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(369, 139);
			this->checkedListBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(170, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Done";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form12::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Register by selecting the courses : ";
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(44, 273);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(369, 94);
			this->checkedListBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Core courses : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 257);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Elective Courses ; ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(167, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Semester : ";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(246, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(54, 20);
			this->textBox1->TabIndex = 7;
			// 
			// Form12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(461, 415);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox1);
			this->Name = L"Form12";
			this->Text = L"Registration";
			this->Load += gcnew System::EventHandler(this, &Form12::Form12_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Form12_Load(System::Object^  sender, System::EventArgs^  e) {
				StudentRecords Student;
				CourseDetails Course;
				ifstream infile;
				int i=0;
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

				textBox1->Text = Convert::ToString(Student.ShowCurrentSemester());
				
				if(endposition>0){

				for(i=0;i<n;i++)
				{
					infile.open("CoursesList.dat",ios::in);
					infile.seekg(i*sizeof(CourseDetails));
					infile.read((char*)&Course,sizeof(CourseDetails));
					infile.close();

					if(Course.GetCourseSemester()==Student.ShowCurrentSemester()&&strcmp(Course.GetCourseDepartment(),Student.ShowDepartment())==0&&strcmp(Course.GetCourseType(),"Core")==0)
					(checkedListBox1->Items)->Add(gcnew String(reinterpret_cast<const char*>(Course.GetCourseName())));
					
				}
				for(i=0;i<Student.ShowElectivesNumber();i++)
				{
					(checkedListBox2->Items)->Add(gcnew String(reinterpret_cast<const char*>((Student.ShowElective(i)).GetCourseName())));
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

				 Student.GetSubjectStartNumber(Student.ShowSubjectEndNumber());

				 infile.open("CoursesList.dat",ios::in|ios::ate);
				 int endposition = (int)infile.tellg();
				 infile.close();
				 int n = endposition/sizeof(CourseDetails);
				 
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
							Student.AddToRegisteredCourses(Course);
							break;
						}
					}
				 }

				 for(i=0;i<(checkedListBox2->CheckedItems)->Count;i++)
				 {
					for(j=0;j<n;j++)
					{
						infile.open("CoursesList.dat",ios::in);
						infile.seekg(j*sizeof(CourseDetails));
						infile.read((char*)&Course,sizeof(CourseDetails));
						infile.close();

						if(gcnew String(reinterpret_cast<const char*>(Course.GetCourseName()))==Convert::ToString((checkedListBox2->CheckedItems)[i]))
						{
							Student.AddToRegisteredCourses(Course);
							break;
						}
					}
				 }

				 Student.GetCurrentSemester(Student.ShowCurrentSemester()+1);
				 Student.GetElectivesNumber(0);

				 ofstream outfile;

				 outfile.open(Student.ShowName(),ios::out|ios::trunc);
				 outfile.write((char*)&Student,sizeof(Student));
				 outfile.close();

				 Form17^ form17 = gcnew Form17();
				 form17->Show();

				 Form12::Close();
			 }
};
}