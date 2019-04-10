#include"student.h"
#include"course.h"
void student::addCourse(course* a)
{
	if (ar2 == nullptr)
	{
		ar2 = new course*[3];
		ar2[0] = new course(*a);
		a->ar1 = new student*[5];
		a->ar1[0] = new student(*this);
		a->ar1[1] = nullptr;
		a->addStudent(*a->ar1);
		ar2[1] = nullptr;
	}
	else
	{
		int count = 0;
		for (int i = 0; ar2[i] != nullptr; i++)
		{
			count++;
		}
		if (count < 2)
		{
			if (a->courseexist(*ar2[0])==1)
			{
				ar2[1] = new course(*a);
				a->addStudent(*a->ar1);
				ar2[2] = nullptr;
			}
			else
			{
				cout << "course already exist" << endl;
			}
		}
		if (count>= 2)
		{
			cout << "no further space in course" << endl;
		}
	}

}
bool student::studentexist(student a)
{
	if (a.rollno == rollno)
	{
		return false;
	}
	else
	{
		return true;
	}
}
student::student(string username1, string name1,string rollno1)
{
	this->username=username1;
	this->name=name1;
	this->rollno = rollno1;

}
student::student(student&a)
{
	this->name = a.name;
	this->rollno = a.rollno;
	this->username = a.username;
	int count = 0;
	a.ar2 = new course*[5];
	for (int i = 0; a.ar2[i] != nullptr; i++)
	{
		ar2[i] = new course(*a.ar2[i]);
	}
}
 