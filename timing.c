#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "timing.h"

char ohno[] = "DoNotDecompile";

int check_with_bad_compare(char* a){
	for(int i=0; i < strlen(ohno); i++){
		if(a[i] != ohno[i])
			return 0;
		for(int j = 0; j < 50000000; j++);
	}
	return 1;
}