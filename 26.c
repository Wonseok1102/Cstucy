#include<stdio.h>

int sum(int x, int y) {
	return x + y;
}

int main(void) {
	int num1, num2, result;

	printf("�� ������ �Է��ϼ���. \n");
	scanf("%d %d", &num1, &num2);
	printf("�Էµ� ����: %d, %d\n", num1, num2);

	printf("-------------------------\n");

	result = sum(num1, num2);
	printf("������ ��: %d\n", &result);
	return 0;
}