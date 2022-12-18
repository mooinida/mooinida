#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct time{
	int h,m,s;
	
};
int main() {
	struct time a;
	struct time b;
	printf("시작시간(시, 분, 초):");
	scanf("%d %d %d", &a.h, &a.m, &a.s);
	printf("종료시간(시, 분, 초):");
	scanf("%d %d %d", &b.h, &b.m, &b.s);
	printf("소요시간 %d:%d:%d", b.h - a.h, b.m - a.m, b.s - a.s);
}