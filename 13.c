#include<stdio.h>

int main(void) {

	int i;

	for (i = 0; 1; i++) {
		printf("�ݺ�Ƚ��: %d \n", i);
		if (i > 10)
			break;
	}

	return 0;
}