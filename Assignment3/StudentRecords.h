#pragma once
#include "iostream"
#include "string"
#include "CourseDetails.h"
using namespace std; 
class StudentRecords
				{
				private:
					int BirthMonthDate;
					int BirthYear;
					int Credits;
					int LoginRollNumber;
					int SubjectStartNumber;
					int SubjectEndNumber;
					int CurrentSemester;
					int ElectivesNumber;
					int PossibleElectivesNumber;
					float CGPA;
					char Name[20];
					char Gender[7];
					char Department[100];
					char RollNo[10];
					char BirthMonth[15];
					char Address[100];
					char City[15];
					char State[20];
					char ContactNumber[15];
					char EmergencyContactNumber[15];
					char Password[15];
					CourseDetails RegisteredCourses[50];
					CourseDetails Electives[50];

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

					void GetRollNo(char* s)
						{
							strcpy_s(RollNo,s);
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
					void GetLoginRollNumber(int Roll)
						{
							LoginRollNumber = Roll;
						}
					void GetCurrentSemester(int Sem)
						{
							CurrentSemester = Sem;
						}
					void GetCGPA(float cg)
						{
							CGPA = cg;
						}
					void GetSubjectStartNumber(int start)
						{
							SubjectStartNumber = start;
						}
					void GetSubjectEndNumber(int end)
						{
							SubjectEndNumber = end;
						}
					void GetElectivesNumber(int NumElec)
						{
							ElectivesNumber = NumElec;
						}
					void AddToElectives(CourseDetails Course)
						{
							Electives[ElectivesNumber] = Course;
							ElectivesNumber++;
						}
					void AddToRegisteredCourses(CourseDetails Course)
						{
							RegisteredCourses[SubjectEndNumber] = Course;
							SubjectEndNumber++;
						}
					void GetPossibleElectivesNumber(int num)
						{
							PossibleElectivesNumber = num;
						}
					void ChangeGrade(int i,char* grade)
						{
							RegisteredCourses[i].ChangeGrade(grade);
							if(grade=="A"||grade=="B"||grade=="C"||grade=="D"||grade=="E"||grade=="P")
								Credits+=RegisteredCourses[i].GetCourseCredits();
						}
					void GetCredits(int cred)
						{
							Credits = cred;
						}
					CourseDetails ShowElective(int i)
						{
							return Electives[i];
						}
					char* ShowName()
						{
							return Name;
						}
					char* ShowPassword()
						{
							return Password;
						}
					char* ShowDepartment()
						{
							return Department;
						}
					int ShowCredits()
						{
							return Credits;
						}
					int ShowElectivesNumber()
						{
							return ElectivesNumber;
						}
					int ShowLoginRollNumber()
						{
							return LoginRollNumber;
						}
					
					int ShowSubjectStartNumber()
						{
							return SubjectStartNumber;					
						}
					int ShowSubjectEndNumber()
						{
							return SubjectEndNumber;
						}
					int ShowCurrentSemester()
						{
							return CurrentSemester;
						}
					int ShowPossibleElectivesNumber()
						{
							return PossibleElectivesNumber;
						}
					float ShowCGPA()
						{
							return CGPA;
						}
					CourseDetails ShowCourse(int i)
						{
							return RegisteredCourses[i];
						}
					StudentRecords(void)
						{
						}

					~StudentRecords(void)
						{
						}
};

