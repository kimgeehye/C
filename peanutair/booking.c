#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int fsNo; //�뼱����
	char korName[30]; //������ �ѱ۸�
	char engName[30]; //������ ������
	int birTh; //�������
	char mNum[10]; //������ ���ǹ�ȣ
	int exDate; //���Ǹ�����
	int pNum; //�ڵ�����ȣ
} BNUM;

void searchList(); //������ȸ
void searchTotal(); //������ ������ ��ȸ

char ch;
int cCnt = 0;
BNUM* pb = NULL;

//����
void booking() {
	BNUM booK;
	printf("--------BOOKING--------\n");
	printf("     �� ICN - TPE      \n");
	printf("     �� ICN - KUL      \n");
	printf("     �� ICN - SIN      \n");
	printf("-----------------------\n");
	printf("     (���� 0 �Է�)     \n");
	searchList();
	while(1){
		printf("�뼱���� : ");
		scanf("%d", &booK.fsNo);
		while ((ch=getchar()) != '\n') {}
		if (booK.fsNo == 0) break;
		printf("�ѱ۸� �Է� : ");
		scanf("%s", &booK.korName);
		printf("������ �Է� : ");
		scanf("%s", &booK.engName);
		while ((ch = getchar()) != '\n') {}
		printf("�������(8�ڸ�) �Է� : ");
		scanf("%d", &booK.birTh);
		while ((ch = getchar()) != '\n') {}
		printf("���ǹ�ȣ �Է� : ");
		gets_s(booK.mNum, sizeof(booK.mNum));
		printf("���Ǹ����� �Է� : ");
		scanf("%d", &booK.exDate);
		printf("�ڵ�����ȣ �Է� : ");
		scanf("%d", &booK.pNum);
		cCnt++;
		pb = (BNUM*)realloc(pb, sizeof(BNUM)*cCnt);
		(pb + cCnt - 1)->fsNo = booK.fsNo;
		strcpy((pb + cCnt - 1)->korName, booK.korName);
		strcpy((pb + cCnt - 1)->engName, booK.engName);
		(pb + cCnt - 1)->birTh = booK.birTh;
		strcpy((pb + cCnt - 1)->mNum, booK.mNum);
		(pb + cCnt - 1)->exDate = booK.exDate;
		(pb + cCnt - 1)->pNum = booK.pNum;
		printf("-----------------------\n");
		printf("���� �Ϸ�! \n���� Ȯ���� ���� �ȳ� �帮�ڽ��ϴ�:) \n");
		printf("\n���� Ȯ�� �� ����� Ƽ���� �帱 �� ������ \nȮ�� �� ��� 14�� �� īī�������� ���� ���� �帮�ڽ��ϴ�. \n");

		printf("-----------------------\n");
	}
}
//������ȸ
int chkPh;
void searchList() {
	for (int i = 0; i < cCnt; i++) {
		printf("---------------------------------------\n");
		printf("�£ϣϣˣɣΣ� ���� ����   \n");
		printf("�ڵ�����ȣ �Է� : ");
		scanf("%d", &chkPh);
		if (chkPh == pb->pNum) {
			printf("�뼱 : %d\n�ѱ۸� : %s\n������ : %s\n", (pb + i)->fsNo, (pb + i)->korName, (pb + i)->engName);
			printf("������� : %d \n���ǹ�ȣ : %s\n", (pb + i)->birTh, (pb + i)->mNum);
			printf("���Ǹ����� : %d\n�ڵ�����ȣ : %d\n", (pb + i)->exDate, (pb + i)->pNum);
			getchar();
		}
		else printf("\n�߸� �Է��ϼ̽��ϴ�\n");
	}
	printf("---------------------------------------\n");
}

void searchTotal() {
		for (int i = 0; i < cCnt; i++) {
			printf("---------------------------------------\n");
			printf("�뼱 : %d\n�ѱ۸� : %s\n������ : %s\n", (pb + i)->fsNo, (pb + i)->korName, (pb + i)->engName);
			printf("������� : %d \n���ǹ�ȣ : %s\n", (pb + i)->birTh, (pb + i)->mNum);
			printf("���Ǹ����� : %d\n�ڵ�����ȣ : %d\n", (pb + i)->exDate, (pb + i)->pNum);
		} 
}