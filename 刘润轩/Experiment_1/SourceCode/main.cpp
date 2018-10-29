// main.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"work.h"
#include<iostream>
#include<cstdio>
#include <fstream>
#include <sstream>
using namespace std;
work wo;
int cnt = 0;
int main()
{
	
	fstream readfile;
	readfile.open("成绩.txt");
	cout << "录入以下学号同学" << endl;
	while (readfile.peek()!=EOF)
	{
		
			readfile >> wo.stu[cnt].sid;
			cout << wo.stu[cnt].sid << endl;
			readfile >> wo.stu[cnt].name;
			readfile >> wo.stu[cnt].score[0];
			readfile >> wo.stu[cnt].score[1];
			readfile >> wo.stu[cnt].score[2];
			wo.stu[cnt].total = 0.2*wo.stu[cnt].score[0] + 
				0.2*wo.stu[cnt].score[1] + 0.6*wo.stu[cnt].score[2];
			cnt++;
	}
	cout << "文件读取成功" << endl;
	for (int i = 0; i < cnt; i++)
	{
		wo.stu[i].rank = 1;
		for (int j = 0; j < cnt; j++)
		{
			if (wo.stu[i].total < wo.stu[j].total)
			{
				wo.stu[i].rank++;
			}
		}
		cout << wo.stu[i].rank << endl;
	}
	cout << "排名计算输出成功" << endl;
	string str;
	cout << "请输入待查询学生学号：" << endl;
	cin >> str;
	cout << "输出格式:学号 姓名 平时成绩 实验成绩 期末成绩 总成绩 排名" << endl;
	for (int i = 0; i < cnt; i++)
	{
		if (wo.stu[i].sid == str)
		{
			cout << wo.stu[i].sid << " " << wo.stu[i].name << " ";
			for (int j = 0; j < 3; j++)
			{
				cout << wo.stu[i].score[j] << " ";
			}
			cout << wo.stu[i].total << " ";
			cout << wo.stu[i].rank << endl;
		}
	}
	double ar = 0;
	for (int i = 0; i < cnt; i++)
	{
		ar += wo.stu[i].total;
	}
	ar /= cnt;
	cout << "输出成绩均值: " << ar << endl;
	double var = 0;
	for (int i = 0; i < cnt; i++)
	{
		var += (wo.stu[i].total - ar)*(wo.stu[i].total - ar);
	}
	var /= cnt;
	cout << "输出成绩方差: " << var << endl;
	return 0;
}

