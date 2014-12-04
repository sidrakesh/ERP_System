#pragma once
#include "StudentRecords.h"
#include "CourseDetails.h"
#include "Form3.h"
#include "msclr/marshal.h"
#include "msclr/marshal_cppstd.h"
#include "string"
#include "fstream"
using namespace std;
namespace Assignment3 {
	using namespace std;
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
		
	public:
		
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	
	private: System::Windows::Forms::TextBox^  textBox1;



	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  RegisterButton;
	private: System::Windows::Forms::Button^  BackButton;
	private: System::Windows::Forms::Label^  label11;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	public:
		int LoginRollNumber;
	private:
		//my variables
		System::String^ NameString;
		System::String^ GenderString;
		System::String^ AddressString;
		System::String^ RollNumberString;
		int BirthMonthDateInt;
		int BirthYearInt;
		int CurrentSemester;
		System::String^ BirthMonthString;
		System::String^ PermanentAddressString;
		System::String^ ContactNumberString;
		System::String^ EmergencyContactNumberString;
		System::String^ CityString;
		System::String^ StateString;
		System::String^ DepartmentString;
		System::String^ PasswordString;
		System::String^ RepeatPasswordString;
		
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::ComboBox^  comboBox1;
			 
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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Fill in the following entries:";
			this->label1->Click += gcnew System::EventHandler(this, &Form2::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Name:";
			this->label2->Click += gcnew System::EventHandler(this, &Form2::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Roll No.:";
			this->label3->Click += gcnew System::EventHandler(this, &Form2::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(60, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Permanent Address:";
			this->label4->Click += gcnew System::EventHandler(this, &Form2::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(60, 322);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"City:";
			this->label5->Click += gcnew System::EventHandler(this, &Form2::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(60, 351);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"State:";
			this->label6->Click += gcnew System::EventHandler(this, &Form2::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(60, 388);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 13);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Contact Number:";
			this->label7->Click += gcnew System::EventHandler(this, &Form2::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(60, 422);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(143, 13);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Emergency Contact Number:";
			this->label8->Click += gcnew System::EventHandler(this, &Form2::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(59, 182);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Birthdate:";
			this->label9->Click += gcnew System::EventHandler(this, &Form2::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(58, 96);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Gender:";
			this->label10->Click += gcnew System::EventHandler(this, &Form2::label10_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(168, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form2::textBox1_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(31) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", 
				L"27", L"28", L"29", L"30", L"31"});
			this->comboBox1->Location = System::Drawing::Point(168, 179);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(51, 21);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox1_SelectedIndexChanged_1);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Male", L"Female"});
			this->comboBox2->Location = System::Drawing::Point(168, 93);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(76, 21);
			this->comboBox2->TabIndex = 2;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox2_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"January", L"February", L"March", L"April", L"May", 
				L"June", L"July", L"August", L"September", L"October", L"November", L"December"});
			this->comboBox3->Location = System::Drawing::Point(225, 179);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(91, 21);
			this->comboBox3->TabIndex = 6;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox3_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(34) {L"2013", L"2012", L"2011", L"2010", L"2009", L"2008", 
				L"2007", L"2006", L"2005", L"2004", L"2003", L"2002", L"2001", L"2000", L"1999", L"1998", L"1997", L"1996", L"1995", L"1994", 
				L"1993", L"1992", L"1991", L"1990", L"1989", L"1988", L"1987", L"1986", L"1985", L"1984", L"1983", L"1982", L"1981", L"1980"});
			this->comboBox4->Location = System::Drawing::Point(322, 179);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(75, 21);
			this->comboBox4->TabIndex = 7;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox4_SelectedIndexChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(161, 210);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(0, 20);
			this->textBox3->TabIndex = 25;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form2::textBox3_TextChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(167, 209);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(212, 98);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form2::richTextBox1_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(167, 319);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form2::textBox4_TextChanged);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(35) {L"Andra Pradesh", L"Arunachal Pradesh", L"Assam", 
				L"Bihar", L"Chhattisgarh", L"Goa", L"Gujarat", L"Haryana", L"Himachal Pradesh", L"Jammu and Kashmir", L"Jharkhand", L"Karnataka", 
				L"Kerala", L"Madya Pradesh", L"Maharashtra", L"Manipur", L"Meghalaya", L"Mizoram", L"Nagaland", L"Odisha", L"Punjab", L"Rajasthan", 
				L"Sikkim", L"Tamil Nadu", L"Tripura", L"Uttarakhand", L"Uttar Pradesh", L"West Bengal", L"Andaman and Nicobar Islands", L"Chandigarh", 
				L"Dadar and Nagar Haveli", L"Daman and Diu", L"Delhi", L"Lakshadeep", L"Pondicherry"});
			this->comboBox5->Location = System::Drawing::Point(167, 348);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(115, 21);
			this->comboBox5->TabIndex = 10;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox5_SelectedIndexChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(167, 385);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(132, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form2::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(231, 419);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(123, 20);
			this->textBox6->TabIndex = 12;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form2::textBox6_TextChanged);
			// 
			// RegisterButton
			// 
			this->RegisterButton->Location = System::Drawing::Point(61, 534);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(122, 32);
			this->RegisterButton->TabIndex = 15;
			this->RegisterButton->Text = L"Register";
			this->RegisterButton->UseVisualStyleBackColor = true;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &Form2::RegisterButton_Click);
			// 
			// BackButton
			// 
			this->BackButton->Location = System::Drawing::Point(247, 534);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(123, 32);
			this->BackButton->TabIndex = 16;
			this->BackButton->Text = L"Back";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &Form2::BackButton_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(200, 422);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(25, 13);
			this->label11->TabIndex = 30;
			this->label11->Text = L"+91";
			this->label11->Click += gcnew System::EventHandler(this, &Form2::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(58, 70);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 13);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Department:";
			this->label12->Click += gcnew System::EventHandler(this, &Form2::label12_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 120);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(123, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form2::textBox2_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(59, 459);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 13);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Password: ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(60, 492);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(97, 13);
			this->label14->TabIndex = 32;
			this->label14->Text = L"Repeat Password: ";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(167, 456);
			this->textBox8->Name = L"textBox8";
			this->textBox8->PasswordChar = '*';
			this->textBox8->Size = System::Drawing::Size(134, 20);
			this->textBox8->TabIndex = 13;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form2::textBox8_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(167, 489);
			this->textBox10->Name = L"textBox10";
			this->textBox10->PasswordChar = '*';
			this->textBox10->Size = System::Drawing::Size(134, 20);
			this->textBox10->TabIndex = 14;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Form2::textBox10_TextChanged);
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(34) {L"Aerospace Engineering", L"Agricultural & Food Engineering", 
				L"Architecture & Regional Planning", L"Biotechnology", L"Center for Educational Technology", L"Chemical Engineering", L"Chemistry", 
				L"Civil Engineering", L"Computer Science & Engineering", L"Cryogenic Engineering", L"Electrical Engineering", L"Electronics & Electrical Communication Engineering", 
				L"G S Sanyal School of Telecommunications", L"Geology & Geophysics", L"Humanities & Social Sciences", L"Industrial Engineering & Management", 
				L"Information Technology", L"Materials Science", L"Mathematics", L"Mechanical Engineering", L"Medical Science & Technology", 
				L"Metallurgical & Materials Engineering", L"Mining Engineering", L"Ocean Engineering & Naval Architecture", L"Oceans, Rivers, Atmosphere and Land Sciences", 
				L"Physics & Meteorology", L"Rajendra Mishra School of Engineering Entrepreneurship", L"Rajiv Gandhi School of Intellectual Property Law", 
				L"Ranbir and Chitra Gupta School of Infrastructure Design and Management", L"Reliability Engineering Centre", L"Rubber Technology Centre", 
				L"Rural Development Centre", L"School of Water Resources", L"Vinod Gupta School of Management"});
			this->comboBox6->Location = System::Drawing::Point(168, 66);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(229, 21);
			this->comboBox6->TabIndex = 1;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox6_SelectedIndexChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(168, 149);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 4;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form2::textBox7_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(59, 152);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 13);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Current semester : ";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(432, 587);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->RegisterButton);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form2";
			this->Text = L"Student Registration";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
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
private: System::Void BackButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form2::Close();
		 }
