#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include "booking.h"

char ch;
void searchList();
void booking();
void scheDule();

int main() {
	while (1) {
		char num;
		printf("---------------------------------------\n");
		printf("PEANUTAIR December Booking Program v1.0\n");
		printf("---------------------------------------\n");
		printf("�� ���� (BOOKING)           \n");
		printf("�� ������ ��ȸ (FLIGHT SCHEDULE)   \n");
		printf("�� ���� ��ȸ (SEARCH RESERVATION)   \n");
		printf("�� ������ ���� (MASTER)      \n");
		printf("�� ����\n");
		printf("---------------------------------------\n");
		printf("��ȣ �Է�: ");
		scanf("%c", &num);
		while ((ch = getchar()) != '\n'){}
		if (num == '1') booking();
		else if (num == '2') scheDule();
		else if (num == '3') {
			searchList();
			printf("�����Է� \n");
			getchar();
		}
		else if (num == '4') menu_master();
		else if (num == 'q') break;
	}
}