#include<stdio.h>

int input(void);
int sum(void);
void output(int x);

int main(void) {
	int result;

	printf("------------���α׷� ����------------------\n");
	printf("�ڿ��� �Ѱ� �Է�: ");
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
	printf("��� : %d\n", x);
	return;
}