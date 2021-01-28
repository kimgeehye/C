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
		printf("① 예약 (BOOKING)           \n");
		printf("② 스케줄 조회 (FLIGHT SCHEDULE)   \n");
		printf("③ 예약 조회 (SEARCH RESERVATION)   \n");
		printf("④ 마스터 관리 (MASTER)      \n");
		printf("ⓠ 종료\n");
		printf("---------------------------------------\n");
		printf("번호 입력: ");
		scanf("%c", &num);
		while ((ch = getchar()) != '\n'){}
		if (num == '1') booking();
		else if (num == '2') scheDule();
		else if (num == '3') {
			searchList();
			printf("엔터입력 \n");
			getchar();
		}
		else if (num == '4') menu_master();
		else if (num == 'q') break;
	}
}