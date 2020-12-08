#pragma once
#include <Windows.h>
#include <iostream>
#include <string>
using namespace std; 

struct Student
{
	string name;
	string surname;
	string faculty;
	int group;
	string email;

	Student() {}

	Student(string name, string surname, string faculty, int group, string email) {
		this->name = name;
		this->surname = surname;
		this->faculty = faculty;
		this->group = group;
		this->email = email;
	}
};

struct Student_2
{
	string name_2;
	int group_2;
	string surname_2;
	string faculty_2;
	string email_2;

	Student_2() {}

	Student_2(string name_2, int group_2,  string surname_2, string faculty_2, string email_2) {
		this->name_2 = name_2;
		this->group_2 = group_2;
		this->surname_2 = surname_2;
		this->faculty_2 = faculty_2;
		this->email_2 = email_2;
	}
};
