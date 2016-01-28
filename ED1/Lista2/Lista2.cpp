#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>


void exercicio1();
void exercicio2();
void exercicio3();
void exercicio4();
void exercicio5();
void exercicio6();
void exercicio7();
void exercicio8();
void exercicio9();
void exercicio10();
void exercicio11();
void exercicio12();
void exercicio13();
void exercicio14();
void exercicio15();
void exercicio16();

int main()
{
	int a,numero;
	printf("######Lista de exercicios ED1######\n");
	printf("Opcoes de 1 a 16\n");
	printf("Informe o exercicio: ");
	scanf("%d", &numero);
	
	switch (numero) {
		
		case 1: 
			exercicio1();
			break;
		case 2:
			exercicio2();
			break;
		case 3:
			exercicio3();
			break;
		case 4:
			exercicio4();
			break;
		case 5:
			exercicio5();
			break;
		case 6:
			exercicio6();
			break;
		case 7:
			exercicio7();
			break;
		case 8:
			exercicio8();
			break;
		case 9:
			exercicio9();
			break;
		case 10:
			exercicio10();
			break;
		case 11:
			exercicio11();
			break;
		case 12:
			exercicio12();
			break;
		case 13:
			exercicio13();
			break;
		case 14:
			exercicio14();
			break;
		case 15:
			exercicio15();
			break;
		case 16:
			exercicio16();
			break;
			
		default: 
			printf("Invalido!");
			break;
	}
	
	system("PAUSE");
    return 0;  
}

//exercicio um
void exercicio1(){
	int tamanhoVetor;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];
    printf("Informe os numeros para o vetor: ");
      for (int i=0; i < tamanhoVetor ;i++) 
      {
          scanf("%d", &vetor[i]);    
      }
}
      
//Exercicio dois
void exercicio2(){
    int tamanhoVetor=0;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    
    int vetor[tamanhoVetor];
    
    printf("Informe os numeros para o vetor: ");
      for (int i=0; i < tamanhoVetor ;i++) 
      {
          scanf("%d", &vetor[i]);    
      }
      
    int aux=0;
    for(int a=0; a < tamanhoVetor;a++) {
        for(int b=0; b < tamanhoVetor;b++) {
            if(vetor[a] < vetor[b]) {
                        
            aux = vetor[a];
            vetor[a] = vetor[b];
            vetor[b] = aux;            
            }        
        }        
    }
    for(int p=0; p<tamanhoVetor;p++) 
	{
    	printf("%d\n",vetor[p]);
    }
}

//Exercicio tres
void exercicio3() {
    int tamanhoVetor;
    int maior = 0;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];
    printf("Informe os numeros para o vetor: ");
      for (int i=0; i < tamanhoVetor ;i++) 
      {
          scanf("%d", &vetor[i]);    
      }
      
    for (int m=0; m< tamanhoVetor; m++)
	{
		if(vetor[m] > maior)
		{
			maior = vetor[m];
		}
	}
	printf("Maior numero do vetor: ""%d",maior);
}

//Exercicio quatro
void exercicio4() {
    int tamanhoVetor;
    int menor = 9999999999;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];
    printf("Informe os numeros para o vetor: ");
      for (int i=0; i < tamanhoVetor ;i++) 
      {
          scanf("%d", &vetor[i]);    
      }
      
    for (int m=0; m< tamanhoVetor; m++)
	{
		if(vetor[m] < menor)
		{
			menor = vetor[m];
		}
	}
	printf("Menor numero do vetor: ""%d",menor);
}

//Exercicio cinco
void exercicio5() {
    int tamanhoVetor;
    int tam;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];
    printf("Informe os numeros para o vetor: ");
      for (int i=0; i < tamanhoVetor ;i++) 
      {
          scanf("%d", &vetor[i]);    
      }
      
    tam = ((tamanhoVetor/2)-1);
    printf("Numero do meio: ""%d",vetor[tam]);
}

//Exercicio seis
void exercicio6() {
    int tamanhoVetor;
    int number;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];
    printf("Informe os numeros para o vetor: ");
      for (int i=0; i < tamanhoVetor ;i++) 
      {
          scanf("%d", &vetor[i]);    
      }
    printf("Informe o numero a ser comparado: ");
    scanf("%d", &number);
      for (int n=0; n< tamanhoVetor; n++)
      {
      	if(number != vetor[n]) {
      		printf("Procurando...\n");
		  }else {
		  	printf("Presente\n");
		  	break;
		  }
	  }	
}

//Exercicio sete
void exercicio7() {
    int tamanhoVetor;
    int number;
    int cont=0;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];
    printf("Informe os numeros para o vetor: ");
      for (int i=0; i < tamanhoVetor ;i++) 
      {
          scanf("%d", &vetor[i]);    
      }
    printf("Informe o valor: ");
    scanf("%d", &number);
    
      for(int n=0;n<tamanhoVetor;n++){
      	if(number == vetor[n]){
      		cont = cont +1;
		  }
	  }
	  printf("%d", cont);
}

