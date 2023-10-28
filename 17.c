#include<stdio.h>

int main(void) {
	int num;
	printf("숫자 입력:");
	scanf("%d", &num);

	if (num > 0)
		printf("양수\n");
	if (num == 0)
		printf("0\n");
	if (num < 0)
		printf("음수\n");

	return 0;
}