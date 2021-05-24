#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int num[3], heart;
	srand((unsigned int)time(NULL));
	num[0] = rand() % 10;
	num[1] = rand() % 10;
	num[2] = rand() % 10;
	printf("기회를 정하세요 : ");
	scanf("%d", &heart);
	while (heart) {
		int ans, strike = 0, ball = 0;
		printf("세 자리 숫자를 입력하세요 : (ex.345) ");
		scanf("%d", &ans);
		int hun = ans / 100;
		int ten = (ans % 100) / 10;
		int one = (ans % 100) % 10;
		if (num[0] == hun) {
			strike += 1;
		}
		if (num[1] == ten) {
			strike += 1;
		}
		if (num[2] == one) {
			strike += 1;
		}
		if (num[0] == ten || num[0] == one) {
			ball += 1;
		}
		if (num[1] == hun || num[1] == one) {
			ball += 1;
		}
		if (num[2] == ten || num[2] == hun) {
			ball += 1;
		}
		if( (num[0] != hun) && (num[0] != ten) && (num[0] != one)
			&& (num[1] != hun) && (num[1] != ten) && (num[1] != one)
			&& (num[2] != hun) && (num[2] != ten) && (num[2] != one)) {
			printf("아웃\n");
		}
		if (num[0] == hun && num[1] == ten && num[2] == one) {
			printf("정답입니다.");
			return 0;
		}
		printf("%d 스트라이크 %d 볼 입니다.\n", strike, ball);
		heart--;
	}
	printf("정답은 %d%d%d 입니다.", num[0], num[1], num[2]);
	return 0;
}