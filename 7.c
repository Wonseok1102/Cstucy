#include<stdio.h>

int main(void)
{
	int i = 0;

	while (1) {


		printf("반복 횟수: %d \n", i);
		i++;

		if (i > 10)
			break;
	}

	printf("\n반복문 종료후 :i = %d \n", i);

	return 0;
}