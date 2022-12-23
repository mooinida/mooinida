#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char s[4] = "1234";
	char a[4];
	while (1) {
		printf("비밀번호를 입력하시오: ");
		a = getch();
		for (int i = 0; i < strlen(s); i++) {
			putch('*');
		}
		if (strcmp(s, a) == 0) {
			printf("비밀번호 일치");
			return;
		}
		else printf("틀렸습니다.\n")

	}
}