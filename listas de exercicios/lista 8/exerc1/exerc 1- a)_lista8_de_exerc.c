#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int menu();
int leitura();
int exibir();
int cadastro();
int pesquisa();
int ord_alfabetica();
int alteracao();
int remocao();
int i, j;

struct agenda{
	char nome[60];
	char email[200];
	char endereco[50];
	int cep;
	int telefone;
};
struct agenda X[5], aux;

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");

	int resp;

	while(resp != 6)
	{
		printf("\t.............. Menu Agenda ..............\n\n");
		printf("\t 1. Cadastro de Informações \n");
		printf("\t 2. Pesquisa de Nomes \n");
		printf("\t 3. Classificação em ordem alfabÃ©tica \n");
		printf("\t 4. Alteração de registros\n");
		printf("\t 5. Remoção de registros \n");
		printf("\t 6. Sair\n\n");
		
		printf("\t Escolha uma opção\n\t");
		fflush(stdin);	scanf("%d", &resp);
		
		switch(resp)
		{
			case 1: cadastro();				break;
			case 2: pesquisa();				break;
			case 3: ord_alfabetica();		break;
			case 4: alteracao();			break;
			case 5:	remocao();				break;
		}
	}
	getch();
	return 0;	
}

int cadastro()
{
	for(i=0; i<=4; ++i)
		{
			leitura();
		}
	return 0;
}
	
int pesquisa()
{
	char pesq[60];
	int acha;
	printf("\n\t Entre com o nome a ser pesquisado:\n\n");
	fflush(stdin);fgets(pesq, 60, stdin);
	i=0;
	acha=0;
	while(i<=4)
	{	if (strcmp ( pesq, X[i].nome) > 0)
		acha =1;
		else
		i++;	}	
	if (acha == 1)
	printf ("\t%s encontrado na %d° posição", pesq, i+1);
	else 
	printf ("Sinto muito, %s não foi localizado!", pesq);		
	
	return 0;
}

int ord_alfabetica()
{
	for (i=0;i<=3;i++)
	for (j=i+1; j<=4; j++)
	{	
	if (strcmp (X[i].nome, X[j].nome) >0)
	{
	    aux= X[i];
	    X[i]= X[j];
	    X[j]= aux;
	}	
	}
	for(i=0; i<=4; ++i)
	{
		exibir();
	}
}

int alteracao()
{
	char altnome[60];
	printf("\n\t Entre com o nome a ser alterado:\n\n");
	fflush(stdin);fgets(altnome, 60, stdin);
    i=0;
   	while(i<=30)
	{	if (strcmp (X[i].nome, altnome) == 0) break;
		else
		i++;	}	
	leitura();	
}

int remocao()
{
	char removenome[60];
	printf("\n\t Entre com o nome do registro a removido:\n\n");
	fflush(stdin);fgets(removenome, 60, stdin);
	i=0;
	while(i<=4)
	{	if (strcmp ( removenome, X[i].nome) > 0)
		break;
		else
		i++;	}	
	if (strcmp ( removenome, X[i].nome) == 0){
		fflush(stdin);
		printf("\t Pressione enter para excluir o nome\n\n\t");
		fgets(X[i].nome, 60, stdin); 
		fflush(stdin);
		printf("\t Pressione enter para excluir o email\n\n\t");
		fgets(X[i].email, 200, stdin); 
		fflush(stdin);
		printf("\t Pressione enter para excluir o endereço\n\n\t");
		fgets(X[i].endereco, 50, stdin); 
		fflush(stdin);
		printf("\t Pressione enter para excluir o cep \n\n\t");
		scanf("%d", &X[i].cep);	
		fflush(stdin);
		printf("\t Pressione enter para excluir o telefone\n\n\t");
		scanf("%d", &X[i].telefone);
		fflush(stdin);
	}
	return 0;
}

int leitura()
{
	fflush(stdin);
	printf("\n\t Informe o nome, por favor\n\n\t");
	fgets(X[i].nome, 60, stdin);
	printf("\n\t Informe o email, por favor\n\n\t");
	fgets(X[i].email, 200, stdin);
	printf("\n\t Informe o endereço, por favor\n\n\t");
	fgets(X[i].endereco, 50, stdin);
	printf("\n\t Informe o cep, por favor\n\n\t");
	scanf("%d", &X[i].cep);			
	printf("\n\t Informe o telefone, por favor\n\n\t");
	scanf("%d", &X[i].telefone); 
}
int exibir()
{
	printf("\n\t Nome: %s \n", X[i].nome );
	printf("\n\t Email: %s \n", X[i].email );
	printf("\n\t Endereço: %s \n\n", X[i].endereco );
	printf("\n\t CEP: %d \n\n", X[i].cep);
	printf("\n\t MÃ©dia do Aluno: %d \n\n", X[i].telefone); 
}
