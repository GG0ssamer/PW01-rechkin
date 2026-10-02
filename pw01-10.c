#include <stdio.h>

int ping(void){

	printf("PING");
	return 0;
}

int pong(void){

	printf("PONG");
	return 0;
}

int handshake(void){

	ping();
	printf("-");
	pong();
	printf("-");
	ping();

	return 0;
}

int main(void){
	
	const int NODE_ID = 28;
	int packet_size, total_transfer;
	packet_size = NODE_ID * 4;
	total_transfer = packet_size * 3;

	handshake();
	printf(":");
	printf("%d\n", packet_size);

	handshake();
	printf(":");
	printf("%d\n", total_transfer);
	printf("SESSION:CLOSED\n");

	return 0;
}