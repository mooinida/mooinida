#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Product {
	int num;
	char *name;
	int cost;
};
void sale(struct Product *p, int percent) {
	p->cost -= p->cost * percent / 100;

}
void swap(struct Product* a, struct Product* b) {
	struct Product tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	struct Product mine;
	mine.num = 10;
	mine.name = "�ٺ��ٺ��ٺ�";
	mine.cost = 1000;
	struct Product your;
	your.num = 200;
	your.name = "õ��";
	your.cost = 20000;
	sale(&mine, 10);
	struct Product* ptr = &mine;
	swap(&mine, &your);
	printf("%d %s %d\n", mine.num, mine.name, mine.cost);
	printf("%d %s %d", ptr->num, ptr->name, ptr->cost);
}