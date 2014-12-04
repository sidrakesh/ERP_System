#pragma once
#include "iostream"
#include "string"
#include "cstdlib"
using namespace std;
class TeacherRecords
				{
				private:
					char Name[100];
					char Gender[100];
					char Department[100];
					int BirthMonthDate;
					char BirthMonth[100];
					int BirthYear;
					int LoginID;
					char Address[100];
					char City[100];
					char State[100];
					char ContactNumber[100];
					char EmergencyContactNumber[100];
					char Password[100];
				public:

					void GetName(char* s)
						{
							strcpy_s(Name,s);
						}

					void GetGender(char* s)
						{
							strcpy_s(Gender,s);
						}

					void GetDepartment(char* s)
						{
							strcpy_s(Department,s);
						}

					void GetBirthDate(int dd,char* month,int year)
						{
							BirthMonthDate = dd;
							strcpy_s(BirthMonth,month);
							BirthYear = year;
						}

					void GetAddress(char* s)
						{
							strcpy_s(Address,s);
						}

					void GetCity(char* s)
						{
							strcpy_s(City,s);
						}

					void GetState(char* s)
						{
							strcpy_s(State,s);
						}

					void GetContactNumber(char* s)
						{
							strcpy_s(ContactNumber,s);
						}

					void GetEmergencyContactNumber(char* s)
						{
							strcpy_s(EmergencyContactNumber,s);
						}
					void GetPassword(char* s)
						{
							strcpy_s(Password,s);
						}
					void GetLoginID(int ID)
						{
							LoginID = ID;
						}
					int ShowLoginID()
						{
							return LoginID;
						}
					char* ShowPassword()
						{
							return Password;
						}
					char* ShowDepartment()
						{
							return Department;
						}
					char* ShowName()
						{
							return Name;
						}
					TeacherRecords(void)
						{
						}

					~TeacherRecords(void)
						{
						}
};

