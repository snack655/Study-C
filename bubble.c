#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BubbleSort(int arr[], int len);

int main() {
	// ���� ����
	int arr[5] = { 4, 6, 1, 3, 9 };
	int i; // i ����
	BubbleSort(arr, 5); // arr�� 5�� �Ķ���ͷ� ������. �Լ� ����
	//���ĵ� �� ���
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	return 0;

}

void BubbleSort(int arr[], int len) {
	int temp;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			// ���� ó���� �� 4�� �ݺ��ε� 5���̸� �迭 ���� ������. 
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				//j�� j+1�� �迭 ���� ���� �ٲ��.
			}
		}
	}
}