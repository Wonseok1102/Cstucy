#include<stdio.h>

int main(void) {
	int num = 10;

	do {
		printf("%d", &num);
		num++;
	} while (num < 10);
	{printf("\n �ݺ��� ������: num = %d", &num);

	}
	return 0;
}