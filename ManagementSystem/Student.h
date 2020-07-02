#pragma once
#include <string>
#include <fstream>
#include "Person.h"
using namespace std;
class Student : public Person
{
	int marks;
	int studentNo;
public:
	void setMarks(int marks);
	void setNo(int studentNo);
	void setSection(int section);
	int getMarks();
	int getNo();
	int getSection();
	void showDetails();
	void showTimetable();
	Student();
	void input();
};