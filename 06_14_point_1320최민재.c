//�� ���� �Է¹޾� �� ���� �߾� ��ġ�� �˷��ִ� ���α׷��� ����ÿ�.
//�Է�
//10 5
//12 36
//���
//11.0 20.5

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct P {
	double x, y;
}Point;

int main() {
	Point p1, p2;
	scanf("%lf %lf", &p1.x, &p1.y);
	scanf("%lf %lf", &p2.x, &p2.y);
	double center_x = (p1.x + p2.x) / 2;
	double center_y = (p1.y + p2.y) / 2;
	printf("(%.1lf, %.1lf)", center_x, center_y);

}