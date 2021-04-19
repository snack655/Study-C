//#pragma warning(disable : 4996)
//// static 변수를 사용하는 이유는?
//
//#include <stdio.h>
//int func(int n) {
//
//	// 앞에 static이 붙으면 한번만 실행이 되어 유지가 된다.
//
//	// 지역변수이지만 전역변수 처럼 쓰게 해준다.
//	// 정적변수로 초기화를 한번만 하고 유지해준다.
//
//	// 만약 static이 없다면 a는 다시 초기화가 된다.
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
//// 문자열을 저장하는 배열에 대하여
//
////문자 'a'(1byte) / 문자열 "a" (2byte)
////따라서 str[0]이 있다면 'a'는 들어가지고 "a"는 들어가지지 않는다.
//#include<stdio.h>
//int main() {
//	char str[] = "Hello World\n";
//	printf("str = %s\n", str);
//	printf("str의 크기 : %d\n", sizeof(str));
//	//왜 13이라고 나올까?
//	//Hello World\n 은 12글자고 null문자까지 더해서 13이다.
//
//	printf("%d\n", sizeof("Hello"));
//	//왜 6이라고 나올까?
//	//Hello는 5글자이고 + null 문자로 6이다.
//
//	char str1[10];
//	str1[0] = 'a';
//	str1[1] = 'b';
//	str1[2] = 'c';
//	str1[3] = '\0';
//	str1[4] = 'd';
//
//	printf("str1 = %s\n", str1);
//	//abc까지 출력한 후 null에서 막혀서 d를 출력하지 못한다.
//
//	printf("str1 = %d\n", sizeof(str1));
//	//null 문자의 값은 0이다.
//	printf("널문자의 값은 %d\n", str1[3]);
//
//	return 0;
//}

//#pragma warning(disable : 4996)
////문자열 입력받고 문자 단위로 출력해보자
//
//#include<stdio.h>
//
//int main() {
//	char str[20];
//	int i = 0;
//	scanf("%s", str);
//	//str앞에 &를 안쓰는 이유
//	//배열의 이름이 주소이기 때문
//
//	printf("문자 단위 출력\n");
//	while (str[i] != '\0') {
//		printf("%c", str[i++]);
//	}
//	printf("\n%s\n", str);
//	return 0;
//}


//문제 
// 입력받은 문자열을 반대로 출력해보자


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
//	len = strlen(str);// 문자열의 길이를 측정해주는 것
//	for (i = len -1; i >= 0; i--) {
//		printf("%c", str[i]);
//	}
//}




































