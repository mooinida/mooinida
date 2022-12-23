#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct prime {
	float a, b;
};
int main() {
	struct prime i[2];
	printf("첫번째 복소수를 입력하시오(a, b):");
	scanf("%f %f", &i[0].a, &i[0].b);
	printf("두번째 복소수를 입력하시오(a, b):");
	scanf("%f %f", &i[1].a, &i[1].b);
	printf("%.1f + %.1fi", i[0].a + i[1].a, i[0].b + i[1].b);
}