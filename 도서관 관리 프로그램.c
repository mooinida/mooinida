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
	Book* library[N];//�����ͷ� �޾��ش�.
	int n;//switch ������ �� ����
	int i = 0;//while ������ ���� ���� 5�� ��� 1�� �þ�� 5�� �Ǵ� ���� while���� �����
	int num;//library[j]->bookno�� ������ ����
	char auth[10];//library[j]->author�� ������ ���ڿ�
	char tit[10];//library[j]->title�� ������ ���ڿ�
	while (1) {//��� ���ư��� ����� ��� �������� ���߰� �Ѵ�
		library[i] = (Book*)malloc(sizeof(Book));//struct library�� �����Ҵ�
		if (i == N)return;//i�� N�� ���� ��, 5�� �Ǿ��� �� while���� �����.
		printf("=================================\n");
		printf("1.���� ��ȣ�� å ã��\n");
		printf("2.���� �̸����� å ã��\n");
		printf("3.�������� å ã��\n");
		printf("4.���ο� å�߱�\n");
		printf("5.�������� ������ ������ �� ǥ��\n");
		printf("=================================\n");
		printf("��ȣ�� �Է��Ͻÿ�:");
		scanf("%d", &n);//1 2 3 4 5 �߿� �� ��ȣ�� �Է��Ѵ�.

		switch (n) {//switch ��
		case 1://case1 ������ ������ȣ�� �Է��ؼ� �޴´�
			if (i > 0) {//i�� 0���� Ŀ�� ��ϵ� å�� �ִ�.
				library[i] = (Book*)malloc(sizeof(Book));
				printf("������ȣ�� �Է��Ͻÿ�:");
				scanf("%d", &num);//n�� ���ڸ� �Է��Ѵ�

				for (int j = 0; j < i; j++) {
					if (num== library[j]->bookno) {//num�� library[j]->bookno�� ���� �� ���� for���� ������ ���� ������ ��� struct book�� ������ ����Ѵ�.
						printf("���� ��ȣ: %d\n", library[j]->bookno);
						printf("���� �̸�: %s\n", library[j]->author);
						printf("����: %s\n", library[j]->title);
					}
				}
				continue;//while ���� ó������ ���ư���.

			}
			else {
				printf("��ϵ� å�� �����ϴ�. 4���� ���� å�� ����ϼ���\n");//i�� 0���� ũ�� ���������� �Էµ� å�� ����.
				continue;//while ���� ó������ ���ư���.
			}
		case 2:
			if (i > 0) {
				library[i] = (Book*)malloc(sizeof(Book));
				printf("���� �̸��� �Է��Ͻÿ�:");
				scanf("%s", auth);//gets�� gets_s�Լ��� ���� �Է��� ���� �ʴ� ������ ���� �ڿ� getch()�� ���൵ �Է��� �ȵ�
				
			
				for (int j = 0; j < i; j++) {
					if (strcmp(auth, library[j]->author) == 0) {//auth�� library[j]->author�� ���� �� ���� for���� ������ ���� ������ ��� struct book�� ������ ����Ѵ�.
						printf("���� ��ȣ: %d\n", library[j]->bookno);
						printf("���� �̸�: %s\n", library[j]->author);
						printf("����: %s\n", library[j]->title);
					}
				}
				continue;//while ���� ó������ ���ư���.

			}
			else {
				printf("��ϵ� å�� �����ϴ�. 4���� ���� å�� ����ϼ���\n");//i�� 0���� ũ�� ���������� �Էµ� å�� ����.
				continue;//while ���� ó������ ���ư���.
			}
		case 3:
			if (i > 0) {
				library[i] = (Book*)malloc(sizeof(Book));
				printf("������ �Է��Ͻÿ�:");
				scanf("%s", tit);//gets�� gets_s�Լ��� ���� �Է��� ���� �ʴ� ������ ���� �ڿ� getch()�� ���൵ �Է��� �ȵ�
				
				for (int j = 0; j < i; j++) {
					if (strcmp(tit, library[j]->title) == 0) {//tit�� library[j]->title�� ���� �� ���� for���� ������ ���� ������ ��� struct book�� ������ ����Ѵ�.
						printf("���� ��ȣ: %d\n", library[j]->bookno);
						printf("���� �̸�: %s\n", library[j]->author);
						printf("����: %s\n", library[j]->title);
					}
				}
				continue;//while ���� ó������ ���ư���.
			}
			else {
				printf("��ϵ� å�� �����ϴ�. 4���� ���� å�� ����ϼ���\n");//i�� 0���� ũ�� ���������� �Էµ� å�� ����.
				continue;//while ���� ó������ ���ư���.
			}
		case 4:
			library[i] = (Book*)malloc(sizeof(Book));
			library[i]->bookno = (int*)malloc(sizeof(int));//�����Ҵ�
			library[i]->author = (char*)malloc(sizeof(char) * NAME);//�迭�̱⋚���� NAME�� ũ�⸸ŭ �����Ҵ�
			library[i]->title = (char*)malloc(sizeof(char) * NAME);//�迭�̱⋚���� NAME�� ũ�⸸ŭ �����Ҵ�
			printf("���� ��ȣ�� �Է��Ͻÿ�: ");
			scanf("%d", &library[i]->bookno);

			printf("���� �̸��� �Է��Ͻÿ�: ");
			scanf("%s",library[i]->author);//gets�� gets_s�Լ��� ���� �Է��� ���� �ʴ� ������ ���� �ڿ� getch()�� ���൵ �Է��� �ȵ�
				
			
			getch();//while���� ������ ����
			
			printf("������ �Է��Ͻÿ� : ");
			scanf("%s", library[i]->title);//gets�� gets_s�Լ��� ���� �Է��� ���� �ʴ� ������ ���� �ڿ� getch()�� ���൵ �Է��� �ȵ�
				

			getch();//while���� ������ ����
			i++;//å�� �Է¹����� i�� 1�� �÷��ش�
			continue;
		case 5:
			printf("�������� ������ å�� �� : %d��\n", i);//�þ i�� ����Ѵ�. �ѱǵ� ������ 0��
		}


	}
}