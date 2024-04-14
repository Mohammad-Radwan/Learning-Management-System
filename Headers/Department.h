#pragma once
#include<iostream>
#include <vector>
#include "Instructor.h"
#include "Dean.h"
using namespace std;


class Department
{
private:
	string Name;
	vector <string> Majors;
	vector <Instructor> Staff;
	string Dean_Name;
public:
	void setDean(Dean);
	void setName(string);
	void addMajor(string);
	void addToStuff(Instructor);
	void display();
};

