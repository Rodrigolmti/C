#include <stdlib.h>
#include <stdio.h>

struct produto{
        char descricao[40];
        int codigo;
        double preco; /// compilar double aqui no code nao funciona nao sei porque
        int quantidade;
};



int main(){
        struct produto produto;
		
		
		printf("\nInforme a descriçao do produto [max 40 carcteres]: ");
        fflush(stdin);
		scanf("%s", &produto.descricao);

		printf("\nInforme o codigo do produto: ");
		fflush(stdin);
		scanf("%d",&produto.codigo);

		printf("\nInforme o preco do produto: ");
		fflush(stdin);
		scanf("%lf",&produto.preco);

		printf("\nInforme a quantidade em estoque: ");
		fflush(stdin);
		scanf("%d",&produto.quantidade);


		printf("\nProduto : %s",produto.descricao);
		printf("\nCodigo : %d",produto.codigo);
		printf("\nPreco : %lf",produto.preco);
		printf("\nEstoque : %d",produto.quantidade);
		



system("pause");
return 0;

}

