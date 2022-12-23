#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {	
	FILE* in, * out;
	int i = 0;
	float n;
	in = fopen("a.bin", "wb");
	out = fopen("e.txt", "w");
	if (in == NULL) {
		printf("¿À·ù");
		exit(1);
	}
	for (int i = 0; i < 100; i++) {
		n = (rand() % 1000) / 10;
		fprintf(in, "%.1f ",n);
		fprintf(out, "%.1f ", n);

	}
	fclose(in);
	fclose(out);

}