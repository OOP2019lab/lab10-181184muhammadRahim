#include<iostream>
using namespace std;
#include"course.h"
#include"student.h"
int main()
{
	student* A1=new student("S1", "Anum", "11-1351");
	student* A2 = new student("S2", "Sara", "12-6462");
	student* A3 = new student("S3", "Sana", "11-4531");
	student* A4 = new student("S4", "Zara", "12-4342");
	student* A5 = new student("S5", "Hira", "11-5940");
	course *C1=new course("OOP", "CS102");
	course *C2=new course("PF", "CS101");
	course *C3=new course("AI", "CS365");
	A1->addCourse(C1);
	A1->addCourse(C2);
	A1->addCourse(C2);
	A1->addCourse(C3);
	A2->addCourse(C2);
	A3->addCourse(C2);
	A4->addCourse(C2);
	A5->addCourse(C2);
	system("pause");
}