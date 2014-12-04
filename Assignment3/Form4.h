#pragma once
#include "Form5.h"
#include "Form6.h"
#include "TeacherRecords.h"
#include "FacadRecords.h"
#include "iostream"
#include "fstream"
#include "string"
#include "msclr/marshal.h"
#include "msclr/marshal_cppstd.h"
using namespace std;

namespace Assignment3 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  TeacherTab;
	private: System::Windows::Forms::TabPage^  FacultyAdviser;


	private: System::Windows::Forms::Label^  label11;

	private: System::Windows::Forms::Button^  RegisterButton;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label13;


	private: System::Windows::Forms::Label^  label15;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;

	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	private: System::Windows::Forms::ComboBox^  comboBox10;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private:
		System::String^ NameString;
		System::String^ GenderString;
		System::String^ AddressString;
		int BirthMonthDateInt;
		int BirthYearInt;
		int LoginIDFacad;
		int LoginIDTeacher;
		System::String^ BirthMonthString;
		System::String^ PermanentAddressString;
		System::String^ ContactNumberString;
		System::String^ EmergencyContactNumberString;
		System::String^ CityString;
		System::String^ StateString;
		System::String^ DepartmentString;
		System::String^ PasswordString;
		System::String^ RepeatPasswordString;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  textBox15;
private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::ComboBox^  comboBox11;
private: System::Windows::Forms::Label^  label14;

