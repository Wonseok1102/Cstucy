#include<stdio.h>


void add(double num1, double num2);

int main(void) {
	double x = 3.1, y = 5.1;
	void(*fp)(double, double);

	printf("add �Լ��� �ּ�: %p\n", add);
	printf("�Լ� �������� �ּ� :%p\n", &fp);
	printf("�Լ� �����Ͱ� ����Ű�� �ּ�: %p\n", fp);
	fp = add;
	printf("�Լ� �����Ͱ� ����Ű�� �ּ�:%p \n", fp);

	fp(x, y);

	return 0;
	
}

void add(double num1, double num2) {
	double result;
	result = num1 + num2;
	printf("%f + %f = %f �Դϴ�\n", num1, num2, result);
}