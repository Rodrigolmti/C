#ifndef LISTA_H_
#define LISTA_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;
struct lista {
	char dado;
	Lista *prox;
};

//-----------------------------------------------

Lista* inicializa() {
	return NULL;
}

//-----------------------------------------------

Lista* insere(Lista *lista, char ch) {
	Lista *aux;
	aux = (Lista*) malloc(sizeof(Lista));
	aux->dado = ch;
	aux->prox = lista;
	return aux;

}

//-----------------------------------------------

void imprime(Lista *lista) {

	while (lista != NULL) {
		printf("%c\n", lista->dado);
		lista = lista->prox;
	}

}

#endif /* LISTA_H_ */
