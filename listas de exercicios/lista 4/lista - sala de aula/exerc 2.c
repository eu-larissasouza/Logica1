#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
	printf(" Criar uma matriz B com capacidade de armazenar 6 elementos, sendo cada elemento de B o fatorial do elemento correspondente na matriz A \n\n");

	int i, A[6], B[6], valor,cont,fat;
	
	fat=1;
	
	for(i=0; i<=5; ++i)
	{
		printf("\t Entre com o elemento \t");
		scanf("%d", & A[i]);
		valor= A[i];
		for(cont=1; valor>1; valor--)
		{			
		cont *= valor;			
		fat= cont;	
		}
	B[i]= fat;
	}
	
	for(i=0; i<=5; ++i)
	printf("\t%d", B[i]);
	
	getch ();
	return 0; 
}
