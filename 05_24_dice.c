//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main_dice() {
//	while (1) {
//		rewind(stdin);
//		printf("�ֻ��� ������ �Ͻðڽ��ϱ�? (Y / N) ");
//		char ans = getchar();
//		printf("\n");
//		if (ans == 'Y') {
//			srand((unsigned int)time(NULL));
//			// �ֻ��� : 1 ~ 6 ����
//			int n1, n2;
//			n1 = rand() % 6 + 1;
//			n2 = rand() % 6 + 1;
//			printf("�ֻ��� : %d, %d\n", n1, n2);
//			if (n1 == n2) {
//				printf("�����Դϴ�. �ѹ� ��!");
//				int n3, n4;
//				n3 = rand() % 6 + 1;
//				n4 = rand() % 6 + 1;
//				printf("�ֻ��� : %d, %d\n", n3, n4);
//				printf("%dĭ �����ϼ���.\n", n1 + n2 + n3 + n4);
//				printf("--------------------------------------------------------- \n");
//			}
//			else {
//				printf("%dĭ �����ϼ���.\n", n1 + n2);
//				printf("--------------------------------------------------------- \n");
//			}
//		}
//		else if (ans == 'N') {
//			printf("�ֻ��� ������ �����մϴ�.");
//			break;
//		}
//	}
//	return 0;
//}