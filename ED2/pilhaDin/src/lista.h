#include <stdio.h>
#include <stdlib.h>

#ifndef LISTA_H_
#define LISTA_H_

typedef struct lista Lista;

struct lista{
	char dado;
	Lista *prox;
};
//----------------------------------------------------------------------------
Lista* inicializa(){
	return NULL;
}
//----------------------------------------------------------------------------
int vazia(Lista *lista){
	return !lista;
}
//----------------------------------------------------------------------------
Lista* insere(char dado, Lista *lista){

	Lista *aux;
	aux = (Lista *) malloc(sizeof(Lista));
	aux->dado = dado;

	aux->prox = lista;

	return aux;
}
//----------------------------------------------------------------------------
void imprime(Lista *lista){

	Lista *aux;

	aux = lista; //aux = 150;

	if(aux != NULL){

		while(aux != NULL){
			printf("lista --> %c\n", aux->dado);
			aux = aux->prox;
		}
	}
}
//----------------------------------------------------------------------------
void imprimeRecursivo(Lista *lista) {
	 if(lista != NULL){
		   imprimeRecursivo(lista->prox);
		   printf("lista --> %c\n", lista->dado);
	   }
}
//----------------------------------------------------------------------------
Lista* busca(Lista* lista, char ch){

	Lista *aux;

	aux = lista;

	if(aux != NULL){

		while(aux != NULL){

			if(aux->dado == ch)
				return aux;

			aux = aux->prox;
		}
	}
	return aux;
}
//----------------------------------------------------------------------------
int pertence(Lista* lista, char ch){

	return (lista  && ((lista->dado == ch) || pertence(lista->prox, ch)));

//	if(lista != NULL){
//			if (lista->dado != ch)
//				return 1;
//			else
//				return pertence(lista->prox, ch);
//	}
//
//	return 0;

//	Lista *aux;
//
//	aux = lista;
//
//	if(aux != NULL){
//		while(aux != NULL){
//
//			if(aux->dado == ch)
//				return 1;
//
//			aux = aux->prox;
//		}
//	}
//	return 0;
}
//----------------------------------------------------------------------------
Lista* removeInicio(Lista* lista){
	Lista *aux;
	aux = lista;

	if(!vazia(aux)){
		lista = lista->prox;
		free(aux);
	}

	return lista;
}
//----------------------------------------------------------------------------
Lista* removeQQ(Lista* lista,char ch){
	Lista *aux = lista;

	//remove incio
	if(aux->dado == ch){
		lista = lista->prox;
		free(aux);
	}else{
		//remove qualquer posição
		while(aux->prox != NULL){
			if(aux->prox->dado == ch){
				Lista *aux2 = aux->prox; //Guarda o cara a ser removido
				aux->prox = aux2->prox; //faz a ligação do dado anterior ao *removido e o prox do *removido
				free(aux2);
			}else{
				aux = aux->prox;
			}
		}
	}

	return lista;
}
//----------------------------------------------------------------------------
Lista* libera(Lista* lista){
	while(lista->prox != NULL){
		lista = removeInicio(lista);
	}
	return lista;
}
//----------------------------------------------------------------------------
Lista* liberaRecursivo(Lista* lista){
	if(!vazia(lista)){
		return liberaRecursivo(removeInicio(lista));
	}
	return lista;

}
//----------------------------------------------------------------------------
Lista* circular(Lista* lista){
	Lista *aux = lista;
	if(vazia(lista)){
		return lista;
	}else{
		while(aux->prox != NULL){
			aux = aux->prox;
		}
		aux->prox = lista;
	}
	return lista;
}
//----------------------------------------------------------------------------
int contador(Lista *lista){
	int cont = 0;
	if(vazia(lista)){
		return 0;
	}else{
		while(lista != NULL){
			cont++;
			lista = lista->prox;
		}
		return cont;
	}
}
//----------------------------------------------------------------------------


#endif /* LISTA_H_ */
