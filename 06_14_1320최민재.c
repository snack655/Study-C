#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����ü�� ����Ͽ� �̸��� ���̸� �Է� �޾� ����ϴ� ���α׷�
typedef struct data Student;
struct data {
	char name[20];
	int age;
	int classcode;
};

int main() {
	Student me;
	printf("�̸� �Է� : ");
	scanf("%s", me.name);
	printf("���� �Է� : ");
	scanf("%d", &me.age);
	printf("�й� �Է� : ");
	scanf("%d", &me.classcode);
	if (me.classcode < 1000 || me.classcode > 9999) {
		printf("�й��� 4�ڸ� �̻��Դϴ�.");
		return 0;
	}
	//����ϴ� �ڵ�
	printf("�̸� : %s\n", me.name);
	printf("���� : %d\n", me.age);
	printf("�й� : %d", me.classcode);

	return 0;
}