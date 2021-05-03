#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//알고리즘 문제
	//1.1 0.7 1.3 0.9 1.4 0.8 0.7 1.4
	//연속되는 실수의 값 중 가장 큰 값
	//1.3 0.9 1.4
	//1.638
	/*int cnt;
	double num[100] = { 0, }, mul[100] = { -1, }, re = -1;
	printf("몇 번 입력할거에요??");
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		scanf("%lf", &num[i]);	
	}
	for (int i = 0; i < cnt; i++) {
		for (int j = i+1; j <= cnt - (i+1); j++) {
			mul[i] = num[i] * num[j] > mul[i] ? num[i] * num[j] : mul[i];
		}
	}
	for (int i = 0; i < 100; i++) {
		re = mul[i] > re ? mul[i] : re;
	}
	printf("%.3lf", re);*/
	//모르겠다....

	// 포인터와 배열의 관계
	 
	// 배열의 이름은 그 값을 변경할 수 없는 상수라는 점을 제외하면 포인터와 같습니다.
	// 따라서 배열의 이름은 포인터 상수(constant pointer)입니다.

	//예제 1
	/*int a[5] = { 0, 1, 2, 3, 4 };
	printf("%d %d\n", a[0], a[1]);
	printf("%p %p\n", &a[0], &a[1]);
	printf("%d\n", &a[1] - &a[0]);*/

	//예제 2
	/*int arr[5] = { 1, 2, 3, 4, 5 };
	int* pArr = arr;
	printf("%d \n", *pArr);
	printf("%d \n", *(++pArr));
	printf("%d \n", *(++pArr));
	printf("%d \n", *(pArr + 1));
	printf("%d \n", *(pArr + 2));*/

	//예제 3
	/*int a = 1, b = 2, c = 3;
	int* pArr[3] = { &a, &b, &c };
	printf("%d \n", *pArr[0]);
	printf("%d \n", *pArr[1]);
	printf("%d \n", *pArr[2]);*/

	//예제 4
	//char Arr[3][10] = { "Kim","Hong","Lee" }; //이차원배열
	///*char* pArr[3] = { "Kim", "Hong", "Lee" };*/
	//char* pArr[3] = { Arr[0], Arr[1], Arr[2] };
	//printf("%s \n", pArr[0]);
	//printf("%s \n", pArr[1]);
	//printf("%s \n", pArr[2]);

	//예제 5
	//char Arr[3][10] = { "Kim","Hong","Lee" }; //이차원배열
	///*char* pArr[3] = { "Kim", "Hong", "Lee" };*/
	//char* pArr[3] = { Arr[0], Arr[1], Arr[2] };
	//printf("%s \n", pArr[0]);
	//printf("%s \n", pArr[1]);
	//printf("%s \n", pArr[2]);
	////arr[i] == *(arr+i)
	//printf("%s \n", *pArr); //Kim
	//printf("%s \n", *(pArr + 1)); //Hong
	//printf("%s \n", *(pArr + 2)); //Lee

	return 0;
}