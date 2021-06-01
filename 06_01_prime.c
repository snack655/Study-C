#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//소수를 구하는 프로그램
int isPrime(int n) {
	for (int i = 2; i * i <= n; i++)
		if (!(n % i)) // 2, 3 ... 나누다가 n % i가 0이 되면 !로 1로 바꾸어 0을 리턴시킴. i로 나누어지지 않는다면 1을 리턴
			return 0;
	return 1;
}

int main_prime() {
	while (1) { // 무한 반복
		int n;
		printf("숫자 : ");
		scanf("%d", &n); // 변수 n을 입력 받기
		if (n < 2) return 0; // 2보다 작은 수를 입력 시 프로그램 종료
		if (n >= 1000) { // n이 1000보다 크면 엔터 한번만 출력으로 소수를 구하지 않음
			printf("\n");
			continue;
		}
		int primeCnt = 1;
		for (int i = 2; i <= n; i++) {
			if (isPrime(i)) { // 리턴 받은 값이 1이면 i값 출력
				printf("%d ", i);
			}
		}
	}
	return 0;
}