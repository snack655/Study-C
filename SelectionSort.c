#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SWAP(x, y, t) ( (t) = (x), (x) = (y), (y) = (t) ) // 그냥 x와 y를 t를 사용하여 교체한다.

void printArr(int value[], int n) {
	for (int i = 0; i < n; i++)
		printf("%3d", value[i]);
	printf("\n");
}
//배열 출력하기

void selectionSort(int* value, int n) { //n -> 7
	int i, j, min = 0, temp = 0;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (value[min] > value[j])
				min = j; // 만약 앞의 갚이 더 크다면 앞으로 보내기 전 
			// min 에 j를 넣어 value[min] > value[j]의 식이 성립하지 않을 때까지 앞으로 보낸다.
		}
		/*temp = value[i];
		value[i] = value[min];
		value[min] = temp;*/
		SWAP(value[i], value[min], temp); // value[i]의 값과 value[min]의 값을 바꾸어줌
	}
}
//선택 정렬

int main() {
	int value[] = { 4, 7, 9, 11, 3, 7, 6 };
	int n = sizeof(value) / sizeof(int); // 배열의 인덱스 개수를 n에 넣자
	selectionSort(value, n); // 실행	
	printArr(value, n); // 실행
	return 0;
}