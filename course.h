#pragma once
#include<iostream>
using namespace std;
class student;
#ifndef COURSE_H
#define COURSE_H
#include<string>
class course
{
	friend ostream& operator<<(ostream&object, const course&a)
	{
		object << "course name=" << a.coursename << endl;
		object << "course no=" << a.courseno << endl;
	}
private:
	student **ar1;
	string coursename;
	string courseno;
	void addStudent(student *a);

public:
	course()
	{
		ar1 = nullptr;
	}
	bool courseexist(course a);
	course(string,string);
	course(course& a);
	friend class student;
};
#endif