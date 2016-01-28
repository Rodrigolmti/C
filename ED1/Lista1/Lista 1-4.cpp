#include <stdio.h>
#include <stdlib.h>

int main ()
{         
	float salario, vendas, comissao, salarioFinal;
	char nome[50];

     do{
         fflush(stdin);//Para limpar o buffer em Windows
         
         printf("\n<><><><><> Sistema de gestao de vendedores <><><><><>\n\n");
         
         printf(">>> Digite o nome do funcionario: ");
         gets(nome);
         printf(">>> Digite o salario: R$ ");
         scanf("%f",&salario);
         printf(">>> Informe a quantidade de vendas deste no mes: R$ ");
         scanf("%f",&vendas);
         // Cálculo da comissão e salário final
         if (vendas<=salario) 
         {comissao = 0.15 * vendas;}
         else {comissao = 0.20 * vendas;}
         salarioFinal = salario + comissao;
         system("cls");//limpar tela
    
         printf(">>>>>>>>>> RESUMO <<<<<<<<<<\n");
         printf("-- Funcionario: %s\n",nome);
         printf("-- Salario: R$ %.2f\n",salario);
         printf("-- Salario Final (salario + comissao): R$ %.2f\n",salarioFinal);
         printf(">>>>>>>>>><><><><><<<<<<<<<<\n\n");
     
     }while(salario!=-1);
       	
     system("pause");
     return 0;

}

