#include"l181213_person.h"
#include"l181213_Faculty.h"
#include"l181213Student.h"
#include<iostream>
using namespace std;
Student::Student()
{
cout<<"Student() was invoked"<<endl;
}
Student::Student(string fname,string lname,int a,float gpa):Person( fname,lname, a)
{
	cgpa=gpa;
}
Student::~Student()
{
cout<<"~Student() was invoked"<<endl;
}
 void Student::printStudent()
 {
	 cout<<getfirstname()<<" "<<getlastname()<<" "<<"is "<<age<<"year old,his cgpa is"<<cgpa<<endl;
 }