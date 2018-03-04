#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){

	int ch;
	whiler((ch = getchar()) != EOF ){
		putchar(toupper((ch)));
	}
	exit(0);
}