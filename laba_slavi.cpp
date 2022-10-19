#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
struct hookah {

	char name[20];
	char manufacturer;
	float weight;
	float price;
	float phone;
};
void vivodMenu();
int vvodBAse(struct hookah[20], int);
int addnewline(struct hookah[20], int)
int search(struct hookah[20], int);



int main() {
	int lines, num = 0;
	struct hookah hookahinfo[20];
	while (1) {
		vivodMenu();
		printf("viberite comandy iz menu \n");
		scanf("%d", &num);
		switch (num) {
		case 1: {
			lines=vvodBase(hookahinfo, lines);
			system("pause");
			system("cls");
			break;
		}
		case 2: {
			lines = vvodBase(hookahinfo, lines);
			system("pause");
			system("cls");
			break;
		}case 3: {
			lines = addnewline(hookahinfo, lines);
			system("pause");
			system("cls");
			break;
		}case 4: {
			lines = search(hookahinfo, lines);
			system("pause");
			system("cls");
			break;
		}
		case 5: {
			exit(1);
			break;
		}
		default: 
			break;
		}
	}

}
void vivodMenu(int* number) {
	printf("Welcome to hookah database\n");
	printf("Please, input menu number\n");
	printf(1. "fill an empty database\n");
	printf(2. "output on display\n");
	printf(3. "add new lines\n");
	printf(4. "single column search\n");
	printf(5. "exit\n");
	scanf("%d", number);

}


void vvodBAse(struct hookah hookahinfo[20], int lines) {
	int i;
	printf("scolko strok vi hotite vvesti\n");
	scanf("d", &i);
	while (lines < i) {
		printf("vvedite %d stroky: \n", lines + 1);
		printf("vvedite nazvanie:    ");
		scanf("&s", hookahinfo[20].name);
		printf("vvedite proizvoditel9:    ");
		scanf("&s", hookahinfo[20].manufacturer);
		printf("vvedite ves:    ");
		scanf("&fl", hookahinfo[20].weight);
		printf("vvedite price:    ");
		scanf("&fl", hookahinfo[20].price);
		printf("vvedite phone:    ");
		scanf("&d", hookahinfo[20].phone);

		lines++;

	}
	return lines;
