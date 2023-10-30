#include<stdio.h>

int main(void) {
	int array[3] = { 87,99,80 };
	int total;
	total = 0;
	for (int i = 0; i < 3; i++) {
		total += array[i];
		printf("array[%d]ÀÇ °ª: %d\n", i, array[i]);
		
	}
	printf("ÃÑÁ¡: %d, Æò±Õ : %.2f", total, (float)total / 3);

	return 0;
}