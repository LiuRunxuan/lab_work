﻿#include <iostream>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
public:
	static int total;
	Student() { total++; }
	~Student() { total--; }
	Student(int n,const char *p = "Wang");
	void GetName();
	int Getnum();
 
};
 
//int Student::total;
Student::Student(int n,const char *p)
{
	num = n;
	strcpy(name, p);
	total++;
}
 
void Student::GetName()
{
	cout << name << endl;
}
 
int Student::Getnum()
{
	return num;
}
 
int main()
{
	cout << "The number of all sutdents:" << Student::total << endl;
	Student *p = new Student(13);
	cout << "The number of all sutdents:" << Student::total << endl;
	cout << "The number of all sutdents:" << p->total << endl;
	delete p;
	cout << "The number of all sutdents:" << Student::total << endl;
	Student s[2];
	cout << "The number of all sutdents:" << s[0].total << endl;
	cout << "The number of all sutdents:" << s[1].total << endl;
	system("pause");
	return 0;
}
