/*
UNIVERSIDADE FUMEC - Ciência da Computação
Autores: Rodrigo Lopes, Telmo junior e Vinicius Salmont
Disciplina: Estrutura de Dados I
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

/* STRUCT'S */
typedef struct{
	char street[50];
	int number;
	char neighborhood[20];
	char city[30];
	char abbrState[3];
	int CEP;
}Address;

typedef struct costumer{
	char cpf[11];
	char name[50];
	int phone;
	Address address;
	struct costumer *next;
}costumer;

typedef struct costumerSpending{
    int id; //pode ser autoincremento
    char cpf[11];
    double price;
    int IDService;
    struct costumerSpending *next;
}costumerSpending;

typedef struct service{
	int id;
	int IDCategory;
	char name[20];
	char description[50];
	double price;
	struct service *next;
}service;

typedef struct serviceCategory{
	int id;
	char name[20];
	char type[20];
	struct serviceCategory *next;
}serviceCategory;

#pragma mark - Methods Declaration
costumer *allocCostumer();
serviceCategory *allocCategory();
costumerSpending *allocSpending();
service *allocService();

//Metodos responsaveis por inserir
void insertService(service *createService, serviceCategory *createCategory);
void insertCategory(serviceCategory *createCategory);
void insertCostumer(costumer *createCostumer);
void insertCostumerSpending(costumerSpending *createSpending, serviceCategory *createCategory, costumer *createCostumer);

//Metodos responsaveis por alterar

void changeCategory(serviceCategory *list);
void changeCostumer(costumer *list);
void changeService(service *list);

//Metodos resposaveis po pesquisa
serviceCategory *searchCategoryID(serviceCategory *list,int id);
service *searchServiceID(service *list,int id);
costumer *searchCostumerCPF(costumer *list,char cpf[]);

//Metodos responsaveis por mostar
void showCostumer(costumer *createCostumer);
void showCategory(serviceCategory *createCategory);
void showSpending(costumerSpending *createSpending);

//Metodos responsaveis por remover
void removeCostumer(costumer *list);
void removeCategory(serviceCategory *list);
void removeService(service *list);

#pragma mark - Methods implementation

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    costumer *createCostumer =NULL;
	serviceCategory *createCategory=NULL;
	service *createService=NULL;
	costumerSpending *createSpending=NULL;
    
    
    createCostumer = 	allocCostumer();
	createCategory =	allocCategory();
	createService =	allocService();
	createSpending =	allocSpending();
	
	system("Color 4F");	
    int option = 0;
    do{
        
    printf("\t\t      -----------TRV SISTEMAS----------\n");
    printf("\t   _____ _____  _____ _______ ______ __  __           _____\n") ;
    printf("\t  / ____|_   _|/ ____|__   __|  ____|  \\/  |   /\\    / ____|\n");
    printf("\t | (___   | | | (___    | |  | |__  | \\  / |  /  \\  | (___  \n");
    printf("\t  \\___ \\  | |  \\___ \\   | |  |  __| | |\\/| | / /\\ \\  \\___ \\\n") ;
    printf("\t  ____) |_| |_ ____) |  | |  | |____| |  | |/ ____ \\ ____) |\n");
    printf("\t |_____/|_____|_____/   |_|  |______|_|  |_/_/    \\_\\_____/ \n");
    printf("\n");
 
 
        printf("(*) CADASTRAR \n");
        printf("(1) Inserir Clientes\n");
        printf("(2) Inserir Categorias de Serviços\n");
        printf("(3) Inserir Serviços\n");
        printf("(4) Inserir Gastos de Clientes\n\n");
        printf("(*) ALTERAR \n");
        printf("(5) Alterar dados de um Cliente\n");
        printf("(6) Alterar dados de uma Categoria\n");
        printf("(7) Alterar dados de um serviço\n\n");
        printf("(*) EXCLUIR \n");
        printf("(8) Deletar dados de um Cliente\n");
        printf("(9) Deletar dados de uma Categoria\n");
        printf("(10) Deletar dados de um serviço\n\n");
        printf("(*) PESQUISAR \n");
        printf("(11) Buscar Categoria\n");
        printf("(12) Buscar Cliente\n\n");
        scanf("%d", &option);

        switch(option){
            case 1:
            	insertCostumer(createCostumer);
                break;
            case 2:
            	insertCategory(createCategory);
				break;
            case 3:
            	insertService(createService,createCategory);
            	break;
            case 4:
            	insertCostumerSpending(createSpending,createCategory,createCostumer);
            	break;
            case 5:
				changeCostumer(createCostumer);
				break;
            case 6:
				changeCategory(createCategory);
            	break;
            case 7:
				changeService(createService);
            	break;
            case 8:
				removeCostumer(createCostumer);
           		break;
            case 9:
				removeCategory(createCategory);
            	break;
            case 10:
                removeService(createService);
            	break;
            case 11:
				showCategory(createCategory);
            	break;
            case 12:
				showCostumer(createCostumer);
            	break;
            default:
                break;
        }

    }while(option != 0);

    return EXIT_SUCCESS;
}

