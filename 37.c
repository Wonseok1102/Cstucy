#include<stdio.h>

int factorial(int n);

int main(void) {
	int a;
	int result;

	printf("�ڿ��� �Է�: ");
	scanf("%d", &a);

	result = factorial(a);

	return 0;
}

int factorial(int n) {

	if (n <= 1)
		return 1;
	else
		return n * (factorial(n - 1));
}