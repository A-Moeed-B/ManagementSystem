#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class  Person
{
protected:
	string name;
	int age;
	string fName;
	string cnic;
	string gender;
	string id;
	string password;
	bool signIn;
public:
	Person();
	
		/*name = "N/A";
		fName = "N/A";
		age = 0;
		cnic = "N/A";
		gender = "N/A";
		id = "N/A";
		password = "N/A";*/
	
	Person(string name, int age, string fName, string cnic, string gender, string password, string id);
	
		/*this->name = name;
		this->age = age;
		this->fName = fName;
		this->cnic = cnic;
		this->gender = gender;
		this->password = password;
		this->signIn = signIn;*/
	
	void setName(string name);
	
	void setAge(int age);
	void setCnic(string cnic);
	void setFname(string fName);
	void setGender(string gender);
	void setId(string id);
	void setPassword(string password);
	string getName();
	string getFName();
	string getGender();
	string getID();
	string getPassword();
	string getAge();
	void showData();
	virtual void signIn() = 0;
	void changePass();
};