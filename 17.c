#include<stdio.h>

int main(void) {
	int num;
	printf("���� �Է�:");
	scanf("%d", &num);

	if (num > 0)
		printf("���\n");
	if (num == 0)
		printf("0\n");
	if (num < 0)
		printf("����\n");

	return 0;
}