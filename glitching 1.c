#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STATE_OK 1
#define STATE_FAIL 2
#define STATE_GENERAL_ERROR 3
#define STATE_STILL_NOT_OK 4

void func(){
	printf("Executing very sensitive code...\n");
}

int main(){
	srand(time(NULL));
	int r = rand();

	uint8_t state = STATE_GENERAL_ERROR;
	if(r % 4 == 2){
		state ^= 1;
	}
	if(STATE_OK == state){
		func();
	}else{
		if(r % 4 == 3)
			func();
	}
	return 0;
}