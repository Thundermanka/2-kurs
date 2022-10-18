#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
struct pokemon
{
	int numberl;
	char name[20];
	char gen[4];
	char type1[20];
	char type2[20];
	int hp;
	int atk;
};
void vivodMenu(int*);
void vvodEmptyBase(struct pokemon[50], int*, int*);
void vivodBase(struct pokemon[50], int*);
void addNewLine(struct pokemon[50], int*);
void search(struct pokemon[50], int*);
int main() {
	int ErrorCode = -1;
	int lines, num = 0;
	struct pokemon pokeinfo[50];
	while (1) {
		vivodMenu(&num);
		switch (num) {
		case 1: {
			vvodEmptyBase(pokeinfo, &lines, &ErrorCode);
			printf("pika pika:3\n");
			break;
		}
		case 2: {
			if (ErrorCode != 0) printf("pikapusto :(\n");
			else vivodBase(pokeinfo, &lines);
			break;
		}
		case 3: {
			if (ErrorCode != 0) printf("create databse, before adding new line. it's not pika pika,bro \n");
			else {
				addNewLine(pokeinfo, &lines);
				printf("new PikaLine created!\n");
			}
			break;
		}
		case 4: {
			search(pokeinfo, &lines);
			break;
		}
		case 5: {
			exit(1);
			break;
		}
		default: break;
		}
	}
}
void vivodMenu(int* number) {
	printf("Welcome to pokemon database\n");
	printf("Please, input menu number\n");
	printf("1. Fill an empty database\n");
	printf("2. Output on display\n");
	printf("3. Add one line\n");
	printf("4. Single coloumn search\n");
	printf("5. exit\n");
	scanf("%d", number);
}
void vvodEmptyBase(struct pokemon pokeinfo[50], int* lines, int* ErrorCode) {
	int i = 0;
	printf("vvedite kol-vo strok: \n");
	scanf("%d", lines);
	while (i < *lines) {
		printf("pokeline: %d \n", i + 1);
		pokeinfo[i].numberl = i + 1;
		printf("name: \n");
		scanf("%s", pokeinfo[i].name);
		printf("gen: \n");
		scanf("%s", pokeinfo[i].gen);
		printf("type1: \n");
		scanf("%s", pokeinfo[i].type1);
		printf("type2: \n");
		scanf("%s", pokeinfo[i].type2);
		printf("heal points: \n");
		scanf("%d", &pokeinfo[i].hp);
		printf("damage: \n");
		scanf("%d", &pokeinfo[i].atk);
		i++;
	}
	*ErrorCode = 0;
}
void vivodBase(struct pokemon pokeinfo[50], int* lines) {
	int i = 0;
	while (i < *lines) {
		printf("%d %s %s %s %s %d %d\n", pokeinfo[i].numberl, pokeinfo[i].name, pokeinfo[i].gen, pokeinfo[i].type1, pokeinfo[i].type2, pokeinfo[i].hp, pokeinfo[i].atk);
		i++;
	}
}
void addNewLine(struct pokemon pokeinfo[50], int* lines) {
	int i = *lines + 1;
	printf("input your pikaline! \n");
	pokeinfo[i].numberl = i + 1;
	printf("name: \n");
	scanf("%s", pokeinfo[i].name);
	printf("gen: \n");
	scanf("%s", pokeinfo[i].gen);
	printf("type1: \n");
	scanf("%s", pokeinfo[i].type1);
	printf("type2: \n");
	scanf("%s", pokeinfo[i].type2);
	printf("heal points: \n");
	scanf("%d", &pokeinfo[i].hp);
	printf("damage: \n");
	scanf("%d", &pokeinfo[i].atk);
}
/*void search(struct pokemon pokeinfo[50], int* lines) {
	printf("find your Pokemooon!\n");
	char poke[20];
	scanf("%s", poke);
	for (int i = 0; i < *lines; i++) {
		if (pokeinfo[i].name == poke) {
			printf("your pokemon is here: %d %s %s %s %s %d %d\n", pokeinfo[i].numberl, pokeinfo[i].name, pokeinfo[i].gen, pokeinfo[i].type1, pokeinfo[i].type2, pokeinfo[i].hp, pokeinfo[i].atk);
		}
	}
}*/
void search(pokemon pokeinfo[50], int* lines) {
	char s[20];
	printf("What breed do you want to search?\n");
	scanf("%s", s);
	int i = 0;
	int j;
	while (i < *lines) {
		j = 0;
		while (pokeinfo[i].name[j] != '\0') {
			if (pokeinfo[i].name[j] == s[j]) {
				j++;
			}
			j++;
		}
		if(s[j] == '\0'){
			printf("%d %s %s %s %s %d %d\n", pokeinfo[i].numberl, pokeinfo[i].name, pokeinfo[i].gen, pokeinfo[i].type1, pokeinfo[i].type2, pokeinfo[i].hp, pokeinfo[i].atk);
		}
		i++;
	}
}
