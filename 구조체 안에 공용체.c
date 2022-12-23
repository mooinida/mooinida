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
		{0,"손믠",25},
		{0,"믠성",21}
	};
	i[0].stnum = 102020;
	i[1].num = 3123123;
	for (int j = 0; j < 2; j++) {
		printf("이름:%s 나이:%d", i[j].name, i[j].age);
		printf("학번 또는 생년월일 : %d\n", i[j].num);
	}


}