/*
 ============================================================================
 Name        : ListaDinDupEnc.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct lista TLista;
struct lista {
	char dado;
	TLista *prox;
	TLista *ant;
};

TLista* inicializa() {
	return NULL;
}

int vazia(TLista *lista){
	return !lista;
}

TLista* insere(TLista *lista, char ch){
	TLista *aux;
	aux = (TLista*) malloc(sizeof(TLista));
	aux->dado = ch;

	aux->ant = inicializa();
	aux->prox = lista;

	if(lista != NULL) {
		lista->ant = aux;
	}

	return aux;

}

void imprime(TLista *lista) {

	TLista *aux;

	aux = lista;

	if (aux != NULL) {

		while(aux != NULL) {
			printf("lista --> %c\n", aux->dado);
			aux = aux->prox;
		}

	}
}

TLista* libera(TLista* lista){

	TLista *aux = lista;

	while(aux != NULL){

		lista = lista->prox;

		if(aux->prox != NULL){
		}
		free(aux);
		aux = lista;
	}
	return aux;
}

TLista* busca(TLista* lista, char ch){


	if(lista != NULL){
		return lista;
	}

	TLista *aux = lista;

	while (aux != NULL) {

		if(aux->dado == ch)
			return aux;

		aux = aux->prox;
	}
	return aux;
}

TLista* removeQQ(TLista *lista, char ch){

	TLista *aux = busca(lista,ch);

	if(aux == NULL) {
		return lista;
	}

	if(aux->ant == NULL && aux->prox==NULL){
		lista = lista->prox;
	}else if(aux->ant == NULL){
		lista = lista->prox;
		lista->ant = NULL;
	}else{

		aux->ant->prox = aux->prox;

		if(aux->prox != NULL){
			aux->prox->ant = aux->ant;
		}

	}

	free(aux);

	return lista;

}

int main(void) {
	setbuf(stdout, NULL);

	TLista* lista = inicializa();

	lista = insere(lista, 'F');
	lista = insere(lista, 'A');
	lista = insere(lista, 'C');
	lista = insere(lista, 'E');

	//printf("Lista vazia -> %d\n", vazia(lista));

	//printf("Dado resultante -:> %c", lista->prox->prox->prox->ant->ant->ant->dado);

	//imprime(lista);

	lista = removeQQ(lista, 'F');

	//printf("\n");

	imprime(lista);

	//lista = libera(lista);

	//imprime(lista);



	return EXIT_SUCCESS;
}
