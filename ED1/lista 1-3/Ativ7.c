#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
bool validaN(int n);
void valoresVetor(int vet[],int n);
bool findVet(int vet[],int n,int f);
int findVetSum(int vet[],int n,int f);

int main()
{
    int n,f,sum;
    do
    {
        printf("\tDigite o valor n para popular o Vetor :\n\n");
        scanf("%d",&n);

    }
    while(!validaN(n));

    char vet[n]; // Popular Vetor

    valoresVetor(vet,n);

    printf("\n\t Informe o valor procurado : ");
    scanf("%d",&f);


    sum= findVetSum(vet,n,f);
    if(sum==0)
    {
        printf("\n\t -- Valor nao encontrado -- ");
    }else{
            printf("\n\t Numero de ocorrencias : %d", sum);
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
        if(f==vet[i])
        return true;
    }
    return false;


}
int findVetSum(int vet[],int n,int f)
{
    int i,sum=0;
   // if(findVet(vet,n,f))
    //{

        for(i = 0; i<n; i++)
        {
            if(f==vet[i]){
            sum=sum+1;}
        }

 //   }
 //   else
  //  {
  //      sum =0;
  //  }

    return  sum;
}

