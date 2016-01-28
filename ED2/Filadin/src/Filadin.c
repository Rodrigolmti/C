#include "lista.h"

typedef struct fila Fila;
struct fila{
	Lista *ini;
	Lista *fim;
};

//-------------------------------------------------------

Fila* criaFila(){
	Fila *aux = (Fila*) malloc(sizeof(Fila));
	aux->ini = NULL;
	aux->fim = NULL;
	return aux;
}

//-------------------------------------------------------

void insereFila(Fila *fila, char ch){
	Lista* aux;
	aux = (Lista*) malloc(sizeof(Lista));
	aux->dado = ch;
	aux->prox = NULL;

	if(fila->ini == NULL){//Fila de um caractere
		fila->fim = aux;
		fila->ini = aux;
	}else{
		fila->fim->prox = aux;
		fila->fim = aux;
	}

//	fila->fim->prox = aux;
//	fila->fim = aux;
//aux->ini = NULL;

}

//-------------------------------------------------------

void imprimeFila(Fila *fila){
	imprime(fila->ini);
}

//-------------------------------------------------------

int main(void) {

	Fila *fila;

	fila = criaFila();

	insereFila(fila,'F');
	insereFila(fila,'A');
	insereFila(fila,'C');
	insereFila(fila,'E');

	imprimeFila(fila);

	return EXIT_SUCCESS;
}
