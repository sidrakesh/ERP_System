#pragma once
#include "Form2.h"
#include "Form4.h"
#include "Form8.h"
#include "Form11.h"
#include "Form14.h"
#include "Form18.h"
#include "Form20.h"
#include "vcclr.h"
#include "FacadRecords.h"
#include "msclr/marshal.h"
#include "msclr/marshal_cppstd.h"

namespace Assignment3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  LoginTabs;
	private: System::Windows::Forms::TabPage^  Students;
	protected: 

	protected: 

	protected: 

	private: System::Windows::Forms::TabPage^  Teacher;

	private: System::Windows::Forms::TabPage^  FacultyAdviser;

	private: System::Windows::Forms::TabPage^  Admin;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  button5;


	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label11;
	protected:
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  howToUseToolStripMenuItem;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private:
		System::String^ Password;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->LoginTabs = (gcnew System::Windows::Forms::TabControl());
			this->Students = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Teacher = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FacultyAdviser = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Admin = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToUseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->LoginTabs->SuspendLayout();
			this->Students->SuspendLayout();
			this->Teacher->SuspendLayout();
			this->FacultyAdviser->SuspendLayout();
			this->Admin->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// LoginTabs
			// 
			this->LoginTabs->Controls->Add(this->Students);
			this->LoginTabs->Controls->Add(this->Teacher);
			this->LoginTabs->Controls->Add(this->FacultyAdviser);
			this->LoginTabs->Controls->Add(this->Admin);
			this->LoginTabs->Controls->Add(this->tabPage1);
			this->LoginTabs->Location = System::Drawing::Point(268, 42);
			this->LoginTabs->Name = L"LoginTabs";
			this->LoginTabs->SelectedIndex = 0;
			this->LoginTabs->Size = System::Drawing::Size(382, 241);
			this->LoginTabs->TabIndex = 0;
			// 
			// Students
			// 
			this->Students->Controls->Add(this->button4);
			this->Students->Controls->Add(this->label4);
			this->Students->Controls->Add(this->textBox1);
			this->Students->Controls->Add(this->textBox3);
			this->Students->Controls->Add(this->label1);
			this->Students->Controls->Add(this->linkLabel1);
			this->Students->Controls->Add(this->label3);
			this->Students->Location = System::Drawing::Point(4, 22);
			this->Students->Name = L"Students";
			this->Students->Padding = System::Windows::Forms::Padding(3);
			this->Students->Size = System::Drawing::Size(374, 215);
			this->Students->TabIndex = 0;
			this->Students->Text = L"Student";
			this->Students->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(172, 122);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Go";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(72, 77);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"PASSWORD : ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(161, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(161, 74);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(142, 20);
			this->textBox3->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"New user\? Register";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(169, 166);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(28, 13);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"here";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked_1);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(72, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"ROLL NO. :  ";
			// 
			// Teacher
			// 
			this->Teacher->Controls->Add(this->button3);
			this->Teacher->Controls->Add(this->textBox6);
			this->Teacher->Controls->Add(this->label7);
			this->Teacher->Controls->Add(this->textBox2);
			this->Teacher->Controls->Add(this->label2);
			this->Teacher->Location = System::Drawing::Point(4, 22);
			this->Teacher->Name = L"Teacher";
			this->Teacher->Padding = System::Windows::Forms::Padding(3);
			this->Teacher->Size = System::Drawing::Size(374, 215);
			this->Teacher->TabIndex = 1;
			this->Teacher->Text = L"Teacher";
			this->Teacher->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(169, 147);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Go";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(160, 51);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(133, 20);
			this->textBox6->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(78, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"ID:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(160, 96);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(133, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(78, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"PASSWORD: ";
			// 
			// FacultyAdviser
			// 
			this->FacultyAdviser->Controls->Add(this->button2);
			this->FacultyAdviser->Controls->Add(this->textBox7);
			this->FacultyAdviser->Controls->Add(this->label8);
			this->FacultyAdviser->Controls->Add(this->textBox4);
			this->FacultyAdviser->Controls->Add(this->label5);
			this->FacultyAdviser->Location = System::Drawing::Point(4, 22);
			this->FacultyAdviser->Name = L"FacultyAdviser";
			this->FacultyAdviser->Padding = System::Windows::Forms::Padding(3);
			this->FacultyAdviser->Size = System::Drawing::Size(374, 215);
			this->FacultyAdviser->TabIndex = 2;
			this->FacultyAdviser->Text = L"Faculty Adviser";
			this->FacultyAdviser->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(169, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Go";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(160, 51);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(133, 20);
			this->textBox7->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(78, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"ID:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(160, 96);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(133, 20);
			this->textBox4->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(78, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"PASSWORD: ";
			// 
			// Admin
			// 
			this->Admin->Controls->Add(this->label9);
			this->Admin->Controls->Add(this->button1);
			this->Admin->Controls->Add(this->textBox5);
			this->Admin->Controls->Add(this->label6);
			this->Admin->Location = System::Drawing::Point(4, 22);
			this->Admin->Name = L"Admin";
			this->Admin->Padding = System::Windows::Forms::Padding(3);
			this->Admin->Size = System::Drawing::Size(374, 215);
			this->Admin->TabIndex = 3;
			this->Admin->Text = L"Administrator";
			this->Admin->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(137, 105);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(123, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"(Password is : password)";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(160, 140);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Go";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(151, 57);
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(133, 20);
			this->textBox5->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(69, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"PASSWORD: ";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(374, 215);
			this->tabPage1->TabIndex = 4;
			this->tabPage1->Text = L"Dean Nominee";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(137, 105);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(123, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"(Password is : password)";
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(160, 140);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Go";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(151, 57);
			this->textBox9->Name = L"textBox9";
			this->textBox9->PasswordChar = '*';
			this->textBox9->Size = System::Drawing::Size(133, 20);
			this->textBox9->TabIndex = 0;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(69, 60);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"PASSWORD: ";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(659, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->howToUseToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"&Help";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Name = L"howToUseToolStripMenuItem";
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			this->howToUseToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::howToUseToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(243, 241);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(659, 294);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->LoginTabs);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"IIT Academic Course Management System";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->LoginTabs->ResumeLayout(false);
			this->Students->ResumeLayout(false);
			this->Students->PerformLayout();
			this->Teacher->ResumeLayout(false);
			this->Teacher->PerformLayout();
			this->FacultyAdviser->ResumeLayout(false);
			this->FacultyAdviser->PerformLayout();
			this->Admin->ResumeLayout(false);
			this->Admin->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		 }
private: System::Void linkLabel1_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		 Form2^ form2 = gcnew Form2();
		 form2->Show();
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox5->Text=="password")
			 {
				Form4^ form4 = gcnew Form4();
				form4->Show();
				textBox5->Text="";
			 }
			 else MessageBox::Show("Incorrect Password","ERROR");
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox9->Text=="password")
			 {
				 Form20^ form20 = gcnew Form20();
				 form20->Show();
				 textBox9->Text="";
			 }
			 else MessageBox::Show("Incorrect Password","ERROR");
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 StudentRecords Student;
			 ifstream infile,ninfile;
			 msclr::interop::marshal_context context;
			 string s;
			 int flag=0;
			 infile.open("StudentNames.dat",ios::in);
			 while(infile.good())
			 {
				getline(infile,s);

				ninfile.open(s,ios::in);
				ninfile.seekg(0);
				ninfile.read((char*)&Student,sizeof(StudentRecords));
				ninfile.close();

				if(Student.ShowLoginRollNumber()==Convert::ToInt32(textBox1->Text)&&gcnew String(reinterpret_cast<const char*>(Student.ShowPassword()))==Convert::ToString(textBox3->Text))
				{
					flag=1;
					Form11^ form11 = gcnew Form11();
					form11->LoginRollNumber = Convert::ToInt32(textBox1->Text);
					form11->Show();
					textBox3->Text="";
					break;
				}
			 }
			 infile.close();

			 if(flag==0)
				 MessageBox::Show("Incorrect Login ID/Password","!");

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 FacadRecords Facad;
			 ifstream infile,ninfile;
			 msclr::interop::marshal_context context;
			 string s;
			 int flag;
			 infile.open("FacadNames.dat",ios::in);
			 while(infile.good())
			 {
				getline(infile,s);

				ninfile.open(s,ios::in);
				ninfile.seekg(0);
				ninfile.read((char*)&Facad,sizeof(FacadRecords));
				ninfile.close();

				if(Facad.ShowLoginID()==Convert::ToInt32(textBox7->Text)&&gcnew String(reinterpret_cast<const char*>(Facad.ShowPassword()))==Convert::ToString(textBox4->Text))
				{
					flag=1;
					Form14^ form14 = gcnew Form14();
					form14->Show();
					textBox4->Text = "";
					break;
				}
			 }
			 infile.close();

			 if(flag==0)
				 MessageBox::Show("Incorrect Login ID/Password","!");
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 TeacherRecords Teacher;
			 ifstream infile,ninfile;
			 msclr::interop::marshal_context context;
			 string s;
			 int flag;
			 infile.open("TeacherNames.dat",ios::in);
			 while(infile.good())
			 {
				getline(infile,s);

				ninfile.open(s,ios::in);
				ninfile.seekg(0);
				ninfile.read((char*)&Teacher,sizeof(TeacherRecords));
				ninfile.close();

				if(Teacher.ShowLoginID()==Convert::ToInt32(textBox6->Text)&&gcnew String(reinterpret_cast<const char*>(Teacher.ShowPassword()))==Convert::ToString(textBox2->Text))
				{
					flag=1;
					Form18^ form18 = gcnew Form18();
					form18->LoginID = Teacher.ShowLoginID();
					form18->Show();
					textBox2->Text = "";
					break;
				}
			 }
			 infile.close();

			 if(flag==0)
				 MessageBox::Show("Incorrect Login ID/Password","!");
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Close();
		 }
private: System::Void howToUseToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form8^ form8 = gcnew Form8();
			 form8->Show();
		 }
};
}

