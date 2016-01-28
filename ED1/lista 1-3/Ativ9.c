#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool validaN(int n);
int main()
{
    int n,n1,n2,temp,i,u,j;
    do
    {
        printf("\tDigite o valor n para popular o Vetor 1 :\n");
        scanf("%d",&n1);

    }
    while(!validaN(n1));





    char vet1[n1]; // Popular Vetor
    valoresVetor(vet1,n1);
    char vet2[n2];
    valoresVetor(vet2,n2);
    char vet3[n];

    for(i=0;i<n;i++){


        vet3[i]=vet1[i]+vet2[i];
        printf("O numero %d %d\n",u, vet3[i]);

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

