#include<stdio.h>

int num;
void grow(void);

int main(void) {

	printf("함수 호출 전 num:%d\n", &num);
	grow(num);
	printf("함수 호출 후 num:%d\n", &num);

	return 0;
}

void grow(void) {

	num = 60;
}