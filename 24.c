#include<stdio.h>

int main(void) {

	char ch;

	printf("���ĺ� ���ڸ� �Է��ϼ��� (����� q�Է�)");
	
	for (;;) {
		scanf("%c", &ch);
		if (ch == 'q')
			break;
	}

	printf("���α׷��� �����մϴ�\n");

	return 0;
}