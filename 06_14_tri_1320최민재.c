//�ﰢ���� ��ǥ�� �Է¹޾� �����߽��� ��ġ�� ����ϴ� ���α׷�
//�����߽� = (x1+x2+x3)/3, (y1, y2, y3)/3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct _P {
	double x, y;
}Point;

int main() {
	Point p1, p2, p3;
	scanf("%lf %lf", &p1.x, &p1.y);
	scanf("%lf %lf", &p2.x, &p2.y);
	scanf("%lf %lf", &p3.x, &p3.y);

	printf("�����߽� : %.1lf", ((p1.x + p2.x + p3.x) / 3.0) + ((p1.y + p2.y + p3.y) / 3.0));
	return 0;
}