private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::ComboBox^  comboBox12;
private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::Button^  button1;
			 

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->TeacherTab = (gcnew System::Windows::Forms::TabPage());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->FacultyAdviser = (gcnew System::Windows::Forms::TabPage());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->TeacherTab->SuspendLayout();
			this->FacultyAdviser->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"REGISTER A:";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->TeacherTab);
			this->tabControl1->Controls->Add(this->FacultyAdviser);
			this->tabControl1->Location = System::Drawing::Point(34, 65);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(419, 599);
			this->tabControl1->TabIndex = 1;
			// 
			// TeacherTab
			// 
			this->TeacherTab->Controls->Add(this->comboBox12);
			this->TeacherTab->Controls->Add(this->label12);
			this->TeacherTab->Controls->Add(this->textBox2);
			this->TeacherTab->Controls->Add(this->textBox13);
			this->TeacherTab->Controls->Add(this->label3);
			this->TeacherTab->Controls->Add(this->label23);
			this->TeacherTab->Controls->Add(this->label11);
			this->TeacherTab->Controls->Add(this->RegisterButton);
			this->TeacherTab->Controls->Add(this->textBox6);
			this->TeacherTab->Controls->Add(this->textBox5);
			this->TeacherTab->Controls->Add(this->comboBox5);
			this->TeacherTab->Controls->Add(this->textBox4);
			this->TeacherTab->Controls->Add(this->richTextBox1);
			this->TeacherTab->Controls->Add(this->textBox3);
			this->TeacherTab->Controls->Add(this->comboBox4);
			this->TeacherTab->Controls->Add(this->comboBox3);
			this->TeacherTab->Controls->Add(this->comboBox2);
			this->TeacherTab->Controls->Add(this->comboBox1);
			this->TeacherTab->Controls->Add(this->textBox1);
			this->TeacherTab->Controls->Add(this->label10);
			this->TeacherTab->Controls->Add(this->label9);
			this->TeacherTab->Controls->Add(this->label8);
			this->TeacherTab->Controls->Add(this->label7);
			this->TeacherTab->Controls->Add(this->label6);
			this->TeacherTab->Controls->Add(this->label5);
			this->TeacherTab->Controls->Add(this->label4);
			this->TeacherTab->Controls->Add(this->label2);
			this->TeacherTab->Controls->Add(this->label13);
			this->TeacherTab->Location = System::Drawing::Point(4, 22);
			this->TeacherTab->Name = L"TeacherTab";
			this->TeacherTab->Padding = System::Windows::Forms::Padding(3);
			this->TeacherTab->Size = System::Drawing::Size(411, 573);
			this->TeacherTab->TabIndex = 0;
			this->TeacherTab->Text = L"Teacher";
			this->TeacherTab->UseVisualStyleBackColor = true;
			// 
			// comboBox12
			// 
			this->comboBox12->Items->AddRange(gcnew cli::array< System::Object^  >(34) {L"Aerospace Engineering", L"Agricultural & Food Engineering", 
				L"Architecture & Regional Planning", L"Biotechnology", L"Center for Educational Technology", L"Chemical Engineering", L"Chemistry", 
				L"Civil Engineering", L"Computer Science & Engineering", L"Cryogenic Engineering", L"Electrical Engineering", L"Electronics & Electrical Communication Engineering", 
				L"G S Sanyal School of Telecommunications", L"Geology & Geophysics", L"Humanities & Social Sciences", L"Industrial Engineering & Management", 
				L"Information Technology", L"Materials Science", L"Mathematics", L"Mechanical Engineering", L"Medical Science & Technology", 
				L"Metallurgical & Materials Engineering", L"Mining Engineering", L"Ocean Engineering & Naval Architecture", L"Oceans, Rivers, Atmosphere and Land Sciences", 
				L"Physics & Meteorology", L"Rajendra Mishra School of Engineering Entrepreneurship", L"Rajiv Gandhi School of Intellectual Property Law", 
				L"Ranbir and Chitra Gupta School of Infrastructure Design and Management", L"Reliability Engineering Centre", L"Rubber Technology Centre", 
				L"Rural Development Centre", L"School of Water Resources", L"Vinod Gupta School of Management"});
			this->comboBox12->Location = System::Drawing::Point(138, 101);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(136, 21);
			this->comboBox12->TabIndex = 1;
			this->comboBox12->SelectedIndexChanged += gcnew System::EventHandler(this, &Form4::comboBox12_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(29, 101);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 13);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Department:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(137, 484);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(134, 20);
			this->textBox2->TabIndex = 12;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form4::textBox2_TextChanged);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(137, 453);
			this->textBox13->Name = L"textBox13";
			this->textBox13->PasswordChar = '*';
			this->textBox13->Size = System::Drawing::Size(134, 20);
			this->textBox13->TabIndex = 11;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &Form4::textBox13_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 487);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Repeat Password: ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(29, 454);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(59, 13);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Password: ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(170, 419);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(25, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"+91";
			// 
			// RegisterButton
			// 
			this->RegisterButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RegisterButton->Location = System::Drawing::Point(131, 528);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(122, 32);
			this->RegisterButton->TabIndex = 13;
			this->RegisterButton->Text = L"Register";
			this->RegisterButton->UseVisualStyleBackColor = true;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &Form4::RegisterButton_Click_1);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(201, 416);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(123, 20);
			this->textBox6->TabIndex = 10;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form4::textBox6_TextChanged_1);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(137, 382);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(132, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form4::textBox5_TextChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(35) {L"Andra Pradesh", L"Arunachal Pradesh", L"Assam", 
				L"Bihar", L"Chhattisgarh", L"Goa", L"Gujarat", L"Haryana", L"Himachal Pradesh", L"Jammu and Kashmir", L"Jharkhand", L"Karnataka", 
				L"Kerala", L"Madya Pradesh", L"Maharashtra", L"Manipur", L"Meghalaya", L"Mizoram", L"Nagaland", L"Odisha", L"Punjab", L"Rajasthan", 
				L"Sikkim", L"Tamil Nadu", L"Tripura", L"Uttarakhand", L"Uttar Pradesh", L"West Bengal", L"Andaman and Nicobar Islands", L"Chandigarh", 
				L"Dadar and Nagar Haveli", L"Daman and Diu", L"Delhi", L"Lakshadeep", L"Pondicherry"});
			this->comboBox5->Location = System::Drawing::Point(137, 345);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(115, 21);
			this->comboBox5->TabIndex = 8;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Form4::comboBox5_SelectedIndexChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(137, 316);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form4::textBox4_TextChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(137, 206);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(212, 98);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form4::richTextBox1_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(131, 207);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(0, 20);
			this->textBox3->TabIndex = 20;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(34) {L"2013", L"2012", L"2011", L"2010", L"2009", L"2008", 
				L"2007", L"2006", L"2005", L"2004", L"2003", L"2002", L"2001", L"2000", L"1999", L"1998", L"1997", L"1996", L"1995", L"1994", 
				L"1993", L"1992", L"1991", L"1990", L"1989", L"1988", L"1987", L"1986", L"1985", L"1984", L"1983", L"1982", L"1981", L"1980"});
			this->comboBox4->Location = System::Drawing::Point(292, 176);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(75, 21);
			this->comboBox4->TabIndex = 5;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Form4::comboBox4_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"January", L"February", L"March", L"April", L"May", 
				L"June", L"July", L"August", L"September", L"October", L"November", L"December"});
			this->comboBox3->Location = System::Drawing::Point(195, 176);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(91, 21);
			this->comboBox3->TabIndex = 4;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form4::comboBox3_SelectedIndexChanged_1);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Male", L"Female"});
			this->comboBox2->Location = System::Drawing::Point(137, 133);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(76, 21);
			this->comboBox2->TabIndex = 2;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form4::comboBox2_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(31) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31"});
			this->comboBox1->Location = System::Drawing::Point(138, 176);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(51, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form4::comboBox1_SelectedIndexChanged_2);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(138, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form4::textBox1_TextChanged_1);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(29, 136);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Gender:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(29, 179);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Birthdate:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(30, 419);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Emergency Contact Number:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(30, 385);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Contact Number:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(30, 348);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"State:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(30, 319);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"City:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 209);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Permanent Address:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Name:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(30, 35);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(129, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Fill in the following entries:";
			// 
			// FacultyAdviser
			// 
			this->FacultyAdviser->Controls->Add(this->comboBox6);
			this->FacultyAdviser->Controls->Add(this->comboBox11);
			this->FacultyAdviser->Controls->Add(this->label14);
			this->FacultyAdviser->Controls->Add(this->textBox15);
			this->FacultyAdviser->Controls->Add(this->textBox16);
			this->FacultyAdviser->Controls->Add(this->label26);
			this->FacultyAdviser->Controls->Add(this->label27);
			this->FacultyAdviser->Controls->Add(this->label15);
			this->FacultyAdviser->Controls->Add(this->button2);
			this->FacultyAdviser->Controls->Add(this->textBox9);
			this->FacultyAdviser->Controls->Add(this->textBox10);
			this->FacultyAdviser->Controls->Add(this->textBox11);
			this->FacultyAdviser->Controls->Add(this->richTextBox2);
			this->FacultyAdviser->Controls->Add(this->textBox12);
			this->FacultyAdviser->Controls->Add(this->comboBox7);
			this->FacultyAdviser->Controls->Add(this->comboBox8);
			this->FacultyAdviser->Controls->Add(this->comboBox9);
			this->FacultyAdviser->Controls->Add(this->comboBox10);
			this->FacultyAdviser->Controls->Add(this->textBox14);
			this->FacultyAdviser->Controls->Add(this->label16);
			this->FacultyAdviser->Controls->Add(this->label17);
			this->FacultyAdviser->Controls->Add(this->label18);
			this->FacultyAdviser->Controls->Add(this->label19);
			this->FacultyAdviser->Controls->Add(this->label20);
			this->FacultyAdviser->Controls->Add(this->label21);
			this->FacultyAdviser->Controls->Add(this->label22);
			this->FacultyAdviser->Controls->Add(this->label24);
			this->FacultyAdviser->Controls->Add(this->label25);
			this->FacultyAdviser->Location = System::Drawing::Point(4, 22);
			this->FacultyAdviser->Name = L"FacultyAdviser";
			this->FacultyAdviser->Padding = System::Windows::Forms::Padding(3);
			this->FacultyAdviser->Size = System::Drawing::Size(411, 573);
			this->FacultyAdviser->TabIndex = 1;
			this->FacultyAdviser->Text = L"Faculty Adviser";
			this->FacultyAdviser->UseVisualStyleBackColor = true;
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(35) {L"Andra Pradesh", L"Arunachal Pradesh", L"Assam", 
				L"Bihar", L"Chhattisgarh", L"Goa", L"Gujarat", L"Haryana", L"Himachal Pradesh", L"Jammu and Kashmir", L"Jharkhand", L"Karnataka", 
				L"Kerala", L"Madya Pradesh", L"Maharashtra", L"Manipur", L"Meghalaya", L"Mizoram", L"Nagaland", L"Odisha", L"Punjab", L"Rajasthan", 
				L"Sikkim", L"Tamil Nadu", L"Tripura", L"Uttarakhand", L"Uttar Pradesh", L"West Bengal", L"Andaman and Nicobar Islands", L"Chandigarh", 
				L"Dadar and Nagar Haveli", L"Daman and Diu", L"Delhi", L"Lakshadeep", L"Pondicherry"});
			this->comboBox6->Location = System::Drawing::Point(144, 338);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(115, 21);
			this->comboBox6->TabIndex = 8;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &Form4::comboBox6_SelectedIndexChanged);
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(34) {L"Aerospace Engineering", L"Agricultural & Food Engineering", 
				L"Architecture & Regional Planning", L"Biotechnology", L"Center for Educational Technology", L"Chemical Engineering", L"Chemistry", 
				L"Civil Engineering", L"Computer Science & Engineering", L"Cryogenic Engineering", L"Electrical Engineering", L"Electronics & Electrical Communication Engineering", 
				L"G S Sanyal School of Telecommunications", L"Geology & Geophysics", L"Humanities & Social Sciences", L"Industrial Engineering & Management", 
				L"Information Technology", L"Materials Science", L"Mathematics", L"Mechanical Engineering", L"Medical Science & Technology", 
				L"Metallurgical & Materials Engineering", L"Mining Engineering", L"Ocean Engineering & Naval Architecture", L"Oceans, Rivers, Atmosphere and Land Sciences", 
				L"Physics & Meteorology", L"Rajendra Mishra School of Engineering Entrepreneurship", L"Rajiv Gandhi School of Intellectual Property Law", 
				L"Ranbir and Chitra Gupta School of Infrastructure Design and Management", L"Reliability Engineering Centre", L"Rubber Technology Centre", 
				L"Rural Development Centre", L"School of Water Resources", L"Vinod Gupta School of Management"});
			this->comboBox11->Location = System::Drawing::Point(144, 89);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(134, 21);
			this->comboBox11->TabIndex = 1;
			this->comboBox11->SelectedIndexChanged += gcnew System::EventHandler(this, &Form4::comboBox11_SelectedIndexChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(30, 92);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 13);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Department:";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(144, 475);
			this->textBox15->Name = L"textBox15";
			this->textBox15->PasswordChar = '*';
			this->textBox15->Size = System::Drawing::Size(134, 20);
			this->textBox15->TabIndex = 12;
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &Form4::textBox15_TextChanged);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(144, 444);
			this->textBox16->Name = L"textBox16";
			this->textBox16->PasswordChar = '*';
			this->textBox16->Size = System::Drawing::Size(134, 20);
			this->textBox16->TabIndex = 11;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &Form4::textBox16_TextChanged);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(30, 477);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(97, 13);
			this->label26->TabIndex = 27;
			this->label26->Text = L"Repeat Password: ";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(30, 446);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(59, 13);
			this->label27->TabIndex = 26;
			this->label27->Text = L"Password: ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(177, 412);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 13);
			this->label15->TabIndex = 25;
			this->label15->Text = L"+91";
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(130, 517);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 32);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form4::button2_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(208, 409);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(123, 20);
			this->textBox9->TabIndex = 10;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form4::textBox9_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(144, 375);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(132, 20);
			this->textBox10->TabIndex = 9;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Form4::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(144, 309);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(121, 20);
			this->textBox11->TabIndex = 7;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Form4::textBox11_TextChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(144, 199);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(212, 98);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Form4::richTextBox2_TextChanged);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(138, 200);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(0, 20);
			this->textBox12->TabIndex = 20;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(34) {L"2013", L"2012", L"2011", L"2010", L"2009", L"2008", 
				L"2007", L"2006", L"2005", L"2004", L"2003", L"2002", L"2001", L"2000", L"1999", L"1998", L"1997", L"1996", L"1995", L"1994", 
				L"1993", L"1992", L"1991", L"1990", L"1989", L"1988", L"1987", L"1986", L"1985", L"1984", L"1983", L"1982", L"1981", L"1980"});
			this->comboBox7->Location = System::Drawing::Point(298, 160);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(75, 21);
			this->comboBox7->TabIndex = 5;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &Form4::comboBox7_SelectedIndexChanged);
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"January", L"February", L"March", L"April", L"May", 
				L"June", L"July", L"August", L"September", L"October", L"November", L"December"});
			this->comboBox8->Location = System::Drawing::Point(201, 160);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(91, 21);
			this->comboBox8->TabIndex = 4;
			this->comboBox8->SelectedIndexChanged += gcnew System::EventHandler(this, &Form4::comboBox8_SelectedIndexChanged);
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Male", L"Female"});
			this->comboBox9->Location = System::Drawing::Point(144, 122);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(76, 21);
			this->comboBox9->TabIndex = 2;
			this->comboBox9->SelectedIndexChanged += gcnew System::EventHandler(this, &Form4::comboBox9_SelectedIndexChanged);
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(31) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31"});
			this->comboBox10->Location = System::Drawing::Point(144, 160);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(51, 21);
			this->comboBox10->TabIndex = 3;
			this->comboBox10->SelectedIndexChanged += gcnew System::EventHandler(this, &Form4::comboBox10_SelectedIndexChanged);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(144, 61);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(175, 20);
			this->textBox14->TabIndex = 0;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &Form4::textBox14_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(30, 125);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 13);
			this->label16->TabIndex = 17;
			this->label16->Text = L"Gender:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(30, 163);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(52, 13);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Birthdate:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(30, 412);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(143, 13);
			this->label18->TabIndex = 24;
			this->label18->Text = L"Emergency Contact Number:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(30, 378);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(87, 13);
			this->label19->TabIndex = 23;
			this->label19->Text = L"Contact Number:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(30, 341);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(35, 13);
			this->label20->TabIndex = 22;
			this->label20->Text = L"State:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(30, 312);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(27, 13);
			this->label21->TabIndex = 21;
			this->label21->Text = L"City:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(30, 203);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(102, 13);
			this->label22->TabIndex = 19;
			this->label22->Text = L"Permanent Address:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(30, 64);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(38, 13);
			this->label24->TabIndex = 15;
			this->label24->Text = L"Name:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(30, 35);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(129, 13);
			this->label25->TabIndex = 14;
			this->label25->Text = L"Fill in the following entries:";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(182, 679);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form4::button1_Click);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoScrollMargin = System::Drawing::Size(0, 25);
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(490, 415);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Name = L"Form4";
			this->Text = L"Teacher / Faculty Adviser Registration";
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			this->tabControl1->ResumeLayout(false);
			this->TeacherTab->ResumeLayout(false);
			this->TeacherTab->PerformLayout();
			this->FacultyAdviser->ResumeLayout(false);
			this->FacultyAdviser->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: void StringToChar(char*str,string s)
		 {
		 unsigned int i;
		 for(i=0;i < s.length();i++)
			 str[i] = (char)s[i];
		 str[i]='\0';
		 }
