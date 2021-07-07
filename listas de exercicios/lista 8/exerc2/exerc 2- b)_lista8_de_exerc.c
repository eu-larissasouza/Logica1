#include<stdio.h>
#include<conio.h>
#include<locale.h>

int entradaa();
int entradab();
int matriza();
int matrizb();
int juncaomatrizes();
int exibicaodedados();

int  A[30], B[30], C[60];
int i, j;

int main(void)
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
	printf("\t ........ Matriz de 60 elementos ........\n");	

	matriza();

    matrizb();

    juncaomatrizes(A[i], B[j], C[i]);

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
    for (i=0; i<=29; i++)
	{	
        A[i]= entradaa(A[i]);
    }
    return 0;
}
int matrizb()
{
    for (j=0; j<=29; j++)
	{	
        B[j]= entradab(B[j]);
    }
    return 0;
}
int juncaomatrizes()
{
    for (i=0; i<=29; i++)
    {
        C[i]= A[i];
    }
    for (j=0;  j<=29; j++)
    {
        C[j+30]= B[j];
    }
    return 0;
}
int exibicaodedados()
{
    for(i=0; i<=59; i++)
    {
        printf("\n\t%d\n", C[i]);
    }
    return 0;
}
