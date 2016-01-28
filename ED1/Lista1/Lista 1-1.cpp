#include<stdio.h>
#include <stdlib.h>

int getInt(char x[50]="\nDigite um numero: "); //protótipo da função ou declaração com parametro default
float getFloat(char x[50]="\nDigite um numero: ");

int main ()
{
     int  Grade = getInt("Primeiro programa em C Ansi - Calculadora Basica \n\nEscolha uma opcao:\n 1-Soma\n 2-Subtracao\n 3-Multiplicacao\n 4-Divisao\n\nEscolha: ");

     switch( Grade )
     {
        case 1 : printf("\nA soma e: %d\n\n",getInt()+getInt());
                   break;
        case 2 : printf("\nA subtracao e: %.2f\n\n",getFloat()-getInt());
                   break;
        case 3 : printf("\nA multiplicacao e: %.2f\n\n",getFloat()*getFloat());
                   break;
        case 4 : printf("\nA divisao e: %.2f\n\n",getFloat()/getInt());
                   break;
        default  : printf( "Escolha invalida!\n" );
                   break;
     }
    	
    system("pause");
    return 0;
}

int getInt(char x[50])
{
    int num; 
    printf("%s",x);
    scanf("%d",&num);
    return num;
}

float getFloat(char x[50])
{
    float num; 
    printf("%s",x);
    scanf("%f",&num);
    return num;
}
