#include<stdio.h>

int main(void) {

	int num;

	printf("��� �޴��� �����Ͻðڽ��ϱ�?:\n");
	printf("\t(1)¥���\n");
	printf("\t(2)«��\n");
	printf("\t(3)������\n");

	printf("��ȣ ����\n");

	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("¥����� 5000���Դϴ�.\n");
		break;
	case 2:
		printf("«���� 6000���Դϴ�.\n");
		break;
	case 3:
		printf("�������� 20000���Դϴ�.\n");
		break;
	default:
		printf("���� �޴��Դϴ�.\n");
	}

	printf("�����մϴ�.\n");

	return 0;
}