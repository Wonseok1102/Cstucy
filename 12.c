#include<stdio.h>

int main(void) {

	int num = 0, i, result = 0;

	printf("���� �Է�:");
	scanf("%d", &num);

	for (i = 0; i < 10; i += 2) {
		result = num * i;
		printf("%d * %d= %d\n", num, i, result);
	}

	return 0;
}