/*
 ============================================================================
 Name        : ListaDin.c
 Author      : Rodrigo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//int palindrome(char ch[], int num) {
//
//	if(num <= 1) {
//		return 1;
//	} else {
//		if(ch[0] == ch[num-1]) {
//			palindrome(ch+1,num-2);
//			return 1;
//		} else {
//			return palindrome(ch+1,num-2);
//		}
//	}
//	return 0;
//}

int fib(int n) {
	if(n == 0 || n == 1) {
		return n;
	} else {
		return fib(n-1) + fib(n-2);
	}
}

int main(void) {


//	char ch = 'ARARA';
//	printf("%d", palindrome(ch, strlen(ch)));

	printf("%d", fib(5));
	return EXIT_SUCCESS;
}
