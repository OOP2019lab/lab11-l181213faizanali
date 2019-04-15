#include"l181213_person.h"
#include"l181213_Faculty.h"
#include"l181213Student.h"
#include<iostream>
using namespace std;
void main()
{
	Student s("Ted", "Thompson" ,22, 3.91);
	Faculty f("Richard", "Karp", 45,2,420);
	s.printStudent();
    f.printFaculty();

	system("pause");
	//return 0;
}