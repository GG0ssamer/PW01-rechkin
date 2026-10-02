#include <stdio.h>

int phase_1(void){
	printf("ALPHA ");
	phase_2();
	printf("GAMMA ");
}

int phase_2(void){
	printf("BETA ");
}

int main(void){
	
	printf("START ");
	phase_1();
	printf("END\n");

	return 0;
}