//Motodos para cliente

costumer *allocCostumer(){
	system("cls");
    costumer *quant;
    quant = (costumer *) malloc(1 * sizeof(costumer));
	
	
    if(!quant){
        printf("\nSem memória para alocar\n");
        return 0;
    }else printf("\nMemoria alocada com sucesso!!!\n");

	
	quant->next=NULL;	

    return quant;
}


//Métodos para cadastro de categoria 
serviceCategory *allocCategory(){
		system("cls");

    serviceCategory *quant;
    quant = (serviceCategory *) malloc(1 * sizeof(serviceCategory));

    if(!quant){
        printf("\nSem memória para alocar\n");
        return 0;
    }else printf("\nMemoria alocada com sucesso!!!\n");
    
	quant->next=NULL;	

    return quant;
}

costumerSpending *allocSpending(){
	
			system("cls");

    costumerSpending *quant;
    quant = (costumerSpending *) malloc(1 * sizeof(costumerSpending));

    if(!quant){
        printf("\nSem memória para alocar\n");
        return 0;
    }else printf("\nMemoria alocada com sucesso!!!\n");
	quant->next=NULL;	

    return quant;
	
	
}

//Métodos para cadastro de Produto 
service *allocService(){
		system("cls");

    service *quant;
    quant = (service *) malloc(1 * sizeof(service));

    if(!quant){
        printf("\nSem memória para alocar\n");
        return 0;
    }else printf("\nMemoria alocada com sucesso!!!\n");
	quant->next=NULL;	

    return quant;
}

void insertCostumer(costumer *createCostumer) {
    system("cls");
	costumer *novo=(costumer *) malloc(sizeof(costumer));
	
	if(!novo){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}

    printf("\n --- Cadastro de Cliente --- \n");
		
	printf("\nNOME: ");
	scanf("%s", &novo->name);
	fflush(stdin);	
	
	printf("\nCPF: ");
	fflush(stdin);
	scanf("%s", &novo->cpf);
	
	printf("\nTELEFONE: ");
	fflush(stdin);
	scanf("%s", &novo->phone);
	
	printf("\n  RUA: ");
	fflush(stdin);
	scanf("%s", &novo->address.street);
	
	printf("\n  NUMERO: ");
	fflush(stdin);
	scanf("%d", &novo->address.number);
	
	printf("\n  BAIRRO: ");
	fflush(stdin);
	scanf("%s", &novo->address.neighborhood);
	
	printf("\n  CIDADE: ");
	fflush(stdin);
	scanf("%s", &novo->address.city);
	
	printf("\n  ESTADO: ");
	fflush(stdin);
	scanf("%s", &novo->address.abbrState);
	
	novo->next = NULL;
	
		if(createCostumer->next==NULL){
					createCostumer->next=novo;

		}
	else{
		costumer *tmp = createCostumer->next;
		
		while(tmp->next != NULL)
			tmp = tmp->next;
		
		tmp->next = novo;
	}
}

costumer *searchCostumerCPF(costumer *list,char cpf[])
{
	
	 if(list->next==NULL)
     {
        printf("Nenhuma cliente cadastrada!\n");
        //Provocando uma saída do sistema caso a memória que precisemos não seja alocada.
		return NULL;
	}
	
	costumer *tmp = list->next;
	while(tmp != NULL)
	{

		if(strcmp(cpf,tmp->cpf)==0)
		{
			return tmp;
		}
		tmp = tmp->next;
	}
	
	return NULL;
}

