#include<stdio.h>

int main(void) {
	char c = 'A';
	char* cp = NULL;

	cp = &c;

	printf("%p %p %p\n", &c, cp, &cp);
	printf("%c %c \n", c, *cp);

	return 0;
}