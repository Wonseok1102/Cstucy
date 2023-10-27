#include<stdio.h>

int main(void) {
	int a = 0;
	int b = 1;
	int c = a + b;

	printf("a의 값: %d \n", a);
	printf("b의 값: %d \n", b);
	printf("c의 값: %d \n", c);

	printf("\n\n");

	a += 3;
	b += 7;
	c = a + b;

	printf("바뀐 a의 값: %d \n", a);
	printf("바뀐 b의 값: %d \n", b);
	printf("바뀐 c의 값: %d \n", c);

	return 0;
}