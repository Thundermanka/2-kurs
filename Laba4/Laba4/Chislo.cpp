#define _CRT_SECURE_NO_WARNINGS
#include "Chislo.h"
Chislo::Chislo(){
	printf("������� �����, �������� 20 ��������:\n");
	scanf("%s", a);
}
void Chislo :: isint() {
	int b = atoi(a);
	printf("���� �����: %d\n", b);
	printf("���� � ���� ����� �� ������ ��� ��� ���, ��� ������, ��� �� ������� ����� ��� ����. �������, �� ���� ���\n");
	//printf("��������, �������� ���� ��������� �������� � �� ����� ���, �� ��������� ������ ���������, ������� �������� ����� �� ����� �����");
}
bool Chislo::ispalindrom() {
	int n = strlen(a);
	bool k = true;
	for (int i = 0; i < n / 2 ; i++) {
		if (a[i] != a[n - 1 - i]) k = false;
	}
	printf("\n \n");
	return k;
}
int Chislo::reverseint(int tmp) {
	int p = 0;
	while (tmp)
	{
		p = 10 * p + tmp % 10;
		tmp /= 10;
	}
	return p;
}
void Chislo::eatpalindroms() {
	printf("� ������� �� ��� ������ ����� �����, � � ����� ����� �� ��� ���������: \n");
	printf("����� ��������� ������� ������� '0' - ����\n");
	int s = 1;
	dm = 0;
	while (s != 0) {
		printf("\n");
		scanf("%d", &inter[dm]);
		s = inter[dm];
		dm++;
	}
	int counter = 0;
	for (int j = 2; j < dm - 1; j += 2) {
		int tmp = this->inter[j];
		tmp = this->inter[j];
		int p = reverseint(tmp);
		if (tmp == p) counter++;
	}
	printf("���������� ����������� �� ������ ������: %d\n", counter);
}
void Chislo :: operator*(Chislo ch) {
	int min1 = inter[0], min2 = inter[0], p = 0, tmp;
	for (int i = 0; i < dm; i++) {
		tmp = inter[i];
		p = reverseint(tmp);
		if (tmp == p) {
			if (tmp < min1 and tmp != 0) min1 = tmp;
		}
	}
	for (int i = 0; i < dm; i++) {
		tmp = inter[i];
		p = reverseint(tmp);
		if (tmp == p) {
			if (tmp < min2 and tmp != min1 and tmp != 0) min2 = tmp;
		}
	}
	printf("����������� ����������: %d %d", min1, min2);
}
