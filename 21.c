#include<stdio.h>

int main(void) {

	int num;

	printf("C언어 성적 입력 :");
	scanf("%d", &num);

	if (num >= 95)
		prinf("A+");
	else if (num >= 90)
		printf("A");
	else if (num >= 85)
		printf("B+");
	else
		printf("F");
	
	return 0;
}