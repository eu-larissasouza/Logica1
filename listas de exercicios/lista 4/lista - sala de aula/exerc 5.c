#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
	printf(" Criar uma matriz C com capacidade de armazenar 50 elementos, sendo essa a junção de uma matriz A com 20 elementos e B com 30 elementos \n\n");
	
	int i, A[20], B[30], C[50];
	
	{
	{i=0; 
	do
	{	printf("\t Entre com o elemento de A\t");
		scanf("%d", & A[i]); ++i;	}
	while(i<=19);
	}
	{
	i=0;
	do 
	{	printf("\t Entre com o elemento de B\t");
		scanf("%d", & B[i]); ++i;	}
	while(i<=29);
	}
	C[0] = A[0];	C[1] = A[1]; 	C[2] = A[2]; 	C[3] = A[3];	C[4] = A[4];	C[5] = A[5]; 	C[6] = A[6]; 	C[7] = A[7]; 	C[8] = A[8];	C[9] = A[9];	
	C[10] = A[10];	C[11] = A[11]; 	C[12] = A[12];	C[13] = A[13]; 	C[14] = A[14];	C[15] = A[15];	C[16] = A[16]; 	C[17] = A[17]; 	C[18] = A[18]; 	C[19] = A[19];
	C[20] = B[0]; 	C[21] = B[1]; 	C[22] = B[2]; 	C[23] = B[3]; 	C[24] = B[4];	C[25] = B[5];	C[26] = B[6];	C[27] = B[7];	C[28] = B[8];	C[29] = B[9];
	C[30] = B[10];	C[31] = B[11];	C[32] = B[12];	C[33] = B[13];	C[34] = B[14];	C[35] = B[15];	C[36] = B[16];	C[37] = B[17];	C[38] = B[18];	C[39] = B[19];
	C[40] = B[20];	C[41] = B[21];	C[42] = B[22];	C[43] = B[23];	C[44] = B[24];	C[45] = B[25];	C[46] = B[26];	C[47] = B[27];	C[48] = B[28];	C[49] = B[29];
}
	
	printf("\n\tMatriz C: \n\n");
	for(i=0; i<=49; ++i)
	printf("%d\t", C[i]);
		
	
	getch();
	return 0;
}
