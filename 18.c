#include<stdio.h>

int main(void) {
	int num;
	for (num = 1; num <= 100; num++) {
		if (num % 5 == 0) {
			printf("%4d", num);
		}
	}
	printf("\n");

	return 0;
}