private: void StringToChar(char* str,string s)
		 {
		 int i;
		 for(i=0;i < (int)s.length();i++)
			 str[i] = s[i];
		 str[i]='\0';
		 }
private: System::Void RegisterButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 StudentRecords Student;
			 ofstream outfile;
			 string s;
			 char str[100];
			 msclr::interop::marshal_context context;
			 if(NameString==""||GenderString==""||DepartmentString==""||RollNumberString==""||BirthMonthString==""||BirthMonthDateInt==0||BirthYearInt==0||PermanentAddressString==""||CityString==""||StateString==""||ContactNumberString==""||EmergencyContactNumberString==""||PasswordString==""||RepeatPasswordString=="")
				 MessageBox::Show("One/More entries not yet filled!","Error");
			 else if(PasswordString!=RepeatPasswordString)
				 MessageBox::Show("Repeated password does not match the original password","Error");
			 
			 else{
				 s = context.marshal_as<std::string>(NameString);
				 outfile.open("StudentNames.dat",ios::app|ios::out);
				 outfile<<s<<"\n";
				 outfile.close();
				 StringToChar(str,s);
				 Student.GetName(str);
				 s = context.marshal_as<std::string>(GenderString);
				 StringToChar(str,s);
				 Student.GetGender(str);
				 s = context.marshal_as<std::string>(DepartmentString);
				 StringToChar(str,s);
				 Student.GetDepartment(str);
				 s = context.marshal_as<std::string>(RollNumberString);
				 StringToChar(str,s);
				 Student.GetRollNo(str);
				 s = context.marshal_as<std::string>(BirthMonthString);
				 StringToChar(str,s);
				 Student.GetBirthDate(BirthMonthDateInt,str,BirthYearInt);
				 s = context.marshal_as<std::string>(PermanentAddressString);
				 StringToChar(str,s);
				 Student.GetAddress(str);
				 s = context.marshal_as<std::string>(CityString);
				 StringToChar(str,s);
				 Student.GetCity(str);
				 s = context.marshal_as<std::string>(StateString);
				 StringToChar(str,s);
				 Student.GetState(str);
				 s = context.marshal_as<std::string>(ContactNumberString);
				 StringToChar(str,s);
				 Student.GetContactNumber(str);
				 s = context.marshal_as<std::string>(EmergencyContactNumberString);
				 StringToChar(str,s);
				 Student.GetEmergencyContactNumber(str);
				 s = context.marshal_as<std::string>(PasswordString);
				 StringToChar(str,s);
				 Student.GetPassword(str);
			
				 Student.GetCurrentSemester(CurrentSemester);
				 Student.GetCGPA(0);
				 Student.GetCredits(0);
				 Student.GetSubjectStartNumber(0);
				 Student.GetSubjectEndNumber(0);
				 Student.GetElectivesNumber(0);
				 LoginRollNumber = GenerateRollNumber();
				 Student.GetLoginRollNumber(LoginRollNumber);

				 outfile.open(Student.ShowName(),ios::out|ios::app);
				 outfile.write((char*)&Student,sizeof(StudentRecords));
				 outfile.close();
				
				 Form3^ form3 = gcnew Form3();
				 form3->LoginRollNumber = LoginRollNumber;
				 form3->Show();

				 Form2::Close();
			 }
		 }
private: int GenerateRollNumber()
{
		ifstream infile;
		string s;
		infile.open("StudentNames.dat",ios::in); // open the file
		int n = 0;
		
		while(infile.good())
		{
			getline(infile,s);
			n++;
		}

		infile.close();
				
		return n-1;
			
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			NameString = textBox1->Text;
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			if(comboBox2->SelectedIndex==0) 
			GenderString = Convert::ToString("Male");
			else GenderString = Convert::ToString("Female");
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			RollNumberString = textBox2->Text;
		 }
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
			BirthMonthDateInt = comboBox1->SelectedIndex+1;
		 }
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 EmergencyContactNumberString = textBox6->Text;
		 }
private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 PasswordString = textBox8->Text;
		 }
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 RepeatPasswordString = textBox10->Text;
		 }
private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 DepartmentString = Convert::ToString(comboBox6->Items[comboBox6->SelectedIndex]);
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int test;
			 if(Int32::TryParse(textBox7->Text,test))
				 CurrentSemester = test;
			 else 
			 {
				MessageBox::Show("Invalid Entry!","Error");
				CurrentSemester = -9999;
			 }
		 }
};
}