//Exercicio oito
void exercicio8() {
	int tamanhoVetor;
	int a;
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &tamanhoVetor);
	
	printf("Informe o s valores para o vetor: ");
	int vetor[tamanhoVetor];
	for	(a=0;a<tamanhoVetor;a++)
	{
		scanf("%d", &vetor[a]);
	}
	int b;
	int c = 0;
	int d=0;
	d = tamanhoVetor;
	for(b=0; b<tamanhoVetor;b++)
	{
		c = (d -1);
		d--;
		printf("%d", vetor[c]);
	}
}

//Exercicio nove
void exercicio9() {
    int tamanhoVetor;
    int tamanhoVetor2;
    int tamanhoVetor3;
    int a,b,c,d,e;
    
    printf("Informe o tamanho do vetor um: ");
    scanf("%d", &tamanhoVetor);
    
    printf("Informe o tamanho do vetor dois: ");
	scanf("%d", &tamanhoVetor2);
	
	tamanhoVetor3 = (tamanhoVetor +  tamanhoVetor2);
    int vetor[tamanhoVetor];
    int vetor3[tamanhoVetor3];
    printf("Informe os valores para o vetor um: ");
    
      for (a=0; a < tamanhoVetor ;a++) 
      {
          scanf("%d", &vetor[a]);    
          vetor3[a] = vetor[a];
      }
	  
    
	int vetor2[tamanhoVetor2];
	printf("Informe os valores para o vetor dois: ");
	
		for (b=0; b< tamanhoVetor2; b++)
		{
			scanf("%d", &vetor2[b]);
			vetor3[tamanhoVetor +b] = vetor2[b];	
		}
   	
   	
	for (e=0; e< tamanhoVetor3; e++)
	{
		printf("%d", vetor3[e]);
	}
}

//Exercicio dez
void exercicio10() {
    int tamanhoVetor;
    int tamanhoVetor2;
    int tamanhoVetor3;
    int a,b,c,d,e;
    
    //Lendo tamanho dos vetores
    printf("Informe o tamanho do vetor um: ");
    scanf("%d", &tamanhoVetor);
    
    printf("Informe o tamanho do vetor dois: ");
	scanf("%d", &tamanhoVetor2);
	
	tamanhoVetor3 = (tamanhoVetor +  tamanhoVetor2);
    int vetor[tamanhoVetor];
    int vetor3[tamanhoVetor3];
    //Gravando vetor um
    printf("Informe os valores para o vetor um: ");
    
      for (a=0; a < tamanhoVetor ;a++) 
      {
          scanf("%d", &vetor[a]);    
          vetor3[a] = vetor[a];
      }
    
	int vetor2[tamanhoVetor2];
	//Gravando vetor dois
	printf("Informe os valores para o vetor dois: ");
	
		for (b=0; b< tamanhoVetor2; b++)
		{
			scanf("%d", &vetor2[b]);
			vetor3[tamanhoVetor +b] = vetor2[b];	
		}
   	
   	//Ordenando vetor 1
	int aux=0;
    for(int a=0; a < tamanhoVetor3;a++) {
        for(int b=0; b < tamanhoVetor3;b++) {
            if(vetor3[a] < vetor3[b]) {
                        
            aux = vetor3[a];
            vetor3[a] = vetor3[b];
            vetor3[b] = aux;            
            }        
        }        
    }  
   	//Imprimindo o vetor
	for (e=0; e< tamanhoVetor3; e++)
	{
		printf("%d", vetor3[e]);
	}
}

//Exercicio onze
void exercicio11() {
    int tMtx, tMtx1;
	int a,b;

    printf("Informe o tamanho da matrix: ");
    scanf("%d", &tMtx, &tMtx1);
    int matrix[tMtx][tMtx1];
    printf("Informe os numeros para o vetor: ");
      for (a=0; a < tMtx ;a++) 
      {
			for (b=0; b < tMtx1; b++)
          		scanf("%d", &matrix[a][b]);    
      }
}

//Exercicio doze
void exercicio12() {
    int tMtx, tMtx1;
	int a,b,c,d;

    printf("Informe o tamanho da matrix: ");
    scanf("%d", &tMtx, &tMtx1);
    int matriz[tMtx][tMtx1];
    printf("Informe os numeros para a matrix: ");
      for (a=0; a < tMtx ;a++) 
      {
			for (b=0; b < tMtx1; b++)
          		scanf("%d", &matriz[a][b]);    
      }
      
      for (c=0; c< tMtx; c++)
      {
		for (d=0; d< tMtx1; d++)
		{
			printf("%d\t", matriz[c][d]);
		}
		printf("\n");
	  	
	  }	
}

