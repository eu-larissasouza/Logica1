#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese"); 

	printf("\t Criar uma matriz B com capacidade de armazenar 5 elementos, sendo cada elemento de B um elemento da matriz A multiplicado por 3 \n\n");
	
	int i, A[5], B[5];
	
	for(i=0;i<=4;++i)
	{
		printf("\t\t Informe o elemento\n\t");
		scanf("%d", &A[i]);
		B[i]= A[i]*3;
	}
	for(i=0;i<=4;++i)
		printf("\t%d\n", B[i]);
		
	getch();
	return 0;
}
