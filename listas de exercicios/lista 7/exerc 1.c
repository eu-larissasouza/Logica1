#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	system("color 0f");
	
	struct agenda{
		char nome[60];
		char endereco[50];
		int cep;
		int telefone;
	};
	struct agenda X[5], aux;
	int i, j, pesq, acha;
	char resp, altnome[60];
	
	while(resp != 5)
	{
		printf("................................Programa Agenda.................................\n");
		printf("\t 1. Rotina Cadastro e registros\n");
		printf("\t 2. Rotina de Pesquisa de registro\n");
		printf("\t 3. Rotina de Classificação alfabética\n");
		printf("\t 4. Rotina de Alteração de registros\n");	
		printf("\t 5. Sair\n\n");
		
		printf("\t Escolha uma opção\n\t");
		scanf("%c", &resp);
		
		switch(resp)
		{
			case '1':
				{
					for(i=0; i<=4; ++i)
					{
						fflush(stdin);
						printf("\t Informe o nome, por favor\n\n\t");
						fgets(X[i].nome, 60, stdin);
						printf("\t Informe o endereço, por favor\n\n\t");
						fgets(X[i].endereco, 50, stdin);
						printf("\t Informe o cep, por favor\n\n\t");
						scanf("%d", &X[i].cep);			
						printf("\t Informe o telefone, por favor\n\n\t");
						scanf("%d", &X[i].telefone); 
					}
					for(i=0; i<=4; ++i)
					{
						printf("\n\t Nome: %s \n", X[i].nome );
						printf("\t Endereço: %s \n\n", X[i].endereco );
						printf("\t Idade: %d \n\n", X[i].cep);
						printf("\t Média do Aluno: %d \n\n", X[i].telefone); 	
					}
					break;				
				}
					
			case '2':
				{
					printf("\n\t Entre com o nome a ser pesquisado:\n\n");
					fflush(stdin);scanf("%d", &pesq);
			        i=0;
			        acha=0;
			        while(i<=4 && acha==0)
			        {	if (strcmp ( pesq, X[i].nome) > 0)
						acha= 1;
						else
						i++;	}	
					if (acha == 1)
					printf ("\t%d encontrado na %dº posição", pesq, i+1);
					else 
					printf ("Sinto muito, %d não foi localizado!", pesq);		
					break;
				}
					
			case '3':
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
						printf("\n\t Nome: %s \n", X[i].nome );
						printf("\t Endereço: %s \n\n", X[i].endereco );
						printf("\t Idade: %d \n\n", X[i].cep);
						printf("\t Média do Aluno: %d \n\n", X[i].telefone); 	
					}
					break;	
				}				
			case '4':
				{
					printf("\n\t Entre com o nome a ser alterado:\n\n");
					fflush(stdin);fgets(altnome, 60, stdin);
			        i=0;
			        while(i<=30)
			        {	if (strcmp (X[i].nome, altnome) == 0) break;
						else
						i++;	}	
					fflush(stdin);
					printf("\t Informe o nome, por favor\n\n\t");
					fgets(X[i].nome, 60, stdin);
					printf("\t Informe o endereço, por favor\n\n\t");
					fgets(X[i].endereco, 50, stdin);
					printf("\t Informe o cep, por favor\n\n\t");
					scanf("%d", &X[i].cep);			
					printf("\t Informe o telefone, por favor\n\n\t");
					scanf("%d", &X[i].telefone); 	
					break;		
				}
			case '5':
				{
					getch ();
					return 0; break;
				}	
		}
	}
	getch();
	return 0;
}
