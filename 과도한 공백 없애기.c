#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char a[100];
	
	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets(a);
	printf("������ ���ŵ� �ؽ�Ʈ�� �Է��Ͻÿ�: ");
	for (int i = 0; i < strlen(a); i++) {
		if  (!(a[i] == ' ' && a[i + 1] == ' ')) {
			printf("%c", a[i]);
		}
		
	}
	
}