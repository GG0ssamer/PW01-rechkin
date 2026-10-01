#include <stdio.h>

int main(void){

	int i;
	i = 13;

	printf("[");
	printf("%d", i);
	printf(",");
	printf(" %d", i*2);
	printf(",");
	printf(" %d", i*i);
	printf("]");

	return 0;
}