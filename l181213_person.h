#include<iostream>
#include<string>
using namespace std;
#pragma once
class Person
{
private:
	string first_name;
	string last_name;
protected:
	int age;
public:
	Person::Person();
	Person::~Person();
	Person::Person(string fname,string lname,int a);
	string Person::getfirstname();
	void Person::settfirstname(string Fname);
	string Person::getlastname();
    void Person::setlastname(string Lname);
	void printInformation();

};