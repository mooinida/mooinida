#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
	union A {
		int stnum;
		int num;
	};
	char* name;
	int age;
};
int main() {
	struct student i[2] = {
		{0,"�Ւ�",25},
		{0,"�⼺",21}
	};
	i[0].stnum = 102020;
	i[1].num = 3123123;
	for (int j = 0; j < 2; j++) {
		printf("�̸�:%s ����:%d", i[j].name, i[j].age);
		printf("�й� �Ǵ� ������� : %d\n", i[j].num);
	}


}