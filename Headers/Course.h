#pragma once
#include <iostream>
#include "Instructor.h"
class Course
{
private:
	string Title;
	string instructor;
	vector<string> Code;
	vector<string> Prerequisete;
	int CreditHours;
	int Section;
	string TimeSlot;
	string Day;
	string Place;
public:
	void setTitle(string);
	void setInstructor(string);
	void setCode(vector <string>);
    void CreditHours(int CreditHours, vector<string> Code);
    void Course::setPrerequisete(vector<string>prerequisetes,vector<string> Code);
    void setCreditHours(int);
	void setSection(int);
	void setPlace(string);
	void setTime(string);
	void setDay(string);
	string getTitle();
	Instructor getInstructor();
	string getCode();
	string getPrerequisete();
	int getCreditHours();
	int getSection();
	string getTime();
	string getDay();
	void display();
	void Delete();
};
