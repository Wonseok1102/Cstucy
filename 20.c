#include<stdio.h>

int main(void) {
	int num;
	printf("숫자 입력:");
	scanf("%d", &num);

	if (num > 0)
		printf("양수가 num에 저장");
	else if (num == 0)
		printf("0이 num에 저장");
	else 
		printf("음수가 num에저장");
	printf("저장된 num의 값: %d", &num);

	return 0;
}