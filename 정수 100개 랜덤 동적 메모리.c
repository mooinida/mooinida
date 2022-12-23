#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int* a;
	int n;
	int sum = 0;
	a = (int*)malloc(sizeof(int) * 100);
	for (int i = 0; i < 100; i++) {
		a[i] = rand() % 100;
		sum += a[i];
	}
	printf("ЦђБе=%d", sum / 100);
}