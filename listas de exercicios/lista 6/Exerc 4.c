#include<stdio.h>
#include<conio.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
    int A[4], B[4], C[4][2], i, j;
    
    for (i=0; i<=6; i++)
    {	printf("\t Informe o %dº número\t", i+1);
        scanf ("%d", &A[i]);C[i][0]=A[i]*2;    }
    
    for (i=0; i<=6; i++)
    {	printf("\t Informe o %dº número\t", i+1);
        scanf ("%d", &B[i]);C[i][1]= B[i]-5;    }
     
    for (i=0;i<=6;i++)
    	for (j=0; j<=1;j++)
    	{	printf("C [%d][%d]= [%d]\n", i, j, C[i][j]);    }
     
    getch();
    return 0;
}
 
