#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//구조체를 사용하여 이름과 나이를 입력 받아 출력하는 프로그램
typedef struct data Student;
struct data {
	char name[20];
	int age;
	int classcode;
};

int main() {
	Student me;
	printf("이름 입력 : ");
	scanf("%s", me.name);
	printf("나이 입력 : ");
	scanf("%d", &me.age);
	printf("학번 입력 : ");
	scanf("%d", &me.classcode);
	if (me.classcode < 1000 || me.classcode > 9999) {
		printf("학번은 4자리 이상입니다.");
		return 0;
	}
	//출력하는 코드
	printf("이름 : %s\n", me.name);
	printf("나이 : %d\n", me.age);
	printf("학번 : %d", me.classcode);

	return 0;
}