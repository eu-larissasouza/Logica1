#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese"); 

	printf("\t Criar uma matriz B com capacidade de armazenar 8 elementos, sendo cada elemento de B o quadrado do elemento da matriz A correspondente \n\n");
	
	int i, A[8], B[8];
	
	for(i=0;i<=7;++i)
	{
		printf("\tEntre com o elemento\n");
		scanf("\t %d", &A[i]);
		B[i]= pow(A[i],2);
	}
	
	for(i=0;i<=7;++i)
		printf("\t%d\n", B[i]);
		
	getch();
	return 0;
}
