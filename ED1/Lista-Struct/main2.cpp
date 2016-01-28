#include <stdlib.h>
#include <stdio.h>

typedef struct produtos{
	char descricao[40];
	int codigo;
	double preco; 
	int quantidade;
} produto;

typedef struct {
    int id;
    char nome[40];
    produto *listaProdutos;        
} categoria;

produtos *alocaProdutos(produtos *pr){
	
	pr = (produtos *) malloc(sizeof (produtos));
	
	if (!pr){
        printf ("** Erro: Memoria Insuficiente **\n");
    	exit;
	}else{
          printf ("** Memoria Alocada com Sucesso **\n");
    }
    return pr;
}

void preencherProduto(produtos *pr, int quantidade){
	int i=0;
	
		for(i=0;i<quantidade;i++){
			do{
				printf("\n----- Preenchendo as prateleiras -----");
				printf("\nInforme o nome do produto: ");
				fflush(stdin);
				scanf("%s", &pr[i].descricao);
			}while(pr[i].descricao==NULL);
			
			do{
				printf("\nInforme o codigo limite 50: ");
				fflush(stdin);
				scanf("%i", &pr[i].codigo);
			}while(!((pr[i].codigo>0)&&(pr[i].codigo<50)));
			
			do{
				printf("\nInforme o preco do produto: ");
				fflush(stdin);
				scanf("%lf", &pr[i].preco);
			}while(pr[i].preco<0);
		
			do{
				printf("\nInforme a quantidade para stock: ");
				fflush(stdin);
				scanf("%i", &pr[i].quantidade);
			}while(pr[i].quantidade<0);
		}	
}

int produtosEmFalta(produtos * pr, int quantidade) {
	int i;
		for(i=0;i<quantidade;i++){
			if(pr[i].quantidade == 0){
				printf("\nProdutos em Falta: \n");
				printf("\tNome %s\n", pr[i].descricao);
				printf("\tCodigo do produto %i\n", pr[i].codigo);
				printf("\tPreco do produto %i\n", pr[i].preco);
				printf("\tQuantidade de produtos %i\n", pr[i].quantidade);
			}
		}
}

int lisitarProdutos(produtos *pr, int quantidade){
		int i;
		for(i=0;i<quantidade;i++){
			printf("\nLog de produto: \n");
			printf("\tNome %s\n", pr[i].descricao);
			printf("\tCodigo do produto %i\n", pr[i].codigo);
			printf("\tPreco do produto %i\n", pr[i].preco);
			printf("\tQuantidade de produtos %i\n", pr[i].quantidade);
		}	
}

int main(void)
{	
	int qtd;
	int i;
	printf("---- Sistema de Cadastro de Produtos ----");
	printf("\n----- Definindo o tamanho do Stock -----\n");
	
	produtos *pr = NULL;
	
	pr = alocaProdutos(pr, );
	
	preencherProduto(pr, qtd);

	produtosEmFalta(pr, qtd);
	
	lisitarProdutos(pr, qtd);
	system("pause");
	return 0;
}
