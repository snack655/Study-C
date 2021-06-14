#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

typedef struct data {
	char name[20];
	int kor, eng, math;
}Student;

Student score(Student s1, Student s2) {
	Student sum;
	strcpy(sum.name, "총합");
	sum.kor = s1.kor + s2.kor;
	sum.eng = s1.eng + s2.eng;
	sum.math = s1.math + s2.math;

	return sum;
}

int main() {
	Student s1, s2, sum;
	scanf("%s %d %d %d", s1.name, &s1.kor, &s1.eng, &s1.math);
	scanf("%s %d %d %d", s2.name, &s2.kor, &s2.eng, &s2.math);

	sum = score(s1, s2);

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