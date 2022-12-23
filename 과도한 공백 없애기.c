#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char a[100];
	
	printf("텍스트를 입력하시오: ");
	gets(a);
	printf("공백이 제거된 텍스트를 입력하시오: ");
	for (int i = 0; i < strlen(a); i++) {
		if  (!(a[i] == ' ' && a[i + 1] == ' ')) {
			printf("%c", a[i]);
		}
		
	}
	
}