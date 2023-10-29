#include<stdio.h>

int main(void) {
	char ch;

	printf("무슨 과일을 좋아하세요?\n");
	printf("\t(A)pple\n");
	printf("\t(B)anana\n");
	printf("\t(G)rape\n");

	scanf("%c", &ch);

	printf("----------------------------------");

	switch (ch) {
	case 'A':
		printf("사과는 1000원입니다.\n");
		break;
	case 'B':
		printf("바나나는 2000원입니다.\n");
		break;
	case 'G':
		printf("포도는 5000원입니다.\n");
		break;
	default:
		printf("없는과일입니다.\n");

	}

	printf("감사합니다.\n");

	return 0;
}