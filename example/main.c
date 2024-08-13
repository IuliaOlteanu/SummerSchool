#include <stdio.h>
#include <time.h>
#include "timing.h"


int main(){
	clock_t start = clock();
	int one_for_success = check_with_bad_compare("ThisWillFailNO");
	clock_t end = clock();
	printf("Result %d in %f seconds.\n", one_for_success, (float)(end - start) / CLOCKS_PER_SEC);

	return 0;
}