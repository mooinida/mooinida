#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum a { a,b,c };
int main() {
	enum a A;
	int mine;
	while (1) {
		printf("���� ���� ���� �Է��Ͻÿ�: ");
		scanf("%d", &mine);
		A = rand() % 3;
		if (A == mine)printf("�����ϴ�.");
		else if (A > mine)printf("�����ϴ�.");
		else if (A < mine)printf("�̰���ϴ�.");
	}
}
