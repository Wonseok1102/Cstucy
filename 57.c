#include<stdio.h>
int main(void) {
	char c = 'A';
	char* cp = NULL;
	char** cpp = NULL;

	cp = &c;
	cpp = &cp;

	printf("%p %p %p\n", &c, &cp, &cpp);
	printf("%p %p %p\n", &c + 1, &cp + 1, &cpp + 1);

	printf("%c %p %p\n", c, cp, cpp);
	printf("%c %p %p\n", c + 1, cp + 1, cpp + 1);

	return 0;
}