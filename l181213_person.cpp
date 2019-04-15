#include"l181213_person.h"
#include"l181213_Faculty.h"
#include"l181213Student.h"
#include<iostream>
using namespace std;

Person::Person()
{
	cout<<"person() was invoked"<<endl;

}
Person::Person(string fname,string lname,int a)
{
	first_name=fname;
	last_name=lname;
	age=a;
	cout<<"Person(string,string,int) was invoked"<<endl;
}
Person::~Person()
{
cout<<"~Person() was invoked"<<endl;
}
	string Person::getfirstname()
	{
		return first_name;
	}
	void Person::settfirstname(string Fname)
	{
		first_name=Fname;
	}
	string Person::getlastname()
	{
		return last_name;
	}
    void Person::setlastname(string Lname)
	{
		last_name=Lname;
	}
	void Person:: printInformation()
	{
		cout<<first_name<<" "<<last_name<<"is"<<age<<"old";
	}