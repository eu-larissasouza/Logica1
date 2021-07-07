#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");

	int  A[20], B[30], C[50], i, j, auxiliar;
	
	for (i=1; i<=20; i++)
	{	printf("\t Entre com o elemento de A\t");
		fflush(stdin);scanf("%d", &A[i]); 
		C[i]= A[i];
		printf("%d\t", C[i]);	}
	
	for (i=21; i<=50; i++)
	{	printf("\t Entre com o elemento de B\t");
		fflush(stdin);scanf("%d", & B[i]); 	
		C[i]= B[i];
		printf("%d\t", C[i]);	}	
	
    for (i=1;i<=49;i++)
	    for (j=i+1; j<=50; j++)
	    {   if (C[i] > C[j])
	        {	auxiliar= C[i];
				C[i]= C[j];
				C[j]= auxiliar;    }	}

	for(i=50; i<=1; --i)
	printf("%d\t", C[i]);
	
	getch();
	return 0;
}
