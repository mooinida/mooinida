#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	FILE* in;
	int number;
	char name[30];
	int score;
	char ch;
	in = fopen("������.txt", "w");
	if (in == NULL) {
		printf("Ʋ�Ƚ��ϴ� �� �߷��� �����");
		exit(0);
	}
	do{
		printf("�й� : ");
		scanf("%d", &number);
		printf("�̸� : ");
		scanf("%s", name);
		printf("���� : ");
		scanf("%d", &score);

		fprintf(in, "%d %s %d", number, name, score);
		printf("��� �ҰŴ�? ");
		ch=getch();
	} while (ch != 'n');
}