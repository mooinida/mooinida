#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct time {
	int h, m, s;

};
int main() {
	struct time start;
	struct time end;
	printf("���۽ð�");
	scanf("%d %d %d", start.h, start.m, start.s);
	printf("���۽ð�");
	scanf("%d %d %d", end.h, end.m, end.s);
	printf("�ҿ�ð� %d:%d:%d", start.h - end.h, start.m - end.m, start.s - end.s);
}