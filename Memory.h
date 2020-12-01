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

