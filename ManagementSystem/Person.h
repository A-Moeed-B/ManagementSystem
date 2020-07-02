#pragma once
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
	string username;
	string password;
	int section;
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
	
	Person(string name, int age, string fName, string cnic, string gender, string password, string username);
	
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
	void setUsername(string username);
	void setPassword(string password);
	void setSection(int section);
	string getName();
	string getFName();
	string getGender();
	string getUsername();
	string getPassword();
	int getAge();
	int getSection();
	void showData();
	void signIn();
	virtual void readData(ifstream &in)= 0;
	virtual void writeData(ofstream &out) = 0;
	virtual void input() = 0;
	void changePass();
};