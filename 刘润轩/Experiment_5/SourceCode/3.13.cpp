#include "string"
#include "iostream"
using namespace std;
#pragma warning(disable:4996)
class  Student
{
	char  *specialty;
public:
	 Student(const char *pSpec =0);//���캯������
	~ Student();
	void Show();
};

Student:: Student(const char *pSpec)//���캯���Ķ���
{
	if (pSpec)
	{
		specialty = new char[strlen(pSpec) + 1];
		strcpy(specialty, pSpec);
	}
	else
	{
		specialty = 0;
	}
}

 Student::~ Student()//��������ʵ��
{
	 if (specialty)
	 {
		 delete[]specialty;//specialty�Ĵ洢�ռ���new��������䣬����delete�ͷ�
	 }
}
 void Student::Show()
 {
	 cout << "specialty=" << specialty << '\n';
 }
 int main()
 {
	 Student zhang("computer");//������ͨ���캯��
	 Student wang(zhang);//����ϵͳ�ṩ��Ĭ�Ͽ������캯��
	 zhang.Show();
	 wang.Show();
	 system("pause");
	 return 0;

 }