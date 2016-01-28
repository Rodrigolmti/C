#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool validaN(int n);
int main()
{
    int n,temp,i,u,j;
    do
    {
        printf("\tDigite o valor n para popular o Vetor :\n");
        scanf("%d",&n);

    }
    while(!validaN(n));

    char vet[n]; // Popular Vetor

    for(u =0;u<n;u++){
        printf("Digite o %n numero = ",u);
        scanf("%d",&vet[u]);
    }


        for (i = 0; i < n; i++)

    {

        for (j = 0; j < (n - i - 1); j++)

        {

            if (vet[j] > vet[j + 1])

            {

                temp = vet[j];

                vet[j] = vet[j + 1];

                vet[j + 1] = temp;

            }

        }

    }

    for(u =0;u<n;u++){
                      printf("O numero %d %d\n",u, vet[u]);

    }
    fflush(stdin);

    return 0;
}


bool validaN(int n)
{

    if(n<=0)
    {

        printf("\tInformar um valor maior que 0 \n" );
        return false;
    }



    return true;
}


