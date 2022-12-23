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
	printf("도형의 타입을 입력하시오(0, 1, 2): ");
	scanf("%d", &B.type);
	if (B.type == thr) {
		printf("밑면과 높이를 입력하시오:");
		scanf("%d %d", &B.tri.height, &B.tri.down);
		printf("넓이 : %d", B.tri.height * B.tri.down);
	}
	else if (B.type == four) {
		printf("가로와 세로를 입력하시오:");
		scanf("%d %d", &B.nemo.garo, &B.nemo.sero);
		printf("넓이 : %d", B.nemo.garo* B.nemo.sero);
	}
	else if (B.type == zero) {
		printf("반지름을 입력하시오:");
		scanf("%d", &B.circle.r);
		printf("넓이 : %d", B.circle.r* B.circle.r);
	}

}