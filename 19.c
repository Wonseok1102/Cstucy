#include<stdio.h>

int main(void) {

	int age;

	printf("���� �Է�:");
	scanf("%d", &age);

	if (age >= 15 && age <= 100)
		printf("ȸ������ ����\n");
	else
		printf("ȸ������ �Ұ���\n");
	return 0;
}