void showCostumer(costumer *createCostumer)
{
    if(createCostumer==NULL)
    {
        printf("Nenhuma Pessoa cadastrada!\n");
        //Provocando uma saída do sistema caso a memória que precisemos não seja alocada.
        return;
    } else {
      costumer *tmp;
	  tmp = createCostumer->next; 
	  system("cls");   
	  printf("\n========= Pessoas =========\n\n");      
     while( tmp != NULL){
           printf("CPF      : %s\n"\
  		  	      "Nome        : %s\n"\
				  "Telefone  : %d\n", 
				   tmp->cpf,tmp->name,tmp->phone);                                
           printf("\n=====================================\n");
           tmp = tmp->next;
      } 
  	}

}

void changeCostumer(costumer *list){

if(list->next==NULL)
     {
        printf("Nenhuma categoria cadastrada!\n");
		return;
	}
	char cpf[11];
	printf("\nQual o (CPF) do cliente gostaria de buscar? ");
	scanf("%s",&cpf);
		fflush(stdin);	

	system("cls");
	costumer *tmp = searchCostumerCPF(list,cpf);
	
	if(tmp!=NULL)
	{
		printf("\n========= cliente =========\n\n");      
        printf("Nome  : %s\n"
               "CPF  : %s\n"
  	   	       "Telefone    : %s\n", tmp->name,tmp->cpf, tmp->phone);
		printf("\n-------------------------------------\n\n\n"); 
           
           		printf("\n--Alterando Cliente--\n\n\n"); 

           
           
           	printf("\nNOME: ");
	scanf("%s", &tmp->name);
	fflush(stdin);	
	
	printf("\nCPF: ");
	fflush(stdin);
	scanf("%s", &tmp->cpf);
	
	printf("\nTELEFONE: ");
	fflush(stdin);
	scanf("%s", &tmp->phone);
	
	printf("\n  RUA: ");
	fflush(stdin);
	scanf("%s", &tmp->address.street);
	
	printf("\n  NUMERO: ");
	fflush(stdin);
	scanf("%d", &tmp->address.number);
	
	printf("\n  BAIRRO: ");
	fflush(stdin);
	scanf("%s", &tmp->address.neighborhood);
	
	printf("\n  CIDADE: ");
	fflush(stdin);
	scanf("%s", &tmp->address.city);
	
	printf("\n  ESTADO: ");
	fflush(stdin);
	scanf("%s", &tmp->address.abbrState);
		           
    }
	else
		printf("\nCliente nao encontrada!");
}

void removeCostumer(costumer *list){

if(list->next==NULL)
    {
        printf("Nenhuma categoria cadastrada!\n");
		return;
	}
		char cpf[11];
		printf("\nQual o (CPF) do cliente gostaria de buscar? ");
		scanf("%s",&cpf);
			fflush(stdin);	
	
		system("cls");
		costumer *tmp = searchCostumerCPF(list,cpf);
		
		if(tmp!=NULL)
		{
			printf("\n========= cliente =========\n\n");      
	        printf("Nome  : %s\n"
	               "CPF  : %s\n"
	  	   	       "Telefone    : %d\n", tmp->name,tmp->cpf, tmp->phone);
			printf("\n-------------------------------------\n\n\n"); 
	           
	           		printf("\n--Excluindo cliente--\n\n\n"); 	           
	    }
	    
		free(tmp);   
}

//Metodos para categoria

void insertCategory(serviceCategory *createCategory)
{
    system("cls");
	serviceCategory *novo=(serviceCategory *) malloc(sizeof(serviceCategory));

	printf("\n --- Cadastro de Categorias --- \n");

	printf("\nID: ");
	scanf("%d", &novo->id);
	fflush(stdin);
	
	printf("\nNOME: ");
	scanf("%s", &novo->name);
	fflush(stdin);	
	
	printf("\nTIPO: ");
	fflush(stdin);
	scanf("%s", &novo->type);		
	
		
	novo->next = NULL;
	
		if(createCategory->next==NULL){
					createCategory->next=novo;

		}
	else{
		serviceCategory *tmp = createCategory->next;
		
		while(tmp->next != NULL)
			tmp = tmp->next;
		
		tmp->next = novo;
	}
}

