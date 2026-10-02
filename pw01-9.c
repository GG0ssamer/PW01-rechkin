#include <stdio.h>

int phase_1(void){
	printf("ALPHA\n");
	phase_2();
	printf("GAMMA\n");
}

int phase_2(void){
	printf("BETA\n");
}

int main(void){
	
	printf("START\n");
	phase_1();
	printf("END\n");

	return 0;
}