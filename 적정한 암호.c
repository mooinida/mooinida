#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char s[4] = "1234";
	char a[4];
	while (1) {
		printf("��й�ȣ�� �Է��Ͻÿ�: ");
		a = getch();
		for (int i = 0; i < strlen(s); i++) {
			putch('*');
		}
		if (strcmp(s, a) == 0) {
			printf("��й�ȣ ��ġ");
			return;
		}
		else printf("Ʋ�Ƚ��ϴ�.\n")

	}
}