void showCategory(serviceCategory *createCategory)
{
	if(createCategory==NULL)
    {
        printf("Nenhuma Pessoa cadastrada!\n");
        //Provocando uma saída do sistema caso a memória que precisemos não seja alocada.
        return;
    } else {
      serviceCategory *tmp;
	  tmp = createCategory->next; 
	  system("cls");   
	  printf("\n========= Categorias =========\n\n");      
      while( tmp != NULL){
           printf("id      : %d\n"\
  		  	      "Nome        : %s\n"\
				  "tipo  : %s\n", 
				   tmp->id,tmp->name,tmp->type);                                
           printf("\n=====================================\n");
           tmp = tmp->next;
      } 
  	}	
}

void removeCategory(serviceCategory *list){

if(list->next==NULL)
    {
        printf("Nenhuma categoria cadastrada!\n");
		return;
	}
		int id;
		printf("\nQual o (id) do cliente gostaria de buscar? ");
		scanf("%s",&id);
		fflush(stdin);	
	
		system("cls");
		serviceCategory *tmp = searchCategoryID(list,id);
		
		if(tmp!=NULL)
		{
			printf("\n========= categoria =========\n\n");
        printf("ID  : %d\n"
               "Nome : %s\n"
  	   	       "Tipo    : %s\n", tmp->id,tmp->name, tmp->type);
		printf("\n-------------------------------------\n\n\n"); 
	           
	           		printf("\n--Excluindo cliente--\n\n\n"); 	           
	    }
	    
		free(tmp);  
}

void changeCategory(serviceCategory *list){

if(list->next==NULL)
     {
        printf("Nenhuma categoria cadastrada!\n");
		return;
	}
int id;
	printf("\nQual o (ID) da categoria gostaria de buscar? ");
	scanf("%d",&id);
		fflush(stdin);	

	system("cls");
	serviceCategory *tmp = searchCategoryID(list,id);
	
	if(tmp!=NULL)
	{
		printf("\n========= categoria =========\n\n");
        printf("ID  : %d\n"
               "Nome : %s\n"
  	   	       "Tipo    : %s\n", tmp->id,tmp->name, tmp->type);
		printf("\n-------------------------------------\n\n\n"); 
           
        printf("\n--Alteracao Categoria--\n\n\n"); 

    printf("\nID: ");
	scanf("%d", &list->id);
	fflush(stdin);
	
	printf("\nNOME: ");
	scanf("%s", &list->name);
	fflush(stdin);	
	
	printf("\nIIPO: ");
	fflush(stdin);
	scanf("%s", &list->type);		                
    }
	else
		printf("\nCategoria nao encontrada!");

}

serviceCategory *searchCategoryID(serviceCategory *list,int id)
{	
	 if(list->next==NULL)
     {
        printf("Nenhuma Categoria cadastrada!\n");
		return NULL;
	}
	serviceCategory *tmp = list->next;
	while(tmp != NULL)
	{
		if(tmp->id==id);
		{
			return tmp;
		}
		tmp = tmp->next;
	}
	return NULL;
}

//Metodos para servicos

void insertService(service *createService, serviceCategory *createCategory){
	
	system("cls");
	service *novo=(service *) malloc(sizeof(service));
	
	printf("\n-------Serviço--------");
	printf("\nID: ");
	scanf("%d", &novo->id);
	fflush(stdin);
	
	printf("\nNOME: ");
	scanf("%s", &novo->name);
	fflush(stdin);	
	
	printf("\nVALOR: ");
	fflush(stdin);
	scanf("%d", &novo->price);
	
	printf("\nID CATEGORIA: ");
	int cat;
	scanf("%d", &cat);
	
		if(createCategory!=NULL){
		(searchCategoryID(createCategory,novo->id)==NULL)?printf("Nao existe Categoria Cadastrada"):	printf("Cadastro realizado");	
		}else{
		printf("Nao existe categoria cadatrada");
		}
		novo->next = NULL;
	
		if(createService->next==NULL){
		  createService->next=novo;
		}
	    else{
		service *tmp = createService->next;
		
		while(tmp->next != NULL)
			tmp = tmp->next;
		
		tmp->next = novo;
	}
}

