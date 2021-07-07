#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
    int A[10], B[10][3], i, j, valor, fat, cont;
    
    for (i=0; i<=9; i++)
    {  	printf("\t Informe o %dº número\t", i+1);
        scanf ("%d", &A[i]);
        B[i][0]=A[i]+5;
        B[i][2]=pow(A[i],2);
        valor= A[i];
		for(cont=1; valor>1; --valor)
		{	cont *= valor;			
			fat= cont;		}
		B[i][1]=fat;    }
    
    for (i=0;i<=9;i++)
   		for (j=0; j<=2;j++)
    	{	printf("B [%d][%d]= [%d]\n", i, j, B[i][j]);    }
     
     getch();
     return 0;
}
