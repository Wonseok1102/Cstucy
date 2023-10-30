#include<stdio.h>

int subtract(int x, int y);

int main(void) {

	int a = 5, b = 3;
	int result = 0;

	result = subtract(a, b);
	printf("°á°ú: %d", &result);

	return 0;
}


int subtract(int x, int y) {
	return x - y;
}