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
	in = fopen("데이터.txt", "w");
	if (in == NULL) {
		printf("틀렸습니다 시 발롬의 새기야");
		exit(0);
	}
	do{
		printf("학번 : ");
		scanf("%d", &number);
		printf("이름 : ");
		scanf("%s", name);
		printf("성적 : ");
		scanf("%d", &score);

		fprintf(in, "%d %s %d", number, name, score);
		printf("계속 할거니? ");
		ch=getch();
	} while (ch != 'n');
}