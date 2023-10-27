#include<stdio.h>

int main(void) {
	int num1 = 2, num2 = 4;
	int result1, result2, result3, result4;

	result1 = (num1 > num2);
	result2 = (num1 <= num2);
	result3 = (num1 == num2);
	result4 = (num1 != num2);

	printf("result1: %d", result1);
	printf("result2: %d", result2);
	printf("result3: %d", result3);
	printf("result4: %d", result4);

	return 0;
}