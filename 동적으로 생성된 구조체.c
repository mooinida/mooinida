#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct rec {
	int i;
	float p;
	char A;
}my_record;
int main() {
	my_record *a;
	a = (my_record*)malloc(sizeof(my_record));
	a[0].i = 10;
	a[0].p = 3.14;
	a[0].A = 'a';
	printf("%d %f %c", a[0].i, a[0].p, a[0].A);
}