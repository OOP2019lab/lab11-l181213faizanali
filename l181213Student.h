#include<iostream>
#include<string>
#include"l181213_person.h"
using namespace std;
#pragma once
class Student :private Person
{
private:
	string FYP_name;
	float cgpa;
public:
	Student::Student();
	Student::~Student();
	Student::Student(string fname,string lname,int age,float gpa);
	void Student::setcgpa();
float Student::getcgpa();
 void printStudent();
};