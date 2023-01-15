#pragma once
#include <iostream>
#include <string.h>
#include <windows.h>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include <io.h>
#include <vector>
#include <algorithm>
using namespace std;
enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};
void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
#include <stdio.h>
/*0 � ������
1 � �����
2 � �������
3 � �������
4 � �������
5 � �������
6 � ������
7 � �����
8 � �����
9 � ����� - �����
A � ������ - �������
B � ������ - �������
� � ������ - �������
E � ������ - ������
F � ���� - �����
system("color F0");*/  // ��������� ������ ���� � ������� ������
class Student
{
public:
	string Fname, Lname;
	int age;
	Student() {};
	Student(string _Fname)
	{
		cout << _Fname << endl;
	}
	Student(string name, int year)
	{
		cout << name << " " << year << endl;
	}
	void undergraduate()
	{
		vector <Student> students
		{
			Student("anton"),
			Student("alisa"),
			Student("kirill"),
		};
		int result = count_if(students.begin(), students.end(), students.front());
		SetColor(2, 0);
		cout << result << endl;
	}
	void years()
	{
		vector <Student> ages
		{
			Student("anton", 25),
			Student("alisa", 20),
			Student("kirill", 23),
		};
		int effect = count_if(ages.begin(), ages.end(), ages.front());
		SetColor(3, 0);
		cout << effect << endl;
	}
};