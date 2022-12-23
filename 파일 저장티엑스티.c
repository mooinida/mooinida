#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	FILE* in;
	in = fopen("ÇÇÀÚ.txt", "a");
	fprintf(in, "\n2017-03-21%d",20000);
	fclose(in);

}