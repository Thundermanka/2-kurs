#pragma once
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <Windows.h>
#include <locale>
class Chislo
{
private:
	char a[20];
	int inter[20];
	int dm;
public:
	Chislo();
	void isint();
	bool ispalindrom();
	int reverseint(int);
	void eatpalindroms();
	void operator*(Chislo ch);
};

