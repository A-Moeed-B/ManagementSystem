#pragma once
#include <fstream>
#include "Person.h"
#include "Teacher.h"
#include "Student.h"
class Admin :public Person
{
	Teacher *teachers;
	Student *students;
	int studentSize;
	int teacherSize;
public:
	void setTeacher(Teacher teacher);
	void setStudent(Student student);
	void setSize_Students(int size);
	void setSize_Teachers(int size);
	Student *getStudents();
	Teacher *getTeachers();
	void updateTeacher();
	void setAdmin();
	string search();
	void searchTeacher();
	void searchStudent();
	void updateStudent();
	void delStudent();
	void delTeacher();
	void addStudent();
	void addTeacher();
	void writeData_teacher();
	void writeData_student();
	void readData_teacher();
	void readData_teacher();
	void addTeacher();
	void setSizes_file();
	void readSizes_file();
	void showDetails_teachers();
	void showDetails_students();
	void viewTimetable();
	void incrementSize_teachers();
	void incrementSize_students();
	Admin();
	virtual ~Admin();
	
};