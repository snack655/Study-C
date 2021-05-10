#define _CRT_SECURE_NO_WARNINGS
#define SIDE 100
int arr[SIDE][SIDE]; //arr[100][100]
#include <stdio.h>

//달팽이 배열 인덱스 만들기!!

void printarr(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	//이중 반복문을 돌리면서 makearr()을 통해 만들어진
	// arr[][] 배열을 출력하는 기능을 하는 함수
}

void makearr(int n) {
	int value = 1;
	int row = 0, col = -1;
	int inc = 1; // 증가 감소 처리, 1, -1
	int i, j;
	while (n > 0) {
		for (i = 0; i < n; i++) {
			col += inc; // col 에 증가할 시 1을 더하고 감소할 시 -1을 더한다.
			arr[row][col] = value++; // value는 배열에 넣을 값
			// value가 하나 씩 증가하며 인덱스를 채운다.
		}
		n--; // 하나 씩 n이 사라져야 함
		if (n == 0) break; // 끝내는 거 n이 빠지다 0이 되면 끝난다.
		for (i = 0; i < n; i++) {
			row += inc;
			arr[row][col] = value++;
		}
		inc *= -1; // 역순으로 바꾸기 위해 (감소)

		// 규칙성으로 보자면 증가2 감소2 순으로 규칙이 있다. 

		//그래서 for 두번 돌리고 역으로 돌리는 거
	}
}

int main_snail() {
	//달팽이 배열 인덱스
	int side;
	printf("달팽이 배열의 길이 : ");
	scanf("%d", &side); //side값 입력받기
	makearr(side); //달팽이 배열 만들기
	printarr(side); // 달팽이 배열 만든 거를 출력
}