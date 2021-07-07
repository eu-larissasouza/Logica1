#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
	int A[12], B[12], C[12], i, j, auxiliar ;
	
    for(i=1; i<=12; i++)
    {	printf("\t Informe o %dº número\t", i);
    	fflush(stdin); scanf("%d", &A[i]);		}
    
	for(i=1; i<=11; i++)
    {    for(j= i++; j<=12; j++)
        {   if( A[i]> A[j])
            {   auxiliar = A[i];
                A[i] = A[j];
                A[j] = auxiliar;
            } 	}	 }
            
	for(i=1; i<=12; i++)
    {	printf("\t Informe o %dº número\t", i);
    	fflush(stdin); scanf("%d", &B[i]);		}
	
	for(i=1; i<=11; i++)
    {    for(j= i++; j<=12; j++)
        {   if( B[i]> B[j])
            {   auxiliar = B[i];
                B[i] = B[j];
                B[j] = auxiliar;
            } 	}	 }
    
    for(i=1; i<=12; i++)
    	C[i]= A[i]+ B[i];	

	for(i=1; i<=11; i++)
    {    for(j= i++; j<=12; j++)
        {   if( C[i]> C[j])
            {   auxiliar = C[i];
                C[i] = C[j];
                C[j] = auxiliar;
            } 	}	 }
            
	for(i=1;i<=12;++i)
		printf("\t%d\n", C[i]);
		
	getch();
	return 0;
}
