#include<stdio.h>

int main(void) {
	int a = 0;
	int b = 1;
	int c = a + b;

	printf("a�� ��: %d \n", a);
	printf("b�� ��: %d \n", b);
	printf("c�� ��: %d \n", c);

	printf("\n\n");

	a += 3;
	b += 7;
	c = a + b;

	printf("�ٲ� a�� ��: %d \n", a);
	printf("�ٲ� b�� ��: %d \n", b);
	printf("�ٲ� c�� ��: %d \n", c);

	return 0;
}