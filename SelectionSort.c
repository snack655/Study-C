#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SWAP(x, y, t) ( (t) = (x), (x) = (y), (y) = (t) ) // �׳� x�� y�� t�� ����Ͽ� ��ü�Ѵ�.

void printArr(int value[], int n) {
	for (int i = 0; i < n; i++)
		printf("%3d", value[i]);
	printf("\n");
}
//�迭 ����ϱ�

void selectionSort(int* value, int n) { //n -> 7
	int i, j, min = 0, temp = 0;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (value[min] > value[j])
				min = j; // ���� ���� ���� �� ũ�ٸ� ������ ������ �� 
			// min �� j�� �־� value[min] > value[j]�� ���� �������� ���� ������ ������ ������.
		}
		/*temp = value[i];
		value[i] = value[min];
		value[min] = temp;*/
		SWAP(value[i], value[min], temp); // value[i]�� ���� value[min]�� ���� �ٲپ���
	}
}
//���� ����

int main() {
	int value[] = { 4, 7, 9, 11, 3, 7, 6 };
	int n = sizeof(value) / sizeof(int); // �迭�� �ε��� ������ n�� ����
	selectionSort(value, n); // ����	
	printArr(value, n); // ����
	return 0;
}