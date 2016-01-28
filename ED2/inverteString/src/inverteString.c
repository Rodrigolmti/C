/*
 ============================================================================
 Name        : inverteString.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char inverte(char *ch, int tamanho) {

	//char aux[100];

	if(tamanho > 0) {

		//aux = ch[tamanho-1];
		ch[-1] = ch[0];
		ch[0] = aux;
		inverte(ch[+1], tamanho-2);
	}

	return ch;
}

int main(void) {

	char str[100]="TEXTO";
	printf("Palindromo --> %d\n", inverte(str, strlen(str)));

	return EXIT_SUCCESS;
}
