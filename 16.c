#include<stdio.h>

int main(void) {
	int num = 10;

	do {
		printf("%d", &num);
		num++;
	} while (num < 10);
	{printf("\n 반복문 종료후: num = %d", &num);

	}
	return 0;
}