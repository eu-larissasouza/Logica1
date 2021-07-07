#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
	printf(" Criar uma matriz B com capacidade de armazenar 10 elementos com os mesmos elementos de A, mas com ordem invertida \n\n");

	int i, A[10], B[10];
	for(i=0;i<=9;++i)
	{
		printf("\tEntre com o elemento\t");
		scanf("\t %d", &A[i]);
		B[0] = A[9];B[1] = A[8], B[2] = A[7], B[3] = A[6], B[4] = A[5], B[5] = A[4], B[6] = A[3], B[7] = A[2], B[8] = A[1], B[9] = A[0];
	}
	for(i=0;i<=9;++i)
		printf("\n\t%d", B[i]);
		
	getch();
	return 0;
}
