#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

int main() {
	int a = 16, b = 4;
	printf("�ִ����� : %d\n", gcd(a, b));
	printf("�ּҰ���� : %d\n", a * b / gcd(a, b);
	return 0;
}