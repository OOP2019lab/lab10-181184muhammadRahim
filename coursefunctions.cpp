#include"course.h"
#include"student.h"
bool course::courseexist(course a)
{
	if (a.courseno == courseno)
	{
		return false;
	}
	else
	{
		return true;
	}
}
void course::addStudent(student *a)
{
	if (ar1 == nullptr)
	{
		ar1 = new student*[5];
		ar1[0] = new student(*a);
		ar1[1] = nullptr;
	}
	else
	{
		int count = 0;
		for (int i = 0; ar1[i] != nullptr; i++)
		{
			count++;
		}
		if (count < 4)
		{
			bool found = false;
			for (int i = 0; ar1[i] != nullptr && found==false; i++)
			{
				if (a->studentexist(*ar1[i]) == false)
				{
					found = true;
				}
			}
			if (found == false)
			{
				ar1[count] = new student(*a);
				ar1[count + 1] = nullptr;
			}
			else if (found == true)
			{
				cout << "student already exist" << endl;
			}
		}
		if (count >= 4)
		{
			cout << "no further space in course" << endl;
		}
	}
}
course::course(string a, string b)
{
	this->coursename = a;
	this->courseno = b;
	this->ar1 = nullptr;

}
course::course(course &a)
{
	this->coursename = a.coursename;
	this->courseno = a.courseno;
	if (a.ar1 == nullptr)
	{
		ar1 = nullptr;
	}
	else
	{
		for (int i = 0; a.ar1[i] != nullptr; i++)
		{
			this->ar1[i] = a.ar1[i];
		}
	}
}
