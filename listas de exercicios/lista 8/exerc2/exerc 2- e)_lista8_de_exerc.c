#include<stdio.h>
#include<conio.h>
#include<locale.h>

int entradaa();
int entradab();
int matriza();
int matrizb();
int ordenacaomatrizA();
int ordenacaomatrizB();
int somamatrizC();
int ordenacaomatrizC();
int exibicaodedados();

int A[12], B[12], C[12];
int i, j, aux;

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");

    printf("\t ........ Matriz de 12 elementos ........\n");
    
    matriza();
    
    ordenacaomatrizA();
    
    matrizb();
    
    ordenacaomatrizB();
    
    somamatrizC(A[12], B[12], C[12]);
    
    ordenacaomatrizC();
    
    exibicaodedados();
		
	getch();
	return 0;
}

int entradaa(int X)
{
	printf("\n\t Informe um valor \t");
	scanf("%d", &X); 
	return (X);
}

int entradab(int Y)
{
	printf("\n\t Informe um valor \t");
	scanf("%d", &Y); 
	return (Y);
}
int matriza()
{
    for (i=0; i<=11; i++)
	{	
        A[i]= entradaa(A[i]);
    }
    return 0;
}
int matrizb()
{
    for (i=0; i<=11; i++)
	{	
        B[i]= entradab(B[i]);
    }
    return 0;
}

int ordenacaomatrizA()
{
    int A[12];
    
   	for(i=0; i<=11; i++)
       for(j= i++; j<=12; j++)
       {
            if( A[i]> A[j])
           {   aux = A[i];
               A[i] = A[j];
               A[j] = aux;
           } 
        }
        	 
    return 0;
}

int ordenacaomatrizB()
{
    int B[12];
    
   	for(i=0; i<=11; i++)
       for(j= i++; j<=12; j++)
       {
            if( B[i]> B[j])
           {   aux = B[i];
               B[i] = B[j];
               B[j] = aux;
           } 
        }	 
        
    return 0;
}

int somamatrizC()
{
    for(i=0; i<=11; i++)
    C[i]= A[i]+ B[i];
    
    return 0;
}

int ordenacaomatrizC()
{
    int C[12];
    
   	for(i=0; i<=11; i++)
       for(j= i++; j<=12; j++)
       {
            if( C[i]> C[j])
           {   aux = C[i];
               C[i] = C[j];
               C[j] = aux;
           } 
        }	
         
    return 0;
}
int exibicaodedados()
{
    for(i=0; i<=11; i++)
    {
        printf("\n\t%d\n", C[i]);
    }
    return 0;
}
