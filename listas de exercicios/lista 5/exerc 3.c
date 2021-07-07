#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
	int A[15], B[15], i, j, auxiliar, valor, fat, cont;
	
	fat=1;
	
	for(i=1; i<=15; ++i)
	{
		printf("\t Entre com o elemento \t");
		fflush(stdin);scanf("%d", & A[i]);
		valor= A[i];
		for(cont=1; valor>1; --valor)
		{			
		cont *= valor;			
		fat= cont;	
		}
	B[i]= fat;
	}
	
	for(i=1; i<=14; i++)
    {    for(j= i++; j<=15; j++)
        {   if( B[i]> B[j])
            {   auxiliar = B[i];
                B[i] = B[j];
                B[j] = auxiliar;
            } 	}	 }
            
	for(i=1; i<=15; ++i)
	printf("\t%d", B[i]);
	
	getch ();
	return 0; 
}
