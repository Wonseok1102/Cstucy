#include<stdio.h>

int input(void);
int sum(void);
void output(int x);

int main(void) {
	int result;

	printf("------------프로그램 시작------------------\n");
	printf("자연수 한개 입력: ");
	result = sum();
	output(result);
	return 0;
}

int input(void) {
	int val;
	scanf("%d", &val);
	return val;
}
int sum(void) {
	int i, total, num;
	num = input();

	total = 0;
	for (i = 1; i <= num, i++) {
		total += i;
	}

	return total;
}

void output(int x) {
	printf("결과 : %d\n", x);
	return;
}