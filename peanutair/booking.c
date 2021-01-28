#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int fsNo; //노선선택
	char korName[30]; //예약자 한글명
	char engName[30]; //예약자 영문명
	int birTh; //생년월일
	char mNum[10]; //예약자 여권번호
	int exDate; //여권만료일
	int pNum; //핸드폰번호
} BNUM;

void searchList(); //예약조회
void searchTotal(); //마스터 예약자 조회

char ch;
int cCnt = 0;
BNUM* pb = NULL;

//예약
void booking() {
	BNUM booK;
	printf("--------BOOKING--------\n");
	printf("     ① ICN - TPE      \n");
	printf("     ② ICN - KUL      \n");
	printf("     ③ ICN - SIN      \n");
	printf("-----------------------\n");
	printf("     (종료 0 입력)     \n");
	searchList();
	while(1){
		printf("노선선택 : ");
		scanf("%d", &booK.fsNo);
		while ((ch=getchar()) != '\n') {}
		if (booK.fsNo == 0) break;
		printf("한글명 입력 : ");
		scanf("%s", &booK.korName);
		printf("영문명 입력 : ");
		scanf("%s", &booK.engName);
		while ((ch = getchar()) != '\n') {}
		printf("생년월일(8자리) 입력 : ");
		scanf("%d", &booK.birTh);
		while ((ch = getchar()) != '\n') {}
		printf("여권번호 입력 : ");
		gets_s(booK.mNum, sizeof(booK.mNum));
		printf("여권만료일 입력 : ");
		scanf("%d", &booK.exDate);
		printf("핸드폰번호 입력 : ");
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
		printf("예약 완료! \n예약 확정시 별도 안내 드리겠습니다:) \n");
		printf("\n예약 확정 전 비행기 티켓을 드릴 수 없으며 \n확정 후 출발 14일 전 카카오톡으로 별도 전송 드리겠습니다. \n");

		printf("-----------------------\n");
	}
}
//예약조회
int chkPh;
void searchList() {
	for (int i = 0; i < cCnt; i++) {
		printf("---------------------------------------\n");
		printf("ＢＯＯＫＩＮＧ 예약 내역   \n");
		printf("핸드폰번호 입력 : ");
		scanf("%d", &chkPh);
		if (chkPh == pb->pNum) {
			printf("노선 : %d\n한글명 : %s\n영문명 : %s\n", (pb + i)->fsNo, (pb + i)->korName, (pb + i)->engName);
			printf("생년월일 : %d \n여권번호 : %s\n", (pb + i)->birTh, (pb + i)->mNum);
			printf("여권만료일 : %d\n핸드폰번호 : %d\n", (pb + i)->exDate, (pb + i)->pNum);
			getchar();
		}
		else printf("\n잘못 입력하셨습니다\n");
	}
	printf("---------------------------------------\n");
}

void searchTotal() {
		for (int i = 0; i < cCnt; i++) {
			printf("---------------------------------------\n");
			printf("노선 : %d\n한글명 : %s\n영문명 : %s\n", (pb + i)->fsNo, (pb + i)->korName, (pb + i)->engName);
			printf("생년월일 : %d \n여권번호 : %s\n", (pb + i)->birTh, (pb + i)->mNum);
			printf("여권만료일 : %d\n핸드폰번호 : %d\n", (pb + i)->exDate, (pb + i)->pNum);
		} 
}