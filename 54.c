#include<stdio.h>
int main(void) {
	int num1 = 10, num2 = 0;
	int* ip = NULL;
	ip = &num1;

	num2 = *ip + num1;
	printf("%d %d %d\n", *ip, num1, num2);

	return 0;
}