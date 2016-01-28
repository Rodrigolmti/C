#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
bool validaN(int n);
void valoresVetor(int vet[],int n);
int main()
{
    int n;
    do
    {
        printf("\tDigite o valor n para popular o Vetor :\n\n");
        scanf("%d",&n);

    }
    while(!validaN(n));

    char vet[n]; // Popular Vetor

    valoresVetor(vet,n);
    printf("\n\tMaior numero do vetor e:  %d",meioVet(vet,n));

    return 0;
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

int meioVet(int vet[],int n)
{
        int meio;

        meio = round(n/2);
        meio = vet[meio];
        return meio;
}
