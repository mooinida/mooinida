#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char a[20];
	char b[26] = { 0, };
	printf("입력 문자열: ");
	scanf("%s", a);
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < strlen(a); j++) {
			if (i+97 == a[j])b[i]++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (b[i])printf("%c문자가 %d 번 등장하였음\n", i + 97, b[i]);
		}
	}
