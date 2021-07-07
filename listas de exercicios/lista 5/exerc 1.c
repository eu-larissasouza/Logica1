#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
    int A[12], i, j, auxiliar;
    
    for(i=0; i<=11; i++)
    {	printf("\t Informe o %dº número\t", i+1);
    	fflush(stdin); scanf("%d", &A[i]);		}
		
    for(i=0; i<=10; i++)
    {    for(j= i++; j<=11; j++)
        {   if( A[i]> A[j])
            {   auxiliar = A[i];
                A[i] = A[j];
                A[j] = auxiliar;
            } 	}	 }
          
    printf("\n\t Ordem Decrescente \n\n") ;
	 
	for(i=12;i<=1;--i)
		{printf("\t%d\n", A[i]);	}
		
	getch();
	return 0;
}

