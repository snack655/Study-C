#define _CRT_SECURE_NO_WARNINGS
#define SIDE 100
int arr[SIDE][SIDE]; //arr[100][100]
#include <stdio.h>

//������ �迭 �ε��� �����!!

void printarr(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	//���� �ݺ����� �����鼭 makearr()�� ���� �������
	// arr[][] �迭�� ����ϴ� ����� �ϴ� �Լ�
}

void makearr(int n) {
	int value = 1;
	int row = 0, col = -1;
	int inc = 1; // ���� ���� ó��, 1, -1
	int i, j;
	while (n > 0) {
		for (i = 0; i < n; i++) {
			col += inc; // col �� ������ �� 1�� ���ϰ� ������ �� -1�� ���Ѵ�.
			arr[row][col] = value++; // value�� �迭�� ���� ��
			// value�� �ϳ� �� �����ϸ� �ε����� ä���.
		}
		n--; // �ϳ� �� n�� ������� ��
		if (n == 0) break; // ������ �� n�� ������ 0�� �Ǹ� ������.
		for (i = 0; i < n; i++) {
			row += inc;
			arr[row][col] = value++;
		}
		inc *= -1; // �������� �ٲٱ� ���� (����)

		// ��Ģ������ ���ڸ� ����2 ����2 ������ ��Ģ�� �ִ�. 

		//�׷��� for �ι� ������ ������ ������ ��
	}
}

int main_snail() {
	//������ �迭 �ε���
	int side;
	printf("������ �迭�� ���� : ");
	scanf("%d", &side); //side�� �Է¹ޱ�
	makearr(side); //������ �迭 �����
	printarr(side); // ������ �迭 ���� �Ÿ� ���
}