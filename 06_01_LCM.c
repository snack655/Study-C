#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_lcm() {
	int x, y, xy, z;
	int gcd = 0, lcm = 0;
	do {
		x = 0, y = 0;
		printf("�� ���� �Է��ϼ��� : ");
		scanf("%d %d", &x, &y);
		xy = x * y;
		if (x > 0 && y > 0) {
			while (1) {
				z = x % y;
				if (z == 0) {
					gcd = y;
					lcm = xy / y;
					break;
				}
				else {
					x = y;
					y = z;
				}
			}
			printf("�ִ����� = %d, �ּҰ���� = % d\n\n", gcd, lcm);
		}
		else if (x != 0 || y != 0)
			printf("\n�� ���� ���� ������ �Է��Ͻÿ�!(Quit 0, 0)\n\n");
	} while (x != 0 || y != 0);
		return 0;
}