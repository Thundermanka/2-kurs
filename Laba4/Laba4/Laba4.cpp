#include <stdio.h>
#include "Chislo.h"

int main() {
	setlocale(LC_ALL, "Russian");
	Chislo ch;
	//ch.isint();
	bool k = ch.ispalindrom();
	if (k == false) printf("не палиндром :(\n");
	else printf("палиндром :D\n");
	ch.eatpalindroms();
	ch*ch;
}
