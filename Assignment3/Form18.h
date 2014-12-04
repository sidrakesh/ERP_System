#pragma once
#include "CourseDetails.h"
#include "StudentRecords.h"
#include "TeacherRecords.h"
#include "fstream"
#include "string"
#include "msclr/marshal.h"
#include "msclr/marshal_cppstd.h"
#include "Form19.h"
namespace Assignment3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form18
	/// </summary>
	public ref class Form18 : public System::Windows::Forms::Form
	{
	public:
		Form18(void)
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
		~Form18()
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
	private: System::String^ SelectedSubject;
	private: System::String^ GradeString;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	public: int LoginID;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(132, 38);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(260, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form18::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(132, 93);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(260, 21);
			this->comboBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Select Your Course : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Select Student : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Enter grade : ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(98, 198);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Enter Grade";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form18::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(253, 198);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form18::button2_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"A", L"B", L"C", L"D", L"E", L"P"});
			this->comboBox3->Location = System::Drawing::Point(132, 149);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(72, 21);
			this->comboBox3->TabIndex = 8;
			// 
			// Form18
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 243);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Form18";
			this->Text = L"Grade Entry";
			this->Load += gcnew System::EventHandler(this, &Form18::Form18_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form18_Load(System::Object^  sender, System::EventArgs^  e) {
				ifstream infile;
				string s;
				CourseDetails Course;
				TeacherRecords Teacher;
				infile.open("TeacherNames.dat",ios::in);
				int i=0; 
				while(i<LoginID)
				{
					getline(infile,s);
					i++;
				}
				infile.close();

				infile.open(s,ios::in);
				infile.read((char*)&Teacher,sizeof(TeacherRecords));
				infile.close();

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

					if(strcmp(Course.GetCourseTeacher(),Teacher.ShowName())==0)
					(comboBox1->Items)->Add(gcnew String(reinterpret_cast<const char*>(Course.GetCourseName())));
				}
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 ifstream infile,ninfile;
				 StudentRecords Student;
				 infile.open("StudentNames.dat",ios::in);
				 string s;
				 int j;
				 SelectedSubject = Convert::ToString(comboBox1->Items[comboBox1->SelectedIndex]);
				 while(infile.good())
				 {
					getline(infile,s);
					
					if(s=="")
						break;
					ninfile.open(s,ios::in);
					ninfile.seekg(0);
					ninfile.read((char*)&Student,sizeof(StudentRecords));
					ninfile.close();

					comboBox2->Items->Clear();

					for(j=Student.ShowSubjectStartNumber();j<Student.ShowSubjectEndNumber();j++)
					{
						if(gcnew String(reinterpret_cast<const char*>((Student.ShowCourse(j)).GetCourseName())) == SelectedSubject)
						(comboBox2->Items)->Add(gcnew String(reinterpret_cast<const char*>(Student.ShowName())));
					}
				 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form18::Close();
		 }
private: void StringToChar(char*str,string s)
		 {
		 unsigned int i;
		 for(i=0;i < s.length();i++)
			 str[i] = s[i];
		 str[i]='\0';
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 ifstream infile,ninfile;
			 ofstream outfile;
			 string s,Name;
			 char Grade[2];
			 msclr::interop::marshal_context context;
			 StudentRecords Student;
			 
			 if((comboBox1->SelectedIndex>-1)&&(comboBox2->SelectedIndex>-1)&&(comboBox3->SelectedIndex>-1))
			 {
				infile.open("StudentNames.dat",ios::in);
				int i;
				while(infile.good())
				{
					getline(infile,Name);

					ninfile.open(Name,ios::in);
					ninfile.seekg(0);
					ninfile.read((char*)&Student,sizeof(StudentRecords));
					ninfile.close();
			 
					if(Convert::ToString(comboBox2->Items[comboBox2->SelectedIndex])==gcnew String(reinterpret_cast<const char*>(Student.ShowName())))
					break;
				}

				for(i=Student.ShowSubjectStartNumber();i<Student.ShowSubjectEndNumber();i++)
				{
					if(gcnew String(reinterpret_cast<const char*>((Student.ShowCourse(i)).GetCourseName())) == SelectedSubject)
					{
						GradeString = Convert::ToString(comboBox3->Items[comboBox3->SelectedIndex]);
						s = context.marshal_as<std::string>(GradeString);
						StringToChar(Grade,s);
						Student.ChangeGrade(i,Grade);
					}
				}

				outfile.open(Name,ios::in|ios::trunc);
				outfile.write((char*)&Student,sizeof(StudentRecords));
				outfile.close();
			 
				Form19^ form19 = gcnew Form19();
				form19->Show();
			}
			 else MessageBox::Show("One/more entries not specified!","Error!");
		 }
	};
}
