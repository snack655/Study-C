#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int score[3] = { 0, };
	int num;
	printf("���������� ������ �� �� �����Ͻðڽ��ϱ�? ");
	scanf("%d", &num);
	printf("\n");
	while (num) {
		srand((unsigned int)time(NULL));
		// �ֻ��� : 1 ~ 6 ����
		int opponent, ans;
		printf("(1:����, 2:����, 3:��) : ");
		opponent = rand() % 3 + 1;
		scanf("%d", &ans);
		printf("��� : %d\n", opponent);
		if (ans == opponent) {
			printf("���º��Դϴ�.");
			score[1] += 1;
			printf("(%d�� %d�� %d��)\n", score[0], score[1], score[2]);
			printf("---------------------------------------------------------\n");
		}
		else if ((ans == 1 && opponent == 2) || (ans == 2 && opponent == 3) || (ans == 3 && opponent  == 1)) {
			printf("����� �����ϴ�. ");
			score[2] += 1;
			printf("(%d�� %d�� %d��)\n", score[0], score[1], score[2]);
			printf("---------------------------------------------------------\n");
		}
		else if ((ans == 1 && opponent == 3) || (ans == 2 && opponent == 1) || (ans == 3 && opponent == 2)) {
			printf("����� �̰���ϴ�. ");
			score[0] += 1;
			printf("(%d�� %d�� %d��)\n", score[0], score[1], score[2]);
			printf("---------------------------------------------------------\n");
		}
		num--;
	}
	return 0;
}
