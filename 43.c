#include<stdio.h>

int main(void) {

	char array[3] = { 'A', 'B', 'C' };

	printf("%p %p %p \n", array + 0, array + 1, array + 2);
	printf("%p %p %p \n", &array[0], &array[1], &array[2]);

	return 0;
}