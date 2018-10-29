#include "example3_26_student.h"
Student::Student()
{
	name = NULL;
	age = 0;
}
Student::Student(char *na, char *id, char *num, char *spec, int ag)
{
	if (na)
	{
		name = new char[strlen(na) + 1];//����ǳ����
		strcpy(name, na);
	}
	strcpy(ID, id);
	strcpy(number, num);
	strcpy(specialty, spec);
	age = ag;
}
Student::Student(const Student &per)//�������캯��
{
	if (per.name)
	{
		name = new char[strlen(per.name) + 1];
		strcpy(name, per.name);
	}
	strcpy(ID, per.ID);
	strcpy(number, per.number);
	strcpy(specialty, per.specialty);
	age = per.age;
}
Student::~Student()//�۹�����
{
	if (name)
		delete []name;
}
	char* Student::GetName()//��ȡ����
	{
		return name;
	}
	char* Student::GetID()//��ȡ���֤
	{
		return ID;
	}
	int Student::GetAge()//��ȡ����
	{
		return age;
	}
	char* Student::GetSpec()//��ȡרҵ
	{
		return specialty;
	}
	char* Student::GetNumber()//��ȡѧ��
	{
		return number;
	}

	void Student::Display()//���������Ϣ
	{
		cout << "�� ����" << name << endl;
		cout << "���֤��" << ID << endl;
		cout << "ѧ �ţ�" << number << endl;
		cout << "ר ҵ��" << specialty << endl;
		cout << "�� �䣺" << age << endl << endl;
	}
	void Student::Input()//��������
	{
		char na[10];
		cout << "����������";
		cin >> na;
		if (name)
			delete[]name;
		name = new char[strlen(na) + 1];
		strcpy(name, na);
		cout << "�������֤��";
		cin >> ID;
		cout << "�������䣺";
		cin >> age;
		cout << "����רҵ��";
		cin >> specialty;
		cout << "����ѧ�ţ�";
		cin >> number;
	}













