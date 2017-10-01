// Win32Project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
#include<sstream>
using namespace std;

int is_number(string);
void zerofac (int, int);
void onefac (int, int);
void twofac (int, int);
void threefac (int, int);
void fourfac(int, int);
void fivefac(int, int);
double anyfac(double);

int main()
{
	string a;
	double ti = 0;
	int c = 0;
	zerofac(0, 1);
	onefac(1, 1);
	twofac(2, 2);
	threefac(3, 6);
	fourfac(4, 24);
	fivefac(5, 120);

	cout << "\n All abobe are true which means the formula is right\n u can use the calculator\n\n";

	while (1)
	{

		f:
		getline(cin,a);
		
		c = is_number(a);
		if (c == 2)
		{
			cout << a << " is wrong input plz try again\n";
			goto f;
		}

		ti = atoi(a.c_str());

		ti = anyfac(ti);
		cout << a<<"! = " << ti << endl;
		
	}
	return 0;
}
int is_number( string s) {
	for (int i = 0; i < s.size(); i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
		{
			return 2;
		}
	}
			return 5;
}

void zerofac(int a, int b) {
	int ans;
	if (a == 0)
	{
		ans = 1;
	}

	if (ans == b)
	{
		cout << " 0! = 1 true\n";
	}
	else
		cout << "false\n";
}

void onefac(int a, int b) {
	int ans;
	if (a == 1)ans = 1;

	if (ans == b)
	{
		cout << " 1! = 1 true\n";
	}
	else
		cout << "false\n";
}

void twofac(int a, int b) {
	int ans;
	if (a == 2)ans = 2 * 1;

	if (ans == b)
	{
		cout << " 2! = 2 true\n";
	}
	else
		cout << "false\n";
}

void threefac(int a, int b) {
	int ans;
	if (a == 3)ans = 3 * 2 * 1;

	if (ans == b)
	{
		cout << " 3! = 6 true\n";
	}
	else
		cout << "false\n";
}

void fourfac(int a, int b) {
	int ans;
	if (a == 4)ans = 4 * 3 * 2 * 1;

	if (ans == b)
	{
		cout << " 4! = 24 true\n";
	}
	else
		cout << "false\n";
}

void fivefac(int a, int b) {
	int ans;
	if (a == 5)ans = 5 * 4 * 3 * 2 * 1;

	if (ans == b)
	{
		cout << " 5! = 120 true\n";
	}
	else
		cout << "false\n";
}

double anyfac(double a)
{
	double ans = 1;
	for (int i = 1; i <= a; i++)
	{
		ans = ans*i;
	}

	return ans;
}