service *searchServiceID(service *list,int id)
{
	
	 if(list->next==NULL)
     {
        printf("Nenhuma Categoria cadastrada!\n");
		return NULL;
	}
	
	service *tmp = list->next;
	while(tmp != NULL)
	{
		if(tmp->id==id)
		{
			return tmp;
		}
		tmp = tmp->next;
	}
	
	return NULL;
}
void changeService(service *list){

if(list->next==NULL)
     {
        printf("Nenhum Produto cadastrado!\n");
		return;
	}
    int id;
	printf("\nQual o (ID) do produto gostaria de buscar? ");
	scanf("%d",&id);
		fflush(stdin);	

	system("cls");
	service *tmp = searchServiceID(list,id);
	
	if(tmp!=NULL)
	{
		printf("\n========= cliente =========\n\n");
        printf("ID  : %d\n"
               "Nome : %s\n"
  	   	       "Valor   : %d\n", tmp->id,tmp->name, tmp->price);
		printf("\n-------------------------------------\n\n\n"); 
           
        printf("\n--Alteracao Produto--\n\n\n"); 

    printf("\nID: ");
	scanf("%d", &list->id);
	fflush(stdin);
	
	printf("\nNOME: ");
	scanf("%s", &list->name);
	fflush(stdin);	
	
	printf("\nIIPO: ");
	fflush(stdin);
	scanf("%s", &list->price);		               
    }
	else
		printf("\nProduto nao encontrada!");
}

void removeService(service *list){

     if(list->next==NULL)
    {
        printf("Nenhuma categoria cadastrada!\n");
		return;
	}
		int id;
		printf("\nQual o (id) do cliente gostaria de buscar? ");
		scanf("%s",&id);
		fflush(stdin);	
	
		system("cls");
		service *tmp = searchServiceID(list,id);
		
		if(tmp!=NULL)
		{
			printf("\n========= cliente =========\n\n");
        printf("id  : %d\n"
               "Nome : %s\n"
  	   	       "Descricao    : %s\n"
               "Preco    : %d\n"
               , tmp->id,tmp->name, tmp->description,tmp->price);
		printf("\n-------------------------------------\n\n\n"); 
	           
	           		printf("\n--Excluindo cliente--\n\n\n"); 	           
	    }
	    
		free(tmp);  
}

//Metodos para registro de gastos

void insertCostumerSpending(costumerSpending *createSpending, serviceCategory *createCategory, costumer *createCostumer){
	system("cls");
	costumerSpending *novo=(costumerSpending *) malloc(sizeof(costumerSpending));

	printf("\n --- Cadastro de Gasto de Cliente --- \n");

	
	
	printf("\nValor Gasto: ");
	scanf("%d", &novo->price);
	fflush(stdin);	
	
	printf("\nCPF cliente: ");
	scanf("%s", &novo->cpf);
	fflush(stdin);
		if(createCostumer!=NULL){
			if(searchCostumerCPF(createCostumer,novo->cpf)!=NULL){
		
				costumer *temp1 = searchCostumerCPF(createCostumer,novo->cpf);
				if(strcmp(novo->cpf,temp1->cpf)!=0){
				
				printf("Nao existe cpf Cadastrado");
				}
			}
		}else{
		printf("Nao existe Clientes cadatrado");
		}
	printf("\nID CATEGORIA: ");
	int cat;
	scanf("%d", &cat);
	
		if(createCategory!=NULL){
	
		(searchCategoryID(createCategory,cat))?printf("Nao existe ID Cadastrada"):printf("Gasto cadatrado");
		
			
		}else{
		printf("Nao existe Produtos cadatrado");
			}
			novo->next = NULL;
		if(createSpending->next==NULL){
		    createSpending->next=novo;
		}
	else{
		costumerSpending *tmp = createSpending->next;
		while(tmp->next != NULL)
		tmp = tmp->next;
		tmp->next = novo;
	}	
    }

    int id;
	int IDCategory;
	char name[20];
	char description[50];
	double price;
	struct service *next;

void showSpending(costumerSpending *createSpending)
{
	if(createSpending==NULL)
    {
        printf("Nenhuma Pessoa cadastrada!\n");
        //Provocando uma saída do sistema caso a memória que precisemos não seja alocada.
        return;
    } else {
      costumerSpending *tmp;
	  tmp = createSpending->next; 
	  system("cls");   
	  printf("\n========= Categorias =========\n\n");      
      while( tmp != NULL){
           printf("id      : %d\n"\
  		  	      "cpf        : %s\n"\
				  "preco  : %f\n"
				  "id servico", 
				   tmp->id,tmp->cpf,tmp->price,tmp->IDService);                                
           printf("\n=====================================\n");
           tmp = tmp->next;
      } 
  	}	
}

