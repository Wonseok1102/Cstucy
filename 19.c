#include<stdio.h>

int main(void) {

	int age;

	printf("나이 입력:");
	scanf("%d", &age);

	if (age >= 15 && age <= 100)
		printf("회원가입 가능\n");
	else
		printf("회원가입 불가능\n");
	return 0;
}