#include<stdio.h>

int main(void) {

	int array[2][2] = { {10,20},{30,40} };

	printf("%p %p %p %p \n", array + 0, *(array + 0), array[0], &array[0][0]);

	printf("%p %p %p %p\n", array + 1, *(array + 1), array[1], &array[1][0]);

	return 0;
}