private: System::Void RegisterButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 TeacherRecords Teacher;
			 ofstream outfile;
			 string s;
			 char str[100];
			 msclr::interop::marshal_context context;
			 
			 if(NameString==""||GenderString==""||DepartmentString==""||BirthMonthString==""||BirthMonthDateInt==0||BirthYearInt==0||PermanentAddressString==""||CityString==""||StateString==""||ContactNumberString==""||EmergencyContactNumberString==""||PasswordString==""||RepeatPasswordString=="")
				 MessageBox::Show("One/More entries not filled!","Error!");
			 else if(PasswordString != RepeatPasswordString)
				 MessageBox::Show("Repeated password does not match original password.","Error!");
			 else{
				 s = context.marshal_as<std::string>(NameString);
				 outfile.open("TeacherNames.dat",ios::out|ios::app);
				 outfile<<s<<"\n";
				 outfile.close();
				 
				 StringToChar(str,s);
				 Teacher.GetName(str);
				 s = context.marshal_as<std::string>(GenderString);
				 StringToChar(str,s);
				 Teacher.GetGender(str);
				 s = context.marshal_as<std::string>(DepartmentString);
				 StringToChar(str,s);
				 Teacher.GetDepartment(str);
				 s = context.marshal_as<std::string>(BirthMonthString);
				 StringToChar(str,s);
				 Teacher.GetBirthDate(BirthMonthDateInt,str,BirthYearInt);
				 s = context.marshal_as<std::string>(PermanentAddressString);
				 StringToChar(str,s);
				 Teacher.GetAddress(str);
				 s = context.marshal_as<std::string>(CityString);
				 StringToChar(str,s);
				 Teacher.GetCity(str);
				 s = context.marshal_as<std::string>(StateString);
				 StringToChar(str,s);
				 Teacher.GetState(str);
				 s = context.marshal_as<std::string>(ContactNumberString);
				 StringToChar(str,s);
				 Teacher.GetContactNumber(str);
				 s = context.marshal_as<std::string>(EmergencyContactNumberString);
				 StringToChar(str,s);
				 Teacher.GetEmergencyContactNumber(str);
				 s = context.marshal_as<std::string>(PasswordString);
				 StringToChar(str,s);
				 Teacher.GetPassword(str);
				 LoginIDTeacher = GenerateLoginIDTeacher();
				 Teacher.GetLoginID(LoginIDTeacher);
				 NameString="";
				 GenderString="";
				 DepartmentString="";
				 BirthMonthDateInt=0;
				 BirthMonthString="";
				 BirthYearInt=0;
				 PermanentAddressString="";
				 CityString="";
				 StateString="";
				 ContactNumberString="";
				 EmergencyContactNumberString="";
				 PasswordString="";
				 RepeatPasswordString="";
				 
				 outfile.open(Teacher.ShowName(),ios::app|ios::out);
				 outfile.write((char*)&Teacher,sizeof(TeacherRecords));
				 outfile.close();

				 Form5^ form5 = gcnew Form5();
				 form5->LoginID = LoginIDTeacher;
				 form5->Show();
			 }
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
			NameString = textBox1->Text;
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			if(comboBox2->SelectedIndex==0) 
			GenderString = Convert::ToString("Male");
			else GenderString = Convert::ToString("Female");
		 }