//Exercicio treze
void exercicio13() {
    int tMtx, tMtx1;
    int a,b,c,d,e,f;

    printf("Informe o tamanho da matrix: ");
    scanf("%d", &tMtx, &tMtx1); 
	int matriz[tMtx][tMtx1];
    printf("Informe os numeros para a matrix: ");
      for (a=0; a < tMtx ;a++) 
      {
		for (b=0; b < tMtx1; b++)
		{
          scanf("%d", &matriz[a][b]);
		}
	  }
	  
	  for (c=0;c<tMtx1;c++) 
      {
        for(d=tMtx -1; d>=0;d--)
        {
         printf("%d\t", matriz[c][d]);
        }
        printf("\n");
      }
}

//Exercicio quatorze
void exercicio14() {
int arrayLength = 0;
    int arrayHeight = 0;

   	printf("Informe o numero de linhas: ");
	scanf("%d", &arrayLength);

	printf("Informe o numero de colunas: ");
	scanf("%d", &arrayHeight);

    const int padding = 1;

    int paddedLength = padding + arrayLength + padding;
    int paddedHeight = padding + arrayHeight + padding;
    int intArray[paddedLength][paddedHeight];
    memset(intArray, 0, sizeof(intArray));

    int counter = 0;
    int columnCounter = 0;

    for (counter = 0 + padding; counter < arrayHeight + padding ; counter++) {
        for (columnCounter = 0 + padding; columnCounter < arrayLength + padding; columnCounter ++) {
            printf("\nSay the number at line: %d and column: %d :", (counter), (columnCounter));
            scanf("%d", &intArray[counter][columnCounter]);
        }
    }

    int upNumber = 0;
    int downNumber = 0;
    int leftNumber = 0;
    int rightNumber = 0;
    int sum = 0;
    int average = 0;
    int averagesArray[arrayLength][arrayHeight];

    for (counter = 0 + padding; counter < arrayHeight + padding; counter ++) {
        for (columnCounter = 0 + padding; columnCounter < arrayLength + padding; columnCounter ++) {
            upNumber = intArray[counter -1][columnCounter];
            downNumber = intArray[counter +1][columnCounter];
            leftNumber = intArray[counter][columnCounter -1];
            rightNumber = intArray[counter][columnCounter +1];
            sum = (upNumber + downNumber + leftNumber + rightNumber);
            average = sum/4;
            averagesArray[counter -padding][columnCounter -padding] = average;
        }
    }

    printf("\nOriginal array\n");
    for (counter = 0 +padding; counter < arrayHeight+padding; counter ++) {
        for (columnCounter = 0 +padding; columnCounter < arrayLength+padding; columnCounter ++) {
            printf(" %d ", intArray[counter][columnCounter]);
        }
        printf("\n");
    }
    printf("\nAverage array\n");

   for (counter = 0; counter < arrayHeight; counter ++) {
        for (columnCounter = 0; columnCounter < arrayLength; columnCounter ++) {
            printf(" %d ", averagesArray[counter][columnCounter]);
        }
        printf("\n");
    }
}


//Exercicio quinze
void exercicio15() {
	int a,b;
	int x,y;
	
	printf("Informe o numero de linhas: ");
	scanf("%d", &x);

	printf("Informe o numero de colunas: ");
	scanf("%d", &y);
	
	int matriz[x][y];
	int matrizSoma[x][y];
	
	for(a=0;a<x;a++)
	{
		for(b=0;b<y;b++)
		{
			printf("%d Informe os valores para a matriz: ", a,b);
			scanf("%d", &matriz[a][b]);
		}
	}
	
	for(a=0;a<x;a++)
	{
		for(b=0;b<y;b++)
		{
			matrizSoma[a][b] = matriz[a][b] + matriz[a][b];
		}
	}
	
	for(a=0;a<x;a++)
	{
		for(b=0;b<y;b++)
		{
			printf("	%d", matrizSoma[a][b]);
		}
		printf("\n");
	}
}

//Exercicio desesseis
void exercicio16() {
	int a,b;
	int x,y;
	
	printf("Informe o numero de linhas: ");
	scanf("%d", &x);

	printf("Informe o numero de colunas: ");
	scanf("%d", &y);
	
	int matriz[x][y];
	int matrizSoma[x][y];
	
	for(a=0;a<x;a++)
	{
		for(b=0;b<y;b++)
		{
			printf("%d Informe os valores para a matriz: ", a,b);
			scanf("%d", &matriz[a][b]);
		}
	}
	
	for(a=0;a<x;a++)
	{
		for(b=0;b<y;b++)
		{
			matrizSoma[a][b] = matriz[a][b] * matriz[a][b];
		}
	}
	
	for(a=0;a<x;a++)
	{
		for(b=0;b<y;b++)
		{
			printf("	%d", matrizSoma[a][b]);
		}
		printf("\n");
	}
}
