#include<stdio.h>

int max(int x, int y);

int main(void) {

	int num1, num2, result;

	printf("두 정수 입력: \n");
	scanf("%d %d", &num1, &num2);
	printf("입력한 두정수: %d %d\n", num1, num2);

	printf("--------------------------------------\n");

	result = max(num1, num2);
	printf("두정수중 더큰 정수는 %d\n", result);
	return 0;

}


int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}