#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	FILE* in, * out;
	char a[100], b[100];
	printf("첫번쨰:");
	scanf("%s", a);
	printf("두번쨰:");
	scanf("%s", b);
	in = fopen(a, "r");
	out = fopen(b, "r");
	char str[10], str1[10];
	if (in == NULL || out == NULL) {
		printf("error");
		exit(1);
	}
	while (!feof(in)) {
		fgets(str, 10, in);
		fgets(str1, 10, out);
		if (strcmp(str, str1) != 0) {
			printf("%s\n%s", str, str1);
			exit(0);
		}
		printf("두파일은 같습니다.");

	}
}