#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int score[3] = { 0, };
	int num;
	printf("가위바위보 게임을 몇 번 실행하시겠습니까? ");
	scanf("%d", &num);
	printf("\n");
	while (num) {
		srand((unsigned int)time(NULL));
		// 주사위 : 1 ~ 6 범위
		int opponent, ans;
		printf("(1:가위, 2:바위, 3:보) : ");
		opponent = rand() % 3 + 1;
		scanf("%d", &ans);
		printf("상대 : %d\n", opponent);
		if (ans == opponent) {
			printf("무승부입니다.");
			score[1] += 1;
			printf("(%d승 %d무 %d패)\n", score[0], score[1], score[2]);
			printf("---------------------------------------------------------\n");
		}
		else if ((ans == 1 && opponent == 2) || (ans == 2 && opponent == 3) || (ans == 3 && opponent  == 1)) {
			printf("당신이 졌습니다. ");
			score[2] += 1;
			printf("(%d승 %d무 %d패)\n", score[0], score[1], score[2]);
			printf("---------------------------------------------------------\n");
		}
		else if ((ans == 1 && opponent == 3) || (ans == 2 && opponent == 1) || (ans == 3 && opponent == 2)) {
			printf("당신이 이겼습니다. ");
			score[0] += 1;
			printf("(%d승 %d무 %d패)\n", score[0], score[1], score[2]);
			printf("---------------------------------------------------------\n");
		}
		num--;
	}
	return 0;
}
