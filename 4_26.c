#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ������(pointer)��?  
	// �޸� �ּҰ��� �����ϴ� ���� 
	
	//---------------------------------------------------------------------------------------------------

	// C���� ������(pointer)�� �޸��� �ּҰ��� �����ϴ� �����̸�,
	// ������ ��������� �θ��ϴ�. char�� ������ ���ڸ� �����ϰ�,
	// int�� ������ ������ �����ϴ� ��ó�� �����ʹ� �ּҰ��� �����մϴ�.

	// ������ ������
	// 1. �ּ� ������(&) 2. ���� ������(*)
	
	// �������� ����
	// Ÿ��* �������̸�;
	// Ÿ���̶� �����Ͱ� ����Ű���� �ϴ� ������ Ÿ���� ����
	// ������ �̸��� �����Ͱ� ����� �Ŀ� �����Ϳ� �����ϱ� ���� ���
	// �����͸� ������ �� ���� ������(*)�� ����ϱ� ���� �ݵ�� ���� �ʱ�ȭ
	// ���� C �����Ϸ��� �ʱ�ȭ���� ���� �����Ϳ� ���� �����ڸ� ����ϸ� ���� �߻�
	// (����)
	// Ÿ��* �������̸� = &�����̸�;
	// or
	// Ÿ��* ������ �̸� = �ּҰ�;

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

	// �������� ����
	// ex))
	/*int x = 7;
	int* ptr = &x;
	int* pptr = &ptr;*/

	// ex))
	/*int num01 = 1234;
	double num02 = 3.14;
	int* ptr_num01 = &num01;
	double* ptr_num02 = &num02;

	printf("�������� ũ��� %d�Դϴ�. \n", sizeof(ptr_num01));
	printf("������ ptr_num01�� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_num01);
	printf("������ ptr_num02�� ����Ű�� �ִ� �ּҰ��� %#x�Դϴ�.\n", ptr_num02);
	printf("������ ptr_num01�� ����Ű�� �ִ� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num01);
	printf("������ ptr_num02�� ����Ű�� �ִ� �ּҿ� ����� ���� %f�Դϴ�.\n", *ptr_num02);*/

	
	/*int n1 = 100;
	int* p;
	p = &n1;
	printf("�ּ�(Address) : %p, %p\n", p, &n1);
	printf("����, �� :%d, %d\n", *p, n1);
	for (int i = 0; i < 5; i++)
		printf("%4d", (*p)++);*/

	/*int a[5] = { 0, 1, 2, 3, 4 };
	printf("%d %d\n", a[0], a[1]);
	printf("%d %d\n", &a[0], &a[1]);
	printf("a�ּ� = %d a[0]�ּ� = %d\n", &a, &a[0]);
	int* p = a;
	printf("a�ּ�=%d\n", p);
	printf("a�ּ�=%d\n", a);
	printf("a�ּ�=%d\n", &a[0]);
	printf("a[1]�ּ�=%d\n", &a[1]);
	printf("a[1]�ּ�=%d\n", a+1);*/

	int a[5] = { 0, 1, 2, 3, 4 };
	int* p;
	int b = 10;
	a = &b; // ���� ������ �� �ִ� lvalue���� �մϴ�.
	p = &b;


	return 0;
}
//���� 1���� �迭�� ������ ���� ����� ����