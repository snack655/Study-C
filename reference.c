#include <stdio.h>
void swap1(int, int); //call by value ��
void swap2(int*, int*); //call by reference ����
// �Լ� ȣ�� �Ŀ��� ������ ���� ������ ����Ǿ� �ִ°�?

int main() {
	int a = 5, b = 8;
	printf("a = %d, b = %d\n", a, b);
	swap1(a, b); // �ּ� ���� �������� �ʾҴ�.
	//���� �� �Լ� �ȿ����� �ٲ��� �̰����� ����?�� �� �� ���� �ٲ��� �ʴ´�.
	printf("a = %d, b = %d\n", a, b);
	swap2(&a, &b); // �ּҰ��� �޾� �� �ּ� �״�� �ٲپ� �ٲ�����.
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