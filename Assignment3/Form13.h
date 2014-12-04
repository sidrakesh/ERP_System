#pragma once
#include "StudentRecords.h"
#include "fstream"
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "CourseDetails.h"
namespace Assignment3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Drawing::Printing;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for Form13
	/// </summary>
	public ref class Form13 : public System::Windows::Forms::Form
	{
	public:
		Form13(void)
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
		~Form13()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::Label^  label6;
	public: int LoginRollNumber;
	private: System::Windows::Forms::Label^  label7;
	public: 
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::Button^  button2;
	private: System::ComponentModel::IContainer^  components;
	private: System::Drawing::Font^ printFont;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: StreamReader^ streamToPrint;
	protected: 
	protected: 
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(209, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 33);
			this->label1->TabIndex = 1;
			this->label1->Text = L"GRADESHEET";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label2->Location = System::Drawing::Point(139, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"SUBJECT NAME";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(412, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"CODE";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(498, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"CREDITS";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(582, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"GRADE";
			// 
			// textBox33
			// 
			this->textBox33->BackColor = System::Drawing::Color::White;
			this->textBox33->Enabled = false;
			this->textBox33->Location = System::Drawing::Point(569, 337);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(74, 20);
			this->textBox33->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(516, 340);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"SGPA";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(258, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Semester : ";
			// 
			// textBox34
			// 
			this->textBox34->BackColor = System::Drawing::Color::White;
			this->textBox34->Enabled = false;
			this->textBox34->Location = System::Drawing::Point(324, 54);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(46, 20);
			this->textBox34->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 340);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Credits Secured : ";
			// 
			// textBox35
			// 
			this->textBox35->BackColor = System::Drawing::Color::White;
			this->textBox35->Enabled = false;
			this->textBox35->Location = System::Drawing::Point(109, 337);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(100, 20);
			this->textBox35->TabIndex = 11;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 113);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(358, 212);
			this->listBox1->TabIndex = 12;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(375, 113);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(110, 212);
			this->listBox2->TabIndex = 13;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(491, 113);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(72, 212);
			this->listBox3->TabIndex = 14;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(569, 113);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(74, 212);
			this->listBox4->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(286, 443);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 32);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form13::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(251, 351);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 64);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Print Grade Sheet";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form13::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(516, 368);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"CGPA";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(569, 365);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(74, 20);
			this->textBox1->TabIndex = 19;
			// 
			// Form13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 487);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form13";
			this->Text = L"Gradesheet";
			this->Load += gcnew System::EventHandler(this, &Form13::Form13_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void Form13_Load(System::Object^  sender, System::EventArgs^  e) {
				 StudentRecords Student;
				 CourseDetails Course;

				 int i=0;
				 string s;
				 ifstream infile;
				 ofstream outfile;
				 infile.open("StudentNames.dat",ios::in);

				 while(i<LoginRollNumber)
				 {
					getline(infile,s);
					i++;
				 }
				 infile.close();

				 infile.open(s,ios::in);
				 infile.seekg(0);
				 infile.read((char*)&Student,sizeof(StudentRecords));
				 infile.close();
				 
				 int Start = Student.ShowSubjectStartNumber();
				 int End = Student.ShowSubjectEndNumber();
				 
				 textBox34->Text = Convert::ToString(Student.ShowCurrentSemester()-1);

				 int CreditsSum = 0;
				 int WeightedSum = 0;
				 char* grade;
				 int credit;

				 for(i=Start;i<End;i++)
				 {
					Course = Student.ShowCourse(i);
					grade = Course.GetCourseGrade();
					credit=  Course.GetCourseCredits();
					if(grade[0]=='E'||grade[0]=='A'||grade[0]=='B'||grade[0]=='C'||grade[0]=='D'||grade[0]=='P')
					CreditsSum += credit;
					if(grade[0] == 'E')
						WeightedSum += 6*credit;
					else if(grade[0] == 'A')
						WeightedSum += 10*credit;
					else if(grade[0] == 'B')
						WeightedSum += 9*credit;
					else if(grade[0] == 'C')
						WeightedSum += 8*credit;
					else if(grade[0] == 'D')
						WeightedSum += 7*credit;
					else if(grade[0] == 'P')
						WeightedSum += 5*credit;
				 }
				 float SGPA;
				 if(CreditsSum>0)
				 SGPA = (float)WeightedSum/(float)CreditsSum;

				 float cgcred = (Student.ShowCGPA())*(Student.ShowCredits());
				 float ncgcred = WeightedSum + cgcred;
				 float CGPA = ncgcred/(float)(Student.ShowCredits()+CreditsSum);

				 textBox33->Text = Convert::ToString(SGPA);
				 textBox35->Text = Convert::ToString(CreditsSum);
				 textBox1->Text = Convert::ToString(CGPA);

				 Student.GetCredits(Student.ShowCredits()+CreditsSum);
				 Student.GetCGPA(CGPA);
				 
				 outfile.open(Student.ShowName(),ios::out|ios::trunc);
				 outfile.write((char*)&Student,sizeof(StudentRecords));
				 outfile.close();

				 String^ CourseName;
				 String^ CourseCredit;
				 String^ CourseGrade;
				 String^ CourseCode;
				 String^ StringSum;
				 string ss;
				 int Credit;
				 char filename[200];
				 for(i=Start;i<End;i++)
				 {
					Course = Student.ShowCourse(i);
					CourseName = gcnew String(reinterpret_cast<const char*>(Course.GetCourseName()));
					listBox1->Items->Add(CourseName);
				 
					CourseCode = gcnew String(reinterpret_cast<const char*>(Course.GetCourseCode()));
					listBox2->Items->Add(CourseCode);
				
					Credit = Course.GetCourseCredits();
					CourseCredit = Convert::ToString(Credit);
					listBox3->Items->Add(CourseCredit);
				  
					CourseGrade = gcnew String(reinterpret_cast<const char*>(Course.GetCourseGrade()));
					listBox4->Items->Add(CourseGrade);
					
					StringSum = String::Concat("Course : ",CourseName," Code : ",CourseCode," Credits : ",CourseCredit," Grade : ",CourseGrade);
					ss = marshal_as<std::string>(StringSum);
				 
					strcpy_s(filename,Student.ShowName());
					strcat_s(filename,200,"Results");
				 
					outfile.open(filename,ios::out|ios::app);
					outfile<<ss<<"\n";
					outfile.close();
				 }
				 
				
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form13::Close();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 StudentRecords Student;
			 int i=0;
			 string s;
			 ifstream infile;
			 infile.open("StudentNames.dat",ios::in);

			 while(i<LoginRollNumber)
			 {
				getline(infile,s);
				i++;
			 }
			 infile.close();

			 infile.open(s,ios::in);
			 infile.seekg(0);
			 infile.read((char*)&Student,sizeof(StudentRecords));
			 infile.close();
			 char filename[50];
			 strcpy_s(filename,Student.ShowName());
			 strcat_s(filename,50,"Results");

			 try 
			 {
				streamToPrint = gcnew StreamReader( gcnew String(reinterpret_cast<const char*>(filename)));
				
				try 
				{
					printFont = gcnew System::Drawing::Font("Arial", 10);
					PrintDocument^ pd = gcnew PrintDocument();
					pd->PrintPage += gcnew PrintPageEventHandler(this, &Form13::pd_PrintPage);
					pd->Print();
				}  
				__finally 
				{
					streamToPrint->Close();
				}
			}  
			 			
			catch(Exception^ ex) 
				{
					MessageBox::Show(ex->Message);
				}
			}
private: void pd_PrintPage(Object^ sender, PrintPageEventArgs^ ev) 
			{
				float linesPerPage = 0;
				float yPos = 0;
				int count = 0;
				float leftMargin = (float)ev->MarginBounds.Left;
				float topMargin = (float)ev->MarginBounds.Top;
				String^ line;

				// Calculate the number of lines per page.
				linesPerPage = ev->MarginBounds.Height / printFont->GetHeight(ev->Graphics);

				// Print each line of the file.
				while(count < linesPerPage && ( streamToPrint->Peek()>=0)) 
				{
					line=streamToPrint->ReadLine();
					yPos = topMargin + (count* printFont->GetHeight(ev->Graphics));
					ev->Graphics->DrawString(gcnew String(line), printFont, Brushes::Black, leftMargin, yPos, gcnew StringFormat());
					count++;
				}
			}

};
}
