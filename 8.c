#include<stdio.h>

int main(void)
{
	int i = 2;
	int j = 1;
	int result = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			result = i * j;
			printf("%d * %d = %d \n", i, j, result);
			j++;
		}
		i++;
		j = 1;
	}
	printf("\n 반복문을 종료한후 : i =%d, j =%d, result = %d\n", i, j, result);

	return 0;
}