#include"l181213_person.h"
#include"l181213_Faculty.h"
#include"l181213Student.h"
#include<iostream>
using namespace std;
Faculty::Faculty()
{
cout<<"FAculty()  was invoked"<<endl;
}
Faculty::~Faculty()
{
cout<<"~Faculty was invoked"<<endl;
}
int Faculty::getcourse_count()
{
	return course_count;
}
	int Faculty::getTelephone_no()
	{
		return telephone_no;
	}
	void Faculty::setTelephone_no(int tel)
	{
		telephone_no=tel;
	}

	void Faculty::setcourse_count(int cour)
	{
		course_count=cour;
	}
	Faculty::Faculty(string fname,string lname,int a,int course,int tel):Person(fname,lname,a)
	{
		course_count=course;
		telephone_no=tel;
	}
	void Faculty:: printFaculty() 
	{
		cout<<"FAculty member name:"<<getfirstname()<<" "<<getlastname()<<",Age:"<<age<<",Number of courses:"<<course_count<<",Ext."<<telephone_no;
	}