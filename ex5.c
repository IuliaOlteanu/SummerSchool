#include <stdio.h>
#include <string.h>

void extra(){
	puts("How did you get here?!\n");
}

void func(){
	char pass[9] = "mysecret";
	pass[8] = '\0';
	char name[16];
	char input[9];
	puts("Hi, what's your name?\n");
	gets(name);
	puts("Give me the password to proceed\n");
	scanf("%8s\n",input);
	if(strncmp(input, pass, 8) == 0)
		puts("congrats!");
}

int main(){
	func();
	return 0;
}