#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	FILE* in;
	char name[10];
	int age, money;
	printf("�����̸�:");
	scanf("%s", name);
	printf("����:");
	scanf("%d", &age);
	printf("����:");
	scanf("%d", &money);
	in = fopen("e.txt", "r");
	fprintf(in, "�����̸�: %s\n ����: %d\n ����: %d", name, age, money);
	fclose(in);


}