#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

//����ü�� ����Ͽ� ����, ����, ���� ������ �Է� �޾�
//������ ����ϴ� ���α׷�

typedef struct data {
	char name[20];
	int kor, eng, math;
}Student;

int main() {
	Student s1, s2, sum;
	scanf("%s %d %d %d", s1.name, &s1.kor, &s1.eng, &s1.math);
	//2�� �л��� ������ �Է��� �޾ƺ�����
	scanf("%s %d %d %d", s2.name, &s2.kor, &s2.eng, &s2.math);
	strcpy(sum.name, "����");//c������ �ݵ�� ���ڿ� �����Լ��� ���
	//a = 1;
	//str = "����"; �ϸ� �ȵ�
	sum.kor = s1.kor + s2.kor; //�������� ����
	sum.eng = s1.eng + s2.eng; //�������� ����
	sum.math = s1.math + s2.math; //�������� ����
	//�� ���� �л� �̸� �� ���� ������ ���
	//�� ���� ���� ������ ����Ͻÿ�.

	printf("----------%s----------\n", s1.name);
	printf("| ���� : %3d          |\n", s1.kor);
	printf("| ���� : %3d          |\n", s1.eng);
	printf("| ���� : %3d          |\n", s1.math);
	printf("----------------------\n\n");
	printf("----------%s----------\n", s2.name);
	printf("| ���� : %3d          |\n", s2.kor);
	printf("| ���� : %3d          |\n", s2.eng);
	printf("| ���� : %3d          |\n", s2.math);
	printf("----------------------\n\n");
	printf("----------����----------\n");
	printf("| ���� : %3d            |\n", sum.kor);
	printf("| ���� : %3d            |\n", sum.eng);
	printf("| ���� : %3d            |\n", sum.math);
	printf("------------------------\n\n");


}