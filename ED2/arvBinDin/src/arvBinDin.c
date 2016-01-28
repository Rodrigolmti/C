/*
 ============================================================================
 Name        : arvBinDin.c
 Author      : Rodrigo Lopes
 Version     :
 Copyright   : Your copyright notice
 Description : Algoritimo de arvore
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//------------------------------------------------
typedef struct arv TArv;
struct arv{
	char dado;
	TArv *esq;
	TArv *dir;
};
//------------------------------------------------
TArv* vazio() {
	return NULL;
}
//------------------------------------------------
TArv* criaNo(char ch, TArv *esq, TArv *dir) {
	TArv *aux = (TArv*)malloc(sizeof(TArv));
	aux->dado = ch;
	aux->esq = esq;
	aux->dir = dir;
	return aux;
}
//------------------------------------------------
TArv *insere(TArv* arv, char ch){

	if(arv == vazio()) {
		arv = criaNo(ch, vazio(),vazio());
	} else if(ch < arv->dado) {
		arv->esq = insere(arv->esq, ch);
	} else if(ch > arv->dado) {
		arv->dir = insere(arv->dir, ch);
	}

	return arv;
}
//------------------------------------------------
int pertence(TArv* arv, char ch) {

	if(arv != vazio()) {
		if(ch == arv->dado) {
			return 1;
		} else if(ch < arv->dado) {
			return pertence(arv->esq, ch);
		} else if(ch > arv->dado) {
			return pertence(arv->dir, ch);
		}
	}

	return 0;
}
//------------------------------------------------
TArv *busca(TArv *arv,char ch) {

	if(arv != vazio()) {
		if(ch == arv->dado) {
			return arv;
		} else if(ch < arv->dado) {
			return busca(arv->esq, ch);
		} else if(ch > arv->dado) {
			return busca(arv->dir, ch);
		}
	}

	return arv;
}
//------------------------------------------------
void imprimeNo(TArv *arv) {

	TArv *aux = arv;

	if (aux != vazio()) {
		printf("(%c", aux->dado);
		imprimeNo(aux->esq);
		imprimeNo(aux->dir);
		printf(")");
	} else {
		printf("(_)");
	}

}
//------------------------------------------------
TArv* removeQQ(TArv* arv, char ch) {

	if(arv == vazio()) {
		return vazio();
	} else if(ch < arv->dado) {
		arv->esq = removeQQ(arv->esq, ch);
	} else if(ch > arv->dado) {
		arv->dir = removeQQ(arv->dir, ch);
	} else if(arv->esq == vazio() && arv->dir == vazio()) {
		free(arv);
		arv = vazio();
	} else if(arv->esq == vazio()) {
		TArv *aux = arv;
		arv = aux->dir;
		free(aux);
	} else if(arv->dir == vazio()) {
		TArv *aux = arv;
		arv = aux->esq;
		free(aux);
	} else {
		TArv *aux2 = arv->esq;

		while(aux2->dir != NULL) {
			aux2 = aux2->dir;
		}

		arv->dado = aux2->dado;
		aux2->dado = ch;

		arv->esq = removeQQ(arv->esq, ch);
	}

	return arv;
}
//------------------------------------------------
int main(void) {

	TArv *arvx = vazio();

	arvx = insere(arvx, 'M');
	arvx = insere(arvx, 'E');
	arvx = insere(arvx, 'C');
	arvx = insere(arvx, 'A');
	arvx = insere(arvx, 'D');
	arvx = insere(arvx, 'H');
	arvx = insere(arvx, 'K');
	arvx = insere(arvx, 'R');
	arvx = insere(arvx, 'P');
	arvx = insere(arvx, 'O');
	arvx = insere(arvx, 'U');
	arvx = insere(arvx, 'S');
	arvx = insere(arvx, 'X');

	printf("#-------------------------------------------Arvore Dinamica--------------------------------------#\n");

	printf("Arvore -> ");
	imprimeNo(arvx);

	printf("\nPertence -> %d", pertence(arvx, 'R'));

	printf("\nBusca -> %p", busca(arvx, 'R'));

	printf("\n#-------------------------------------------Função Remove----------------------------------------#\n");

	arvx = removeQQ(arvx, 'R');

	printf("Arvore Dois Filhos-> ");
	imprimeNo(arvx);

	arvx = removeQQ(arvx, 'P');

	printf("\nArvore Um Filho-> ");
	imprimeNo(arvx);

	arvx = removeQQ(arvx, 'X');

	printf("\nArvore Sem Filhos-> ");
	imprimeNo(arvx);

	printf("\n#------------------------------------------------------------------------------------------------#\n");

	return EXIT_SUCCESS;
}
