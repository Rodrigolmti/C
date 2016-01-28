#include "lista.h"

//---------------------------------------------------
typedef struct pilha Pilha;
struct pilha{
	Lista *topo;
};
//---------------------------------------------------
Pilha* criaPilha(){

	Pilha *aux = (Pilha*) malloc(sizeof(Pilha));

	aux->topo = inicializa();

	return aux;
}


//---------------------------------------------------
void push(Pilha *pilha, char ch){
	pilha->topo = insere(ch,pilha->topo);
}
//---------------------------------------------------
void pop(Pilha *pilha) {
	pilha->topo = removeInicio(pilha->topo);
}
//---------------------------------------------------

void imprimePilha(Pilha *pilha) {
	imprime(pilha->topo);
}

//---------------------------------------------------


//---------------------------------------------------
int main(void) {

	Pilha *pilhax;

	pilhax = criaPilha();

	push(pilhax, 'F');
	push(pilhax, 'A');
	push(pilhax, 'C');
	push(pilhax, 'E');

	imprimePilha(pilhax);

	printf("-------------\n");
	pop(pilhax);

	imprimePilha(pilhax);

	return EXIT_SUCCESS;
}
