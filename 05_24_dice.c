//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main_dice() {
//	while (1) {
//		rewind(stdin);
//		printf("주사위 게임을 하시겠습니까? (Y / N) ");
//		char ans = getchar();
//		printf("\n");
//		if (ans == 'Y') {
//			srand((unsigned int)time(NULL));
//			// 주사위 : 1 ~ 6 범위
//			int n1, n2;
//			n1 = rand() % 6 + 1;
//			n2 = rand() % 6 + 1;
//			printf("주사위 : %d, %d\n", n1, n2);
//			if (n1 == n2) {
//				printf("더블입니다. 한번 더!");
//				int n3, n4;
//				n3 = rand() % 6 + 1;
//				n4 = rand() % 6 + 1;
//				printf("주사위 : %d, %d\n", n3, n4);
//				printf("%d칸 전진하세요.\n", n1 + n2 + n3 + n4);
//				printf("--------------------------------------------------------- \n");
//			}
//			else {
//				printf("%d칸 전진하세요.\n", n1 + n2);
//				printf("--------------------------------------------------------- \n");
//			}
//		}
//		else if (ans == 'N') {
//			printf("주사위 게임을 종료합니다.");
//			break;
//		}
//	}
//	return 0;
//}