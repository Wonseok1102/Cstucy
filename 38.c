#include<stdio.h>

int main(void) {

	int student[5];

	student[0] = 90;
	student[1] = 85;
	student[2] = 70;

	printf("첫번째 학생 점수 : %d \n", student[0]);
	printf("두번째 학생 점수 : %d \n", student[1]);
	printf("세번째 학생 점수 : %d \n", student[2]);
	printf("네번째 학생 점수 : %d \n", student[3]);
	printf("다섯번째 학생 점수 : %d \n", student[4]);

	return 0;
}