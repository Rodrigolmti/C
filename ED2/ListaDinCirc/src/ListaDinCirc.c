/*
 ============================================================================
 Name        : listaDinCirc.c
 Author      : Prof. Rafael Nunes
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//------------------------------------------------------
typedef struct lista TLista;
struct lista {
	char dado;
	TLista *prox;
};
//------------------------------------------------------
TLista* inicializa() {
	return NULL;
}
//------------------------------------------------------
TLista* insere(TLista *lista, char ch){
	TLista *aux;
	aux = (TLista*) malloc(sizeof(TLista));
	aux->dado = ch;

	if(lista != NULL){
		//Ligacao do novo reg a lista existente
		aux->prox = lista;

		//Achar o ultimo reg
		TLista *aux2 = lista;
		while(aux2->prox != lista)
			aux2 = aux2->prox;

		//Ligo o ultimo reg ao aux
		aux2->prox = aux;
	}
	else{
		aux->prox = aux;
	}

	return aux;
}
//------------------------------------------------------
void imprimeCirc(TLista *lista) {

	TLista *aux;

	aux = lista;

	if (aux != NULL) {

		do{
			printf("lista --> %c\n", aux->dado);
			aux = aux->prox;
		}while(aux != lista);

	}
}
//------------------------------------------------------
int vazia(TLista *lista){
	return !lista;
}
//------------------------------------------------------
TLista* busca(TLista *lista, char ch) {
	TLista * aux;

	aux = lista;

	if(aux != NULL) {
		do {

			if(aux->dado == ch) {
				return aux;
			} else {
				aux = aux->prox;
			}

		}while(aux != lista);
	}

	return NULL;
}
//------------------------------------------------------
TLista* libera(TLista *lista) {

	if(lista != NULL) {

		TLista *aux = lista->dado;

		while(aux != lista) {
			TLista *aux2 = aux;
			aux = aux->prox;
			free(aux2);
			lista->prox = aux;
		}
		free(aux);
	}
	return inicializa();
}
//------------------------------------------------------
TLista* removeQQ(TLista* lista, char ch) {

	TLista* aux, *aux2;
	aux = lista;
	aux2 = lista;

	if(aux->dado == ch) {
		free(aux2);
	} else {
		if(aux->dado == ch) {
			while(aux->prox != lista) {
				aux = aux->prox;
			}
			aux->prox = aux2->prox;
			lista = lista->prox;
			free(aux2);

		} else {

			while(aux->prox != lista) {
				if(aux->prox->dado == ch) {
					aux2 = aux->prox;
					aux->prox = aux->prox->prox;
					free(aux2);
				} else {
					aux = aux->prox;
				}
			}
		}
	}
	return lista;

}
//------------------------------------------------------
int main(void) {
	setbuf(stdout, NULL);
	TLista* listac;

	listac = inicializa();

	listac = insere(listac, 'F');

//	imprimeCirc(listac);
//	printf("busca ->%c\n", busca(listac, 'C')->dado);

	listac = removeQQ(listac, 'F');
	imprimeCirc(listac);

	printf("Teste");

	return EXIT_SUCCESS;
}





