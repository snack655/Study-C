#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// 점수들 중에서 10의 자리에서 어딘지 출력해주는 프로그램
	/*int a[20] = { 12, 34, 65, 45, 23, 56, 0, 100, 23, 98, 97, 78, 67, 36, 63, 86, 86, 34, 3, 89 };

	int i, histo[11] = { 0, };
	char star = '*';
	for (i = 0; i < 20; i++)
	histo[a[i] / 10]++;
	for (i = 0; i <= 10; i++) {
	printf("%3d : ", i * 10);
	for (int j = 0; j < histo[i]; j++)
	printf("%c", star);
	printf("\n");
	}*/

	// 도수분포표
	// 점수로 등수
	/*int a[20] = { 12, 34, 65, 45, 23, 56, 0, 100, 23, 98, 97, 78, 67, 36, 63, 86, 86, 34, 3, 89 };
	int rank[20] = { 0, };
	int i, j;
	for (i = 0; i < 20; i++) {
	rank[i] = 1;
	for (j = 0; j < 20; j++) {
	if (a[i] < a[j])
	rank[i]++;
	}
	}
	printf("학생 등수\n");
	for (i = 0; i < 20; i++)
	printf("학번 : %3d, 등수:%3d\n", i + 1, rank[i]);*/

	//점수에서 학번 점수 등수 출력하기
	int a[20] = { 12, 34, 65, 45, 23, 56, 0, 100, 23, 98, 97, 78, 67, 36, 63, 86, 86, 34, 3, 89 };
	int rank[102] = { 0, };
	int i, j;
	for (i = 0; i < 20; i++)
		rank[a[i]]++; // a[1~20]에 다 rank 배열 속 1 더해주기
	rank[101] = 1; 
	for (i = 100; i >= 0; i--)
		rank[i] = rank[i] + rank[i + 1];
	printf("학번   점수   등수\n");
	for (i = 0; i < 20; i++)
		printf("%3d %5d %6d\n", i + 1, a[i], rank[a[i] + 1]); // 1부터 쭉 올라간다.
	//rank는 예를 들어 12 말고 13서 18 등을 가리킨다. 따라서 그 전인 13을 해야함
	return 0;
}
