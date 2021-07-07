#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
    int A[7], B[7], C[7][2], i, j;
   
    for (i=0; i<=6; i++)
    {  	printf("\t Informe o %dº número\t", i+1);
        scanf ("%d", &A[i]);C[i][0]=A[i];    }
    
    for (i=0; i<=6; i++)
    {  	printf("\t Informe o %dº número\t", i+1);
	    scanf ("%d", &B[i]);C[i][1]= B[i];    }
     
    for (i=0;i<=6;i++)
		for (j=0; j<=1;j++)
		{	printf("C [%d][%d]= [%d]\n", i, j, C[i][j]);    }
    
    getch();
    return 0;
}
 
