#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
enum a{ c=0, r=1, h=2};
int main() {
	srand(time(0));
	enum a a;
	printf("가위, 바위, 보를 입력하시오: ");
	
	int com = rand() % 3;
	scanf("%d", &a);
	
	if (a == com)printf("무승부");
	else if (a > com)printf("나 승");
	else printf("컴터 승");
}