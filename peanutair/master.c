#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "booking.h"


int no;
void master_schedule(); //������ ������ ����

void searchTotal();
char che; //����ó��

//������ �޴�
void menu_master() {
	printf("------������ �޴�------\n");
	printf("�� ������ ����Ʈ \n");
	printf("�� ������ ���� \n");
	printf("�� ���� \n");
	printf("-----------------------\n");
	printf("��ȣ �Է�: ");
	scanf("%d", &no);
	int a = 0;
	int b = 0;
	while (1) {
		if (no == 1) {
			searchTotal();
			scanf("%d", &a);
			if (a == 3) break;
		}
		else if (no == 2) {
			master_schedule();
			scanf("%d", &b);
			//while ((che = getchar()) != '\n') {}
			////getchar();
			if (b == 3) {
				break;
				while ((che = getchar()) != '\n') {}
			}
		}
		else if (no == 3) break;
	}
}


//������ ������ ����
void m_scheDule();

typedef struct {
	int nn;
	char set[50];
	char sCh[50];
} FLIGHT;

FLIGHT* ft = NULL;
char ch; //����ó��
int ccNt = 0; //������ ��� ��

void master_schedule() {
	FLIGHT fIt;
	printf("----------------\n");
	printf("  ������ ���   \n");
	printf("  ���� 0 �Է�   \n");
	printf("----------------\n");
	m_scheDule(); //������ ��� ������ ��ȸ
	while (1) {
		printf("��ȣ �Է� \n  => ");
		scanf("%d", &fIt.nn);
		while ((ch = getchar()) != '\n') {}
		if (fIt.nn == 0) break;
		printf("�뼱 �ѱ۸� & ������ �Է� \n  => ");
		gets_s(fIt.set, sizeof(fIt.set));
		printf("�װ���, �ð� �Է� \n => ");
		gets_s(fIt.sCh, sizeof(fIt.sCh));
		ccNt++; //������ �� +1
		ft = (FLIGHT*)realloc(ft, sizeof(FLIGHT)*ccNt); //���� �ø���
		//������ ����
		(ft + ccNt - 1)->nn = fIt.nn;
		strcpy((ft + ccNt - 1)->set, fIt.set);
		strcpy((ft + ccNt - 1)->sCh, fIt.sCh);
		printf("-----------------------\n");
		printf("��� �Ϸ�!\n");
		printf("-----------------------\n");
	}
}


//������ ��� ������ ��ȸ
void m_scheDule() {
	for (int i = 0; i < ccNt; i++) {
		printf("%d \n %s \n %s \n", (ft + i)->nn, (ft + i)->set, (ft + i)->sCh);
	}
	printf("-----------------------\n");
}