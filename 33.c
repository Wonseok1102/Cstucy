#include<stdio.h>

int num;
void grow(void);

int main(void) {

	printf("�Լ� ȣ�� �� num:%d\n", &num);
	grow(num);
	printf("�Լ� ȣ�� �� num:%d\n", &num);

	return 0;
}

void grow(void) {

	num = 60;
}