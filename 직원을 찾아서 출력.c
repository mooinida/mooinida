#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum a { a,b,c };
int main() {
	enum a A;
	int mine;
	while (1) {
		printf("가위 바위 보를 입력하시오: ");
		scanf("%d", &mine);
		A = rand() % 3;
		if (A == mine)printf("비겼습니다.");
		else if (A > mine)printf("졌습니다.");
		else if (A < mine)printf("이겼습니다.");
	}
}
