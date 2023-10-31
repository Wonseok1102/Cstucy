#include<stdio.h>

int main(void) {

	int array[3] = { 1,2,3 };

	printf("%p %p %p \n", array + 0, array + 1, array + 2);
	printf("%p %p %p \n", &array[0], &array[1], &array[2]);

	return 0;
}