#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	FILE* in,*out;
	char a[100];
	int i = 1;
	in = fopen("e.txt", "r");
	out = fopen("b.txt", "w");
	if (in == NULL) {
		printf("error");
		exit(1);
	}
	while (!feof(in)) {
		fgets(a,100,in );
		fprintf(out,"%d   %s", i, a);
		i++;
	}
	fclose(in);
}