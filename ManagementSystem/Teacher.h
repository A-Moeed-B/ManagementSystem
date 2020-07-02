#pragma once
#include <string>
#include "Person.h"
using namespace std;
class Teacher :public Person
{
	string qualification;
	string experience;
	int salary;
	int id;
public:
	void setQual(string qualification);
	void setSalary(int salary);
	void setId(int id);
	void setExp(string experience);
	string getQual();
	string getExp();
	int getSalary();
	int getId();
	void setTimetable();
	Teacher();

};