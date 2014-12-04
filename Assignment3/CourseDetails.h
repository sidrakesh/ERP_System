#pragma once
#include "string"
using namespace std;
class CourseDetails
{
private:
	int CourseSemester;
	int CourseCredits;
	char CourseName[50];
	char CourseCode[10];
	char CourseType[10];
	char CourseTeacher[20];
	char CourseGrade[2];
	char CourseDepartment[100];
	
public:
	void SetCourseName(char* s)
	{
		strcpy_s(CourseName,s);
	}

	void SetCourseCredits(int Credits)
	{
		CourseCredits = Credits;
	}

	void SetCourseDepartment(char* s)
	{
		strcpy_s(CourseDepartment,s);
	}

	void SetCourseCode(char* s)
	{
		strcpy_s(CourseCode,s);
	}

	void SetCourseSemester(int sem)
	{
		CourseSemester = sem;
	}

	void SetCourseType(char* s)
	{
		strcpy_s(CourseType,s);
	}

	void SetCourseGrade(char* s)
	{
		strcpy_s(CourseGrade,s);
	}

	void SetCourseTeacher(char* s)
	{
		strcpy_s(CourseTeacher,s);
	}

	void ChangeGrade(char* s)
	{
		strcpy_s(CourseGrade,s);
	}

	char* GetCourseName()
	{
		return CourseName;
	}

	char* GetCourseCode()
	{
		return CourseCode;
	}

	char* GetCourseDepartment()
	{
		return CourseDepartment;
	}

	char* GetCourseType()
	{
		return CourseType;
	}

	char* GetCourseTeacher()
	{
		return CourseTeacher;
	}
	
	char* GetCourseGrade()
	{
		return CourseGrade;
	}

	int GetCourseCredits()
	{
		return CourseCredits;
	}

	int GetCourseSemester()
	{
		return CourseSemester;
	}


	CourseDetails(void)
	{
	}

	virtual ~CourseDetails(void)
	{
	}
};

