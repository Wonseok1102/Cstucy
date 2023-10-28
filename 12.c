#include<stdio.h>

int main(void) {

	int num = 0, i, result = 0;

	printf("숫자 입력:");
	scanf("%d", &num);

	for (i = 0; i < 10; i += 2) {
		result = num * i;
		printf("%d * %d= %d\n", num, i, result);
	}

	return 0;
}