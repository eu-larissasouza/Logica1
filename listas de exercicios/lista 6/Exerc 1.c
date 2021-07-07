#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
    int A[5][3], B[5][3], C[5][3], i, j;
   
    for (i=0; i<=4; ++i)
        for (j=0; j<=1;j++)
        {  	printf("\t Informe o %dº número para A\t", i+1);
            scanf ("%d", &A[i][j]);   
            printf("\t Informe o %dº número para B\t", i+1);
            scanf ("%d", &B[i][j]);
            C[i][j]= A[i][j] + B[i][j];    }

    for (i=0;i<=4;++i)
		for (j=0; j<=2;++j)
		{	printf("C [%d][%d]= [%d]\n", i, j, C[i][j]);    }
    
    getch();
    return 0;
}
