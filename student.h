#include<iostream>
#include<string>
using namespace std;
class course;
#ifndef STUDENT_H
#define STUDENT_H
class student
{
public:
	void addCourse(course* a);
	bool studentexist(student a);
	student()
	{
		ar2 = nullptr;
	}
	student(string,string,string);
	student(student &a);
	friend ostream& operator<<(ostream& object, const student&a)
	{
		object << "student name="<<endl;
		object << a.name << endl;
		object << "student username=" << a.username << endl;
		object << "student rollno=" << a.rollno << endl;
		object << "courses:" << endl;
		for (int i = 0;a.ar2[i] != nullptr; i++)
		{
			object << a.ar2[i] << endl;
		}
		return object;
	}
private:
	course** ar2;
	string username;
	string name;
	string rollno;
};
#endif


