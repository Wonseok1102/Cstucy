#include<stdio.h>

int main(void) {
	int num;
	printf("���� �Է�:");
	scanf("%d", &num);

	if (num > 0)
		printf("����� num�� ����");
	else if (num == 0)
		printf("0�� num�� ����");
	else 
		printf("������ num������");
	printf("����� num�� ��: %d", &num);

	return 0;
}