//#pragma warning(disable : 4996)
//// static ������ ����ϴ� ������?
//
//#include <stdio.h>
//int func(int n) {
//
//	// �տ� static�� ������ �ѹ��� ������ �Ǿ� ������ �ȴ�.
//
//	// �������������� �������� ó�� ���� ���ش�.
//	// ���������� �ʱ�ȭ�� �ѹ��� �ϰ� �������ش�.
//
//	// ���� static�� ���ٸ� a�� �ٽ� �ʱ�ȭ�� �ȴ�.
//
//	static int a = 0;
//	a++;
//	printf("n = %d, a = %d\n", n, a );
//}
//
//int main() {
//	int n = 5;
//	func(n);
//	func(n);
//	return 0;
//}

//____________________________________________________________________________________

//#pragma warning(disable : 4996)
//// ���ڿ��� �����ϴ� �迭�� ���Ͽ�
//
////���� 'a'(1byte) / ���ڿ� "a" (2byte)
////���� str[0]�� �ִٸ� 'a'�� ������ "a"�� ������ �ʴ´�.
//#include<stdio.h>
//int main() {
//	char str[] = "Hello World\n";
//	printf("str = %s\n", str);
//	printf("str�� ũ�� : %d\n", sizeof(str));
//	//�� 13�̶�� ���ñ�?
//	//Hello World\n �� 12���ڰ� null���ڱ��� ���ؼ� 13�̴�.
//
//	printf("%d\n", sizeof("Hello"));
//	//�� 6�̶�� ���ñ�?
//	//Hello�� 5�����̰� + null ���ڷ� 6�̴�.
//
//	char str1[10];
//	str1[0] = 'a';
//	str1[1] = 'b';
//	str1[2] = 'c';
//	str1[3] = '\0';
//	str1[4] = 'd';
//
//	printf("str1 = %s\n", str1);
//	//abc���� ����� �� null���� ������ d�� ������� ���Ѵ�.
//
//	printf("str1 = %d\n", sizeof(str1));
//	//null ������ ���� 0�̴�.
//	printf("�ι����� ���� %d\n", str1[3]);
//
//	return 0;
//}

//#pragma warning(disable : 4996)
////���ڿ� �Է¹ް� ���� ������ ����غ���
//
//#include<stdio.h>
//
//int main() {
//	char str[20];
//	int i = 0;
//	scanf("%s", str);
//	//str�տ� &�� �Ⱦ��� ����
//	//�迭�� �̸��� �ּ��̱� ����
//
//	printf("���� ���� ���\n");
//	while (str[i] != '\0') {
//		printf("%c", str[i++]);
//	}
//	printf("\n%s\n", str);
//	return 0;
//}


//���� 
// �Է¹��� ���ڿ��� �ݴ�� ����غ���


//#pragma warning(disable : 4996)

#include <stdio.h> 

int main() {
	int i, j;
	char str[100] = "";
	scanf("%[^\n]", str);
	for (i = 0; i < 100; i++) {
		if (str[i] == '\0') {
			break;
		}
	}
	for (j = i-1; j >= 0; j--) {
		printf("%c", str[j]);
	}
	
}

//#include <stdio.h> 
//#include <string.h>
//
//int main() {
//	int i, len;
//	char str[100] = "";
//	scanf("%s", str);
//	len = strlen(str);// ���ڿ��� ���̸� �������ִ� ��
//	for (i = len -1; i >= 0; i--) {
//		printf("%c", str[i]);
//	}
//}




































