#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

typedef struct Point {
	int x, y;
}Point;

int main() {
	Point p1;
	Point p2;
	p1.x = 30;	p1.y = 20;
	p2.x = 60;	p2.y = 50;
	double sol;

	int t1 = pow(p2.x - p1.x, 2);
	int t2 = pow(p2.y - p1.y, 2);
	sol = sqrt(t1 + t2);
	printf("%f\n", sol);

	return 0;
}