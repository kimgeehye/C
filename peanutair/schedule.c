#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a;

void scheDule() {
	printf("----------SCHEDULE----------\n");
	printf("����õ - Ÿ������ (ICN - TPE)\n");
	printf("  KE 691 09:00 - 11:00 \n");
	printf("����õ - ��˶��Ǫ�� (ICN - KUL)\n");
	printf("  KE 671 14:40 - 20:20 \n");
	printf("����õ - �̰����� (ICN - SIN)\n");
	printf("  KE 645 18:35 - 12:10 + 1D \n");
	printf("---------------------------\n");
	printf("  ó������ ���ư��� 0 �Է�  \n");
	printf("---------------------------\n");
	
	while (1) {
		printf("���ϴ� ������ �Է� : ");
		scanf("%d", &a);
		if (a == 1) {
			printf("ICN - TPE KE 691 1WAY\n");
			printf("�ݾ� : 430,000�� (TAX ���� / ADM)\n");
			printf("---------------------------\n");
		}
		else if (a == 2) {
			printf("ICN - KUL KE 671 1WAY\n");
			printf("�ݾ� : 520,000�� (TAX ���� / ADM)\n");
			printf("---------------------------\n");
		}
		else if (a == 3) {
			printf("ICN - SIN KE 645 1WAY\n");
			printf("�ݾ� : 650,000�� (TAX ���� / ADM)\n");
			printf("---------------------------\n");
		}
		else if (a == 0) break;
		else printf("�߸� �Է��߽��ϴ� \n");
	}
}