private: System::Void comboBox1_SelectedIndexChanged_2(System::Object^  sender, System::EventArgs^  e) {
			BirthMonthDateInt = comboBox1->SelectedIndex+1;
		 }
private: System::Void comboBox3_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
			BirthMonthString = Convert::ToString(comboBox3->Items[comboBox3->SelectedIndex]);
		 }
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			BirthYearInt = 2013 - comboBox4->SelectedIndex;
		 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 PermanentAddressString = richTextBox1->Text;
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 CityString = textBox4->Text;
		 }
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 StateString = Convert::ToString(comboBox5->Items[comboBox5->SelectedIndex]);
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 ContactNumberString = textBox5->Text;
		 }
private: System::Void textBox6_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 EmergencyContactNumberString = textBox6->Text;
		 }
private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 FacadRecords Facad;
			 ofstream outfile;
			 string s;
			 ifstream infile;
			 char str[100];
			 msclr::interop::marshal_context context;
			 if(NameString==""||GenderString==""||DepartmentString==""||BirthMonthString==""||BirthMonthDateInt==0||BirthYearInt==0||PermanentAddressString==""||CityString==""||StateString==""||ContactNumberString==""||EmergencyContactNumberString==""||PasswordString==""||RepeatPasswordString=="")
			 MessageBox::Show("One/More entries not filled!","Error!");

			 else if(PasswordString != RepeatPasswordString)
				 MessageBox::Show("Repeated password does not match original password.","Error!");
			 else{
				 s = context.marshal_as<std::string>(NameString);
				 outfile.open("FacadNames.dat",ios::out|ios::app);
				 outfile<<s<<"\n";
				 outfile.close();
				 StringToChar(str,s);
				 Facad.GetName(str);
				 s = context.marshal_as<std::string>(GenderString);
				 StringToChar(str,s);
				 Facad.GetGender(str);
				 s = context.marshal_as<std::string>(DepartmentString);
				 StringToChar(str,s);
				 Facad.GetDepartment(str);
				 s = context.marshal_as<std::string>(BirthMonthString);
				 StringToChar(str,s);
				 Facad.GetBirthDate(BirthMonthDateInt,str,BirthYearInt);
				 s = context.marshal_as<std::string>(PermanentAddressString);
				 StringToChar(str,s);
				 Facad.GetAddress(str);
				 s = context.marshal_as<std::string>(CityString);
				 StringToChar(str,s);
				 Facad.GetCity(str);
				 s = context.marshal_as<std::string>(StateString);
				 StringToChar(str,s);
				 Facad.GetState(str);
				 s = context.marshal_as<std::string>(ContactNumberString);
				 StringToChar(str,s);
				 Facad.GetContactNumber(str);
				 s = context.marshal_as<std::string>(EmergencyContactNumberString);
				 StringToChar(str,s);
				 Facad.GetEmergencyContactNumber(str);
				 s = context.marshal_as<std::string>(PasswordString);
				 StringToChar(str,s);
				 Facad.GetPassword(str);
				 LoginIDFacad = GenerateLoginIDFacad();
				 Facad.GetLoginID(LoginIDFacad);

				 NameString="";
				 GenderString="";
				 DepartmentString="";
				 BirthMonthDateInt=0;
				 BirthMonthString="";
				 BirthYearInt=0;
				 PermanentAddressString="";
				 CityString="";
				 StateString="";
				 ContactNumberString="";
				 EmergencyContactNumberString="";
				 PasswordString="";
				 RepeatPasswordString="";
			 

				 outfile.open(Facad.ShowName(),ios::app|ios::out);
				 outfile.write((char*)&Facad,sizeof(FacadRecords));
				 outfile.close();

				 Form6^ form6 = gcnew Form6();
				 form6->LoginID = LoginIDFacad;
				 form6->Show();
			 }
		 }
