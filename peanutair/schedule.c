#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a;

void scheDule() {
	printf("----------SCHEDULE----------\n");
	printf("①인천 - 타이페이 (ICN - TPE)\n");
	printf("  KE 691 09:00 - 11:00 \n");
	printf("②인천 - 쿠알라룸푸르 (ICN - KUL)\n");
	printf("  KE 671 14:40 - 20:20 \n");
	printf("③인천 - 싱가포르 (ICN - SIN)\n");
	printf("  KE 645 18:35 - 12:10 + 1D \n");
	printf("---------------------------\n");
	printf("  처음으로 돌아가기 0 입력  \n");
	printf("---------------------------\n");
	
	while (1) {
		printf("원하는 스케줄 입력 : ");
		scanf("%d", &a);
		if (a == 1) {
			printf("ICN - TPE KE 691 1WAY\n");
			printf("금액 : 430,000원 (TAX 포함 / ADM)\n");
			printf("---------------------------\n");
		}
		else if (a == 2) {
			printf("ICN - KUL KE 671 1WAY\n");
			printf("금액 : 520,000원 (TAX 포함 / ADM)\n");
			printf("---------------------------\n");
		}
		else if (a == 3) {
			printf("ICN - SIN KE 645 1WAY\n");
			printf("금액 : 650,000원 (TAX 포함 / ADM)\n");
			printf("---------------------------\n");
		}
		else if (a == 0) break;
		else printf("잘못 입력했습니다 \n");
	}
}