#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Ҽ��� ���ϴ� ���α׷�
int isPrime(int n) {
	for (int i = 2; i * i <= n; i++)
		if (!(n % i)) // 2, 3 ... �����ٰ� n % i�� 0�� �Ǹ� !�� 1�� �ٲپ� 0�� ���Ͻ�Ŵ. i�� ���������� �ʴ´ٸ� 1�� ����
			return 0;
	return 1;
}

int main_prime() {
	while (1) { // ���� �ݺ�
		int n;
		printf("���� : ");
		scanf("%d", &n); // ���� n�� �Է� �ޱ�
		if (n < 2) return 0; // 2���� ���� ���� �Է� �� ���α׷� ����
		if (n >= 1000) { // n�� 1000���� ũ�� ���� �ѹ��� ������� �Ҽ��� ������ ����
			printf("\n");
			continue;
		}
		int primeCnt = 1;
		for (int i = 2; i <= n; i++) {
			if (isPrime(i)) { // ���� ���� ���� 1�̸� i�� ���
				printf("%d ", i);
			}
		}
	}
	return 0;
}