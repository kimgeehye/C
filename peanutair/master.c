#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "booking.h"


int no;
void master_schedule(); //마스터 스케줄 관리

void searchTotal();
char che; //엔터처리

//마스터 메뉴
void menu_master() {
	printf("------마스터 메뉴------\n");
	printf("① 예약자 리스트 \n");
	printf("② 스케줄 관리 \n");
	printf("③ 종료 \n");
	printf("-----------------------\n");
	printf("번호 입력: ");
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


//마스터 스케줄 관리
void m_scheDule();

typedef struct {
	int nn;
	char set[50];
	char sCh[50];
} FLIGHT;

FLIGHT* ft = NULL;
char ch; //엔터처리
int ccNt = 0; //스케줄 등록 수

void master_schedule() {
	FLIGHT fIt;
	printf("----------------\n");
	printf("  스케줄 등록   \n");
	printf("  종료 0 입력   \n");
	printf("----------------\n");
	m_scheDule(); //마스터 등록 스케줄 조회
	while (1) {
		printf("번호 입력 \n  => ");
		scanf("%d", &fIt.nn);
		while ((ch = getchar()) != '\n') {}
		if (fIt.nn == 0) break;
		printf("노선 한글명 & 영문명 입력 \n  => ");
		gets_s(fIt.set, sizeof(fIt.set));
		printf("항공편, 시간 입력 \n => ");
		gets_s(fIt.sCh, sizeof(fIt.sCh));
		ccNt++; //스케줄 수 +1
		ft = (FLIGHT*)realloc(ft, sizeof(FLIGHT)*ccNt); //공간 늘리기
		//데이터 저장
		(ft + ccNt - 1)->nn = fIt.nn;
		strcpy((ft + ccNt - 1)->set, fIt.set);
		strcpy((ft + ccNt - 1)->sCh, fIt.sCh);
		printf("-----------------------\n");
		printf("등록 완료!\n");
		printf("-----------------------\n");
	}
}


//마스터 등록 스케줄 조회
void m_scheDule() {
	for (int i = 0; i < ccNt; i++) {
		printf("%d \n %s \n %s \n", (ft + i)->nn, (ft + i)->set, (ft + i)->sCh);
	}
	printf("-----------------------\n");
}