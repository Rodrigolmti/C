#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *ultimo_nome(char *nome_completo){
            if(strrchr(nome_completo,' ')){

                      return  strrchr(nome_completo,' ');

        }else{

                return nome_completo;

        }

}

char *verificaSobrenome(char *nome_completo1,char *nome_completo2){
        char *retorno;
        char *aux1,*aux2;

        aux1 =ultimo_nome(nome_completo1);
        aux2=ultimo_nome(nome_completo2);


        if(strcmp(aux1,aux2)==0){
            retorno = (malloc(strlen(aux1)));
           return strcpy(retorno,aux1);
        }else{

             return NULL;
        }

  return NULL;
}




void main(){



char nome[50] = "Steven jobs";
char nome2[50] = "Steven pizza";

char *p = ultimo_nome(nome);
p++;
printf("Sobrenome:%s \n", p );

char *p2 = ultimo_nome(nome2);
p2++;
printf("Sobrenome:%s \n", p2 );






if(verificaSobrenome(nome,nome2)){

char *nomesobrenome= verificaSobrenome(nome,nome2);
nomesobrenome++;
printf("Sobrenome iguais:%s \n", nomesobrenome );
}else{
     printf("Nao e possivel alocar dados\n" );

}

system("pause");


}
