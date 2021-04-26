#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 포인터(pointer)란?  
	// 메모리 주소값을 저장하는 변수 
	
	//---------------------------------------------------------------------------------------------------

	// C언어에서 포인터(pointer)란 메모리의 주소값을 저장하는 변수이며,
	// 포인터 변수라고도 부릅니다. char형 변수가 문자를 저장하고,
	// int형 변수가 정수를 저장하는 것처럼 포인터는 주소값을 저장합니다.

	// 포인터 연산자
	// 1. 주소 연산자(&) 2. 참조 연산자(*)
	
	// 포인터의 선언
	// 타입* 포인터이름;
	// 타입이란 포인터가 가리키고자 하는 변수의 타입을 명시
	// 포인터 이름은 포인터가 선언된 후에 포인터에 접근하기 위해 사용
	// 포인터를 선언한 후 참조 연산자(*)를 사용하기 전에 반드시 먼저 초기화
	// 따라서 C 컴파일러는 초기화하지 않은 포인터에 참조 연산자를 사용하면 오류 발생
	// (문법)
	// 타입* 포인터이름 = &변수이름;
	// or
	// 타입* 포인터 이름 = 주소값;

	// ex))
	/*int n = 100;
	int* ptr = &n;
	printf("%d", ptr);

	int n1 = 100, n2 = 200;
	int* p;
	p = &n1;
	printf("%p\n", p);
	printf("%d\n", *p);
	printf("%d\n", n1);
	(*p) = 300;
	printf("%d\n", *p);*/

	// 포인터의 참조
	// ex))
	/*int x = 7;
	int* ptr = &x;
	int* pptr = &ptr;*/

	// ex))
	/*int num01 = 1234;
	double num02 = 3.14;
	int* ptr_num01 = &num01;
	double* ptr_num02 = &num02;

	printf("포인터의 크기는 %d입니다. \n", sizeof(ptr_num01));
	printf("포인터 ptr_num01이 가리키고 있는 주소값은 %#x입니다.\n", ptr_num01);
	printf("포인터 ptr_num02이 가리키고 있는 주소값은 %#x입니다.\n", ptr_num02);
	printf("포인터 ptr_num01이 가리키고 있는 주소에 저장된 값은 %d입니다.\n", *ptr_num01);
	printf("포인터 ptr_num02이 가리키고 있는 주소에 저장된 값은 %f입니다.\n", *ptr_num02);*/

	
	/*int n1 = 100;
	int* p;
	p = &n1;
	printf("주소(Address) : %p, %p\n", p, &n1);
	printf("내용, 값 :%d, %d\n", *p, n1);
	for (int i = 0; i < 5; i++)
		printf("%4d", (*p)++);*/

	/*int a[5] = { 0, 1, 2, 3, 4 };
	printf("%d %d\n", a[0], a[1]);
	printf("%d %d\n", &a[0], &a[1]);
	printf("a주소 = %d a[0]주소 = %d\n", &a, &a[0]);
	int* p = a;
	printf("a주소=%d\n", p);
	printf("a주소=%d\n", a);
	printf("a주소=%d\n", &a[0]);
	printf("a[1]주소=%d\n", &a[1]);
	printf("a[1]주소=%d\n", a+1);*/

	int a[5] = { 0, 1, 2, 3, 4 };
	int* p;
	int b = 10;
	a = &b; // 식이 수정할 수 있는 lvalue여야 합니다.
	p = &b;


	return 0;
}
//과제 1차원 배열과 포인터 예제 만들어 제출