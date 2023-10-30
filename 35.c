#include<stdio.h>

void self_service(void);

int main(void) {

	self_service();
	return 0;
}

void self_service(void){
	static int i = 0;

	if (i > 5)
		return;
	printf("셀프서비스 %d회\n", i);
	++i;
	self_service();

}