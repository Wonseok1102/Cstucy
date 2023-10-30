#include<stdio.h>

int main(void) {
	int i = 0;
	//int total = 0;
	for (i = 0; i < 3; i++) {
		int total = 0;
		total = total + 1;
		printf("for¹® ³» total:%d", &total);
	}

	if (total < 10) {
		printf("main³» total:%d", &total);
	}

	return 0;
}