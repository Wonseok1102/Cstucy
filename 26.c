#include<stdio.h>

int sum(int x, int y) {
	return x + y;
}

int main(void) {
	int num1, num2, result;

	printf("두 정수를 입력하세요. \n");
	scanf("%d %d", &num1, &num2);
	printf("입력된 정수: %d, %d\n", num1, num2);

	printf("-------------------------\n");

	result = sum(num1, num2);
	printf("정수의 합: %d\n", &result);
	return 0;
}