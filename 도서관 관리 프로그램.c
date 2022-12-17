#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 5
#define NAME 10
typedef struct Book {
	int bookno;
	char* author;
	char* title;
}Book;
int main() {
	Book* library[N];//포인터로 받아준다.
	int n;//switch 문에서 쓸 변수
	int i = 0;//while 문에서 써줄 변수 5가 계속 1씩 늘어나서 5가 되는 순간 while문이 멈춘다
	int num;//library[j]->bookno과 비교해줄 변수
	char auth[10];//library[j]->author과 비교해줄 문자열
	char tit[10];//library[j]->title과 비교해줄 문자열
	while (1) {//계속 돌아가게 만들고 어느 지점에서 멈추게 한다
		library[i] = (Book*)malloc(sizeof(Book));//struct library에 동적할당
		if (i == N)return;//i가 N과 같은 수, 5가 되었을 떄 while문을 멈춘다.
		printf("=================================\n");
		printf("1.도서 번호로 책 찾기\n");
		printf("2.저자 이름으로 책 찾기\n");
		printf("3.제목으로 책 찾기\n");
		printf("4.새로운 책추기\n");
		printf("5.도서관이 소장한 도서의 수 표시\n");
		printf("=================================\n");
		printf("번호를 입력하시오:");
		scanf("%d", &n);//1 2 3 4 5 중에 한 번호를 입력한다.

		switch (n) {//switch 문
		case 1://case1 에서는 도서번호를 입력해서 받는다
			if (i > 0) {//i가 0보다 커야 등록된 책이 있다.
				library[i] = (Book*)malloc(sizeof(Book));
				printf("도서번호를 입력하시오:");
				scanf("%d", &num);//n에 숫자를 입력한다

				for (int j = 0; j < i; j++) {
					if (num== library[j]->bookno) {//num과 library[j]->bookno이 같을 떄 까지 for문을 돌려서 같은 순간의 모든 struct book의 정보를 출력한다.
						printf("도서 번호: %d\n", library[j]->bookno);
						printf("저자 이름: %s\n", library[j]->author);
						printf("제목: %s\n", library[j]->title);
					}
				}
				continue;//while 문의 처음으로 돌아간다.

			}
			else {
				printf("등록된 책이 없습니다. 4번을 눌러 책을 등록하세요\n");//i가 0보다 크지 않을때에는 입력된 책이 없음.
				continue;//while 문의 처음으로 돌아간다.
			}
		case 2:
			if (i > 0) {
				library[i] = (Book*)malloc(sizeof(Book));
				printf("저자 이름을 입력하시오:");
				scanf("%s", auth);//gets나 gets_s함수를 쓰면 입력이 되지 않는 오류가 생김 뒤에 getch()를 써줘도 입력이 안됨
				
			
				for (int j = 0; j < i; j++) {
					if (strcmp(auth, library[j]->author) == 0) {//auth과 library[j]->author이 같을 떄 까지 for문을 돌려서 같은 순간의 모든 struct book의 정보를 출력한다.
						printf("도서 번호: %d\n", library[j]->bookno);
						printf("저자 이름: %s\n", library[j]->author);
						printf("제목: %s\n", library[j]->title);
					}
				}
				continue;//while 문의 처음으로 돌아간다.

			}
			else {
				printf("등록된 책이 없습니다. 4번을 눌러 책을 등록하세요\n");//i가 0보다 크지 않을때에는 입력된 책이 없음.
				continue;//while 문의 처음으로 돌아간다.
			}
		case 3:
			if (i > 0) {
				library[i] = (Book*)malloc(sizeof(Book));
				printf("제목을 입력하시오:");
				scanf("%s", tit);//gets나 gets_s함수를 쓰면 입력이 되지 않는 오류가 생김 뒤에 getch()를 써줘도 입력이 안됨
				
				for (int j = 0; j < i; j++) {
					if (strcmp(tit, library[j]->title) == 0) {//tit과 library[j]->title이 같을 떄 까지 for문을 돌려서 같은 순간의 모든 struct book의 정보를 출력한다.
						printf("도서 번호: %d\n", library[j]->bookno);
						printf("저자 이름: %s\n", library[j]->author);
						printf("제목: %s\n", library[j]->title);
					}
				}
				continue;//while 문의 처음으로 돌아간다.
			}
			else {
				printf("등록된 책이 없습니다. 4번을 눌러 책을 등록하세요\n");//i가 0보다 크지 않을때에는 입력된 책이 없음.
				continue;//while 문의 처음으로 돌아간다.
			}
		case 4:
			library[i] = (Book*)malloc(sizeof(Book));
			library[i]->bookno = (int*)malloc(sizeof(int));//동적할당
			library[i]->author = (char*)malloc(sizeof(char) * NAME);//배열이기떄문에 NAME의 크기만큼 동적할당
			library[i]->title = (char*)malloc(sizeof(char) * NAME);//배열이기떄문에 NAME의 크기만큼 동적할당
			printf("도서 번호를 입력하시오: ");
			scanf("%d", &library[i]->bookno);

			printf("저자 이름을 입력하시오: ");
			scanf("%s",library[i]->author);//gets나 gets_s함수를 쓰면 입력이 되지 않는 오류가 생김 뒤에 getch()를 써줘도 입력이 안됨
				
			
			getch();//while문의 오류를 방지
			
			printf("제목을 입력하시오 : ");
			scanf("%s", library[i]->title);//gets나 gets_s함수를 쓰면 입력이 되지 않는 오류가 생김 뒤에 getch()를 써줘도 입력이 안됨
				

			getch();//while문의 오류를 방지
			i++;//책을 입력받으면 i를 1씩 늘려준다
			continue;
		case 5:
			printf("도서관이 소장한 책의 수 : %d권\n", i);//늘어난 i를 출력한다. 한권도 없으면 0권
		}


	}
}