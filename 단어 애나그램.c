#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SOL "apple"
int main(){
	char s[100] = SOL;
	char ans[100];
	int i, len;
	len = strlen(s);
	for (i = 0; i < len; i++) {
		int pos1 = rand() % len;
		int pos2 = rand() % len;
		char tmp = s[pos1];
		s[pos1] = s[pos2];
		s[pos2] = tmp;
	}
	while(strcmp(ans, SOL) != 0) {
		printf("%s�� ���� �ܾ ���纸�ÿ�. ", s);
		scanf("%s", ans);
		
	}
	printf("���߾�");
}