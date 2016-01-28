#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
bool validaN(int n);
void valoresVetor(int vet[],int n);
bool findVet(int vet[],int n,int f);
int main()
{
    int n,f;
    do
    {
        printf("\tDigite o valor n para popular o Vetor :\n\n");
        scanf("%d",&n);

    }
    while(!validaN(n));

    char vet[n]; // Popular Vetor

    valoresVetor(vet,n);

    printf("/n/t Informe o valor procurado : ");
    scanf("%d",&f);

    if(findVet(vet,n,f))
    {
        printf("\n\tValor encontrado : ");

    }

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

bool findVet(int vet[],int n,int f)
{
   int i;
    for(i = 0; i<n; i++)
    {
        if(f==vet[i]);

        return true;
    }
    return false;


}
