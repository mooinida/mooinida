#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum Do{ thr,four,zero };
typedef struct {
	union {
		struct {
			int down, height;
		}tri;
		struct {
			int garo, sero;
		}nemo;
		struct {
			int r;
		}circle;
	};
	int type;
}shape;
int main() {
	enum Do a;
	shape B;
	printf("������ Ÿ���� �Է��Ͻÿ�(0, 1, 2): ");
	scanf("%d", &B.type);
	if (B.type == thr) {
		printf("�ظ�� ���̸� �Է��Ͻÿ�:");
		scanf("%d %d", &B.tri.height, &B.tri.down);
		printf("���� : %d", B.tri.height * B.tri.down);
	}
	else if (B.type == four) {
		printf("���ο� ���θ� �Է��Ͻÿ�:");
		scanf("%d %d", &B.nemo.garo, &B.nemo.sero);
		printf("���� : %d", B.nemo.garo* B.nemo.sero);
	}
	else if (B.type == zero) {
		printf("�������� �Է��Ͻÿ�:");
		scanf("%d", &B.circle.r);
		printf("���� : %d", B.circle.r* B.circle.r);
	}

}