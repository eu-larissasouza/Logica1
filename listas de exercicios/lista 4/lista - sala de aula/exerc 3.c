#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
	printf("\t Criar uma matriz C com capacidade de armazenar 5 elementos, sendo cada elemento de C, a subtração do elemento correspondente de A com B \n\n");
	
	int i, A[5], B[5], C[5];
	
	for(i=0;i<=4;++i)
	{
		printf("\tEntre com o elemento de A\n");
		scanf("\t %d", &A[i]);
		printf("\tEntre com o elemento de B\n");
		scanf("\t %d", &B[i]);
		C[i]= A[i] - B[i];
	}
	for(i=0;i<=4;++i)
		printf("\t%d\n", C[i]);
		
	getch();
	return 0;
}
