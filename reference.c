#include <stdio.h>
void swap1(int, int); //call by value 값
void swap2(int*, int*); //call by reference 참조
// 함수 호출 후에도 변수의 값이 여전히 변경되어 있는가?

int main() {
	int a = 5, b = 8;
	printf("a = %d, b = %d\n", a, b);
	swap1(a, b); // 주소 값을 참조하지 않았다.
	//따라서 이 함수 안에서만 바뀌지 이곳까지 접근?을 할 수 없어 바뀌지 않는다.
	printf("a = %d, b = %d\n", a, b);
	swap2(&a, &b); // 주소값을 받아 원 주소 그대로 바꾸어 바꿔진다.
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}