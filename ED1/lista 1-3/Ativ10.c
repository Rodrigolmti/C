#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool validaN(int n);
void ordenaVetor(int vet[],int n);
void printVet(int vet[],int n);
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

    ordenaVetor(vet1,n1);
    printVet(vet1,n1);


    do
    {
        printf("\tDigite o valor n para popular o Vetor :\n");
        scanf("%d",&n2);

    }
    while(!validaN(n2));

    char vet2[n2];

    valoresVetor(vet2,n2);
    ordenaVetor(vet2,n2);
    printVet(vet2,n2);


    n =n1+n2;
    char vet3[n];
    for(u=0; u<n; u++)
    {
                vet3[u+n1] = vet2[u];

        vet3[u] = vet1[u];
        printf("%d \n",vet3[u]);
    }

    printf("\n  \t\t ----- Vetor Ordenado -----\n");
    ordenaVetor(vet3,n);
    printVet(vet3,n);



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
    for(i = 0; i<n; i++)
    {
        printf("\tInforme o numero %d: \t",i);
        scanf("%d",&vet[i]);
    }

}

void ordenaVetor(int vet[],int n)
{
    long c, d, t;

    for (c = 0 ; c < ( n - 1 ); c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
            if (vet[d] > vet[d+1])
            {

                t         = vet[d];
                vet[d]   = vet[d+1];
                vet[d+1] = t;
            }
        }
    }

}

void printVet(int vet[],int n)
{
    int u;
    for(u =0; u<n; u++)
    {
        printf("\tO numero %d %d\n",u, vet[u]);

    }
}
