#include<stdio.h>

int main(void) {
	int array1[3] = { 1,2,3 };
	char array[3] = { 'A','B', 'C' };

	printf("%p %p %p \n", &array1[0], &array1[1], &array1[2]);
	printf("%p %p %p \n", &array[0], &array[1], &array[2]);

	return 0;
}