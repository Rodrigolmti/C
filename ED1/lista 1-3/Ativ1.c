#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

 bool validaN(int n);
int main(){
int n;
do{
printf("\tDigite o valor n para popular o Vetor :\n");
scanf("%d",&n);

}while(validaN(n));



fflush(stdin);

return 0;
}


 bool validaN(int n){

if(n<=0){

    printf("\tInformar um valor maior que 0\n" );
return false;
}



return true;
}

