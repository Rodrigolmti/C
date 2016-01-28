#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool validaN(int n);
void valoresVetor(int vet[],int n);

int main(){

    int n,u;
    do
    {
        printf("\tDigite o valor n para popular o Vetor :\n\n");
        scanf("%d",&n);

    }
    while(!validaN(n));

    char vet[n];
 valoresVetor(vet,n);


    for(u=n;u>=1;u--){
                      printf("O numero %d %d\n",u, vet[u]);

    }





    return 0;
    system("PAUSE");

}


bool validaN(int n)
{

    if(n<=0)
    {

        printf("\tInformar um valor maior que 0\n" );
        return false;
    }



    return true;
}

void valoresVetor(int vet[],int n)
{
    int i;
    for(i = 1; i<n+1; i++)
    {
        printf("\tInforme o numero %d: \t",i);
        scanf("%d",&vet[i]);
    }

}
