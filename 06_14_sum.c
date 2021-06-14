#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

//구조체를 사용하여 국어, 영어, 수학 점수를 입력 받아
//총합을 출력하는 프로그램

typedef struct data {
	char name[20];
	int kor, eng, math;
}Student;

int main() {
	Student s1, s2, sum;
	scanf("%s %d %d %d", s1.name, &s1.kor, &s1.eng, &s1.math);
	//2번 학생의 점수도 입력을 받아보세요
	scanf("%s %d %d %d", s2.name, &s2.kor, &s2.eng, &s2.math);
	strcpy(sum.name, "총합");//c언어에서는 반드시 문자열 복사함수를 사용
	//a = 1;
	//str = "총합"; 하면 안됨
	sum.kor = s1.kor + s2.kor; //국어점수 총합
	sum.eng = s1.eng + s2.eng; //영어점수 총합
	sum.math = s1.math + s2.math; //수학점수 총합
	//두 명의 학생 이름 각 과목 점수를 출력
	//두 명의 총합 점수를 출력하시오.

	printf("----------%s----------\n", s1.name);
	printf("| 국어 : %3d          |\n", s1.kor);
	printf("| 영어 : %3d          |\n", s1.eng);
	printf("| 수학 : %3d          |\n", s1.math);
	printf("----------------------\n\n");
	printf("----------%s----------\n", s2.name);
	printf("| 국어 : %3d          |\n", s2.kor);
	printf("| 영어 : %3d          |\n", s2.eng);
	printf("| 수학 : %3d          |\n", s2.math);
	printf("----------------------\n\n");
	printf("----------총합----------\n");
	printf("| 국어 : %3d            |\n", sum.kor);
	printf("| 영어 : %3d            |\n", sum.eng);
	printf("| 수학 : %3d            |\n", sum.math);
	printf("------------------------\n\n");


}