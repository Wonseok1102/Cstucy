#include<stdio.h>

int main(void) {
	char ch;

	printf("���� ������ �����ϼ���?\n");
	printf("\t(A)pple\n");
	printf("\t(B)anana\n");
	printf("\t(G)rape\n");

	scanf("%c", &ch);

	printf("----------------------------------");

	switch (ch) {
	case 'A':
		printf("����� 1000���Դϴ�.\n");
		break;
	case 'B':
		printf("�ٳ����� 2000���Դϴ�.\n");
		break;
	case 'G':
		printf("������ 5000���Դϴ�.\n");
		break;
	default:
		printf("���°����Դϴ�.\n");

	}

	printf("�����մϴ�.\n");

	return 0;
}