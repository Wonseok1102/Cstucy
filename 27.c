#include<stdio.h>

int max(int x, int y);

int main(void) {

	int num1, num2, result;

	printf("�� ���� �Է�: \n");
	scanf("%d %d", &num1, &num2);
	printf("�Է��� ������: %d %d\n", num1, num2);

	printf("--------------------------------------\n");

	result = max(num1, num2);
	printf("�������� ��ū ������ %d\n", result);
	return 0;

}


int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}