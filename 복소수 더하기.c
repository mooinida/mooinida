#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct prime {
	float a, b;
};
int main() {
	struct prime i[2];
	printf("ù��° ���Ҽ��� �Է��Ͻÿ�(a, b):");
	scanf("%f %f", &i[0].a, &i[0].b);
	printf("�ι�° ���Ҽ��� �Է��Ͻÿ�(a, b):");
	scanf("%f %f", &i[1].a, &i[1].b);
	printf("%.1f + %.1fi", i[0].a + i[1].a, i[0].b + i[1].b);
}