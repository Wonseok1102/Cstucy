#include<stdio.h>

int main(void) {

	int array1[5] = { 90, 80, 70, 60, 50 };
	int array2[] = { 10, 20, 30, 40, 50 };
	int array3[5] = { 77, 88, 99 };

	for (int i = 0; i < 5; i++) {
		printf("%d ", array1[i]);
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		printf("%d ", array2[i]);
	}
	printf("\n");

	for (int i = 0; i < 5; i++) {
		printf("%d ", array3[i]);
	}
	printf("\n");

	return 0;
}