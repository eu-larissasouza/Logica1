#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int exibir();
int cadastro();
int ord_alfabetica();
int correcao();
int pesquisa();
int reprovados();
int aprovados();
int media();
int i, j;

struct alunos{
	char nome[60];
	float notaum;
	float notadois;	
	float media;
};
struct alunos X[20], aux; 

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");

	int resp;

	while(resp != 7)
	{
        printf("\t ........ Diário do Professor........\n\n");
		printf("\t 1. Cadastro dos alunos \n");
		printf("\t 2. Classificação em ordem alfabÃ©tica \n");
		printf("\t 3. Correção de notas \n");
		printf("\t 4. Pesquisa de alunos pelo nome\n");
		printf("\t 5. Listagem de alunos Aprovados \n");
		printf("\t 6. Listagem de alunos Reprovados\n");
		printf("\t 7. Sair \n\n");
		
		printf("\t Escolha uma opção\n\t");
		fflush(stdin);	scanf("%d", &resp);
		
		switch(resp)
		{
			case 1: cadastro();			 	break;
			case 2: ord_alfabetica();		break;
			case 3: correcao();				 break;
			case 4: pesquisa();		 		break;
			case 5: reprovados();			break;
			case 6: aprovados();			break;
		}
	}	
	getch();
	return 0;
}

int cadastro()
{
	for(i=0;i<=19; ++i)
	{
		leitura();
	}
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
    return 0;
}

int correcao()
{
	char correcao[60];
	printf("\n\t Entre com o nome do registro a corregido:\n\n");
	fflush(stdin);fgets(correcao, 60, stdin);
	i=0;
	while(i<=19)
	{	if (strcmp ( correcao, X[i].nome) > 0)
		break;
		else
		i++;	}	
	leitura();
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
	while(i<=19)
	{	if (strcmp ( pesq, X[i].nome) > 0)
		acha =1;
		else
		i++;	}	
	if (acha == 1)
	printf ("\t%s encontrado na %d° posição", pesq, i+1);
	else 
	printf ("Sinto muito, %s nÃ£o foi localizado!", pesq);		
	
	return 0;
}

int reprovados()
{
	printf("\t\t Listagem de alunos reprovados\n");
	for(i=0;i<=19; ++i)
	{ if( X[i].media < 7)
		{
			exibir();
		}
	}
	return 0;
}

int aprovados()
{
	printf("\t\t Listagem de alunos aprovados\n");
	for(i=0;i<=19; ++i)
	{ if( X[i].media >= 7)
		{
			exibir();
		}
	}
	return 0;
}

int exibir()
{
   	printf("\n\t Nome: %s \n", X[i].nome );
   	printf("\n\t Nota 1: %f \n", X[i].notaum);
   	printf("\n\t Nota 2: %f \n", X[i].notadois);
	printf("\t Média do Aluno: %f \n\n", X[i].media);
	return 0;
}

int leitura()
{
	fflush(stdin);
	printf("\t Informe o nome, por favor\n\n\t");
	fgets(X[i].nome, 60, stdin);
	printf("\t Informe primeira nota, por favor\n\n\t");
	scanf("%f", &X[i].notaum);			
	printf("\t Informe o segunda nota, por favor\n\n\t");
	scanf("%f", &X[i].notadois); 
	X[i].media= (X[i].notaum + X[i].notadois )/2;
}
