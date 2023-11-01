#include<stdio.h>
int main(void) {
	int num = 10;
	int* ip = NULL;
	int** ipp = NULL;

	ip = &num;
	ipp = &ip;
	printf("%p %p %p\n", &num, &ip, &ipp);
	printf("%p %p %p\n", &num + 1, &ip + 1, &ipp + 1);

	printf("%d %p %p\n", num, ip, ipp);
	printf("%d %p %p\n", num + 1, ip + 1, ipp + 1);

	return 0;
}