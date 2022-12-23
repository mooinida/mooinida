#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	FILE* in;
	char name[10];
	int age, money;
	printf("직원이름:");
	scanf("%s", name);
	printf("나이:");
	scanf("%d", &age);
	printf("월급:");
	scanf("%d", &money);
	in = fopen("e.txt", "r");
	fprintf(in, "직원이름: %s\n 나이: %d\n 월급: %d", name, age, money);
	fclose(in);


}