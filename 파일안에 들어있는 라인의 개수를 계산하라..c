#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	FILE* in;
	char a[100];
	int count = 0;
	in = fopen("e.txt", "r");
	if (in == NULL) {
		printf("오류");
		exit(1);
	}
	while (!feof(in)) {
		fgets(a, 100, in);
		count++;
		printf("%s\n", a);
	}
	printf("라인의 개수:%d", count);
	fclose(in);
}