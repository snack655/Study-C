#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// ������ �߿��� 10�� �ڸ����� ����� ������ִ� ���α׷�
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

	// ��������ǥ
	// ������ ���
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
	printf("�л� ���\n");
	for (i = 0; i < 20; i++)
	printf("�й� : %3d, ���:%3d\n", i + 1, rank[i]);*/

	//�������� �й� ���� ��� ����ϱ�
	int a[20] = { 12, 34, 65, 45, 23, 56, 0, 100, 23, 98, 97, 78, 67, 36, 63, 86, 86, 34, 3, 89 };
	int rank[102] = { 0, };
	int i, j;
	for (i = 0; i < 20; i++)
		rank[a[i]]++; // a[1~20]�� �� rank �迭 �� 1 �����ֱ�
	rank[101] = 1; 
	for (i = 100; i >= 0; i--)
		rank[i] = rank[i] + rank[i + 1];
	printf("�й�   ����   ���\n");
	for (i = 0; i < 20; i++)
		printf("%3d %5d %6d\n", i + 1, a[i], rank[a[i] + 1]); // 1���� �� �ö󰣴�.
	//rank�� ���� ��� 12 ���� 13�� 18 ���� ����Ų��. ���� �� ���� 13�� �ؾ���
	return 0;
}