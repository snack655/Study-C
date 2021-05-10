#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BubbleSort(int arr[], int len);

int main() {
	// 버블 정렬
	int arr[5] = { 4, 6, 1, 3, 9 };
	int i; // i 정의
	BubbleSort(arr, 5); // arr과 5를 파라미터로 보낸다. 함수 실행
	//정렬된 후 출력
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	return 0;

}

void BubbleSort(int arr[], int len) {
	int temp;
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			// 빼서 처음은 총 4번 반복인디 5번이면 배열 값을 나간다. 
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				//j와 j+1의 배열 안의 값이 바뀐다.
			}
		}
	}
}