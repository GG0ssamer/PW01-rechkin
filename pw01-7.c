#include <stdio.h>

int load_mem(void){
	printf("MEM_OK");
	//return 0; my bad(
}

int load_cpu(void){
	printf("CPU_OK");
	//return 0; same... (helped by lexa_white)
}

int main(void){

	printf("BOOT:");
	load_mem();
	printf("|");
	load_cpu();
	printf(":END\n");

	return 0;
}