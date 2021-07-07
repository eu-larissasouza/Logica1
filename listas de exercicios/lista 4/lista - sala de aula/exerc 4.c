#include<stdio.h>
#include<conio.h>

int main()
{	
	int i, A[5], B[5], C[10];

	for(i=0;i<=4;++i)
	{
	printf("\tEntre com o elemento de A\t");
	scanf("\t %d", &A[i]);
	printf("\tEntre com o elemento de B\t");
	scanf("\t %d", &B[i]);
	C[0] = A[0];C[1] = A[1], C[2] = A[2], C[3] = A[3], C[4] = A[4], C[5] = B[0], C[6] = B[1], C[7] = B[2], C[8] = B[3], C[9] = B[4];
	}
	
	printf("\n\tMatriz C: \n\n");
	for(i=0;i<=9;++i)
		printf("%d\t", C[i]);
		
	getch();
	return 0;
}