private: int GenerateLoginIDFacad()
{
		ifstream infile;
		string s;
		infile.open("FacadNames.dat",ios::in); // open the file
		int n=0;

		while(infile.good())
		{
			getline(infile,s);
			n++;
		}
		infile.close();

		return n-1;
}
private: int GenerateLoginIDTeacher()
{
		ifstream infile;
		string s;
		infile.open("TeacherNames.dat",ios::in); // open the file
		int n=0;

		while(infile.good())
		{
			getline(infile,s);
			n++;
		}
		infile.close();

		return n-1;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form4::Close();
		 }
private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 NameString = textBox14->Text;
		 }
private: System::Void comboBox9_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			if(comboBox9->SelectedIndex==0) 
			GenderString = Convert::ToString("Male");
			else GenderString = Convert::ToString("Female");
		 }
private: System::Void comboBox10_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			BirthMonthDateInt = comboBox10->SelectedIndex+1;
		 }
private: System::Void comboBox8_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			BirthMonthString = Convert::ToString(comboBox8->Items[comboBox8->SelectedIndex]);
		 }
private: System::Void comboBox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			BirthYearInt = 2013 - comboBox7->SelectedIndex;
		 }
private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			PermanentAddressString = richTextBox2->Text;
		 }

private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			CityString = textBox11->Text;
		 }
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			ContactNumberString = textBox10->Text;
		 }
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			EmergencyContactNumberString = textBox9->Text;
		 }
private: System::Void Form4_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 PasswordString = textBox13->Text;
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 RepeatPasswordString = textBox2->Text;
		 }
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 PasswordString = textBox16->Text;
		 }
private: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 RepeatPasswordString = textBox15->Text;
		 }
private: System::Void comboBox11_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 DepartmentString = Convert::ToString(comboBox11->Items[comboBox11->SelectedIndex]);
		 }
private: System::Void comboBox12_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 DepartmentString = Convert::ToString(comboBox12->Items[comboBox12->SelectedIndex]);
		 }
private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 StateString = Convert::ToString(comboBox6->Items[comboBox6->SelectedIndex]);
		 }
};
}
