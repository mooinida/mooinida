#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
enum a{ c=0, r=1, h=2};
int main() {
	srand(time(0));
	enum a a;
	printf("����, ����, ���� �Է��Ͻÿ�: ");
	
	int com = rand() % 3;
	scanf("%d", &a);
	
	if (a == com)printf("���º�");
	else if (a > com)printf("�� ��");
	else printf("���� ��");
}