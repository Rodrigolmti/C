/*
 ============================================================================
 Name        : Fib.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fib(int fib) {
	if(fib == 1 || fib == 0) {
		return fib;
	} else {
		return fib(fib-1) + fib(fib-2);
	}
}



int main(void) {

	printf("%d",fib(6));

	return EXIT_SUCCESS;
}
