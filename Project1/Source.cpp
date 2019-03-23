// работа со строкой  и с числами
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	int num = 345, n;
	char *a, *b, *e;
	n = 200;
	a = (char*)malloc(n * sizeof(char));
	b = (char*)malloc(n * sizeof(char));
	//strset(b, (int)'\0');

	cin>>a;
	//cin>>a;

	//поиск всех лексем
	char *p;
	int ch;

	p = strtok(a, " ");

	if (p) {
		ch = strtol(p, &e, 10);
		if (!*e) strcpy(b, p);
	}

	do {
		p = strtok('\0', " ");
		//ch=atoi(p);// отбрасывает буквы
		if (p) {
			ch = strtol(p, &e, 10);
			//ch=atoi(p);// отбрасывает буквы
			if (!(*e) && ch<num)
			{
				strcat(b, " ");
				strcat(b, p);
			}
		}
	} while (p);

	printf("%s", b);

	free(a);
	free(b);
	return 0;
}