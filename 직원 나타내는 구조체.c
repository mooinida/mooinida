#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 10
struct employee {
	int num;
	char name[20];
	
	int age;
};
int main() {
	struct employee A[N];
	char name[20];
	

	for (int i = 0; i < N; i++) {
		scanf("%s %d", name,  &A[i].age);
		strcpy(A[i].name, name);
		A[i].num = i + 1;
	}
	for (int i = 0; i < N; i++) {
		if (A[i].age >= 20 && A[i].age <= 30)printf("%s\n", A[i].name);
	}
}