#include<iostream>
#include"l181213_person.h"
using namespace std;
#pragma once
class Faculty:private Person
{
private:
	int course_count;
	int telephone_no;
public:
	Faculty::Faculty();
	Faculty::~Faculty();
	Faculty::Faculty(string fname,string lname,int a,int course,int tel);
	int Faculty::getcourse_count();
	int Faculty::getTelephone_no();
	void Faculty::setTelephone_no(int tel);
	void Faculty::setcourse_count(int cour);
	 void printFaculty() ;
};