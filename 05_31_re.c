#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char ttop[4] = { 0, };
char tbottom[4] = { 0, };

struct size {
	char name[30];
	int age;
	int top;
	int bottom;
};

void judge(int s_top, int s_bottom){
	if (s_top >= 90 && s_top < 95) {
		strcpy(ttop, "S");
	}
	else if (s_top >= 95 && s_top < 100) {
		strcpy(ttop, "M");
	}
	else if (s_top >= 100 && s_top < 105) {
		strcpy(ttop, "L");
	}
	else if (s_top >= 105 && s_top < 110) {
		strcpy(ttop, "XL");
	}
	else {
		strcpy(ttop, "XXL");
	}

	if (s_bottom >= 90 && s_bottom < 95) {
		strcpy(tbottom, "S");
	}
	else if (s_bottom >= 95 && s_bottom < 100) {
		strcpy(tbottom, "M");
	}
	else if (s_bottom >= 100 && s_bottom < 105) {
		strcpy(tbottom, "L");
	}
	else if (s_bottom >= 105 && s_bottom < 110) {
		strcpy(tbottom, "XL");
	}
	else {
		strcpy(tbottom, "XXL");
	}
}
int main() {
	struct size s[100];
	int i = 0, ans;
	while (1) {
		printf("�̸��� �Է����ּ��� : ");
		scanf("%s", s[i].name);
		printf("���̸� �Է����ּ��� : ");
		scanf("%d", &s[i].age);
		printf("���� ����� �Է����ּ��� : ");
		scanf("%d", &s[i].top);
		int s_top = s[i].top;
		printf("���� ����� �Է����ּ��� : ");
		scanf("%d", &s[i].bottom);
		int s_bottom = s[i].bottom;
		judge(s_top, s_bottom);
		printf("--------------------------------\n");
		printf("%s�� �������\n", s[i].name);
		printf("���� : %d\n", s[i].age);
		printf("���� : %s\n", ttop);
		printf("���� : %s\n", tbottom);
		printf("--------------------------------\n");
		printf("�����Ͻðڽ��ϱ�? (1/0)");
		scanf("%d", &ans);
		if (ans != 0)
			break;
		i++;
	}
	return 0;
}