#include<stdio.h>
#include<conio.h>
#include<locale.h>

int fibonacci();
int entrada();
int saida();
int F, N;

int main ()

{
    system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
   entrada();
	fibonacci(N);
	saida();

	getch ();
    return 0;
}
int fibonacci(N)
{
	int i, a, b;
    a = 0;
    b = 1;

    for(i = 0; i <=N; ++i)
    {  
        F = a + b;
        a = b;
        b = F;
        printf("\t %d\n", F);
    }
    return (F);
}
int entrada()
{	
	printf("\t ........ Fibonacci de N termos ........\n");	
	printf("\t Você quer efetuar o cálculo de Fibonacci para quantos termos?\n\n\t");
	scanf("%d", &N);  
	return 0;
}
int saida()
{
	printf ("\n\t\t Fibonacci de N termos: %d\n", F);
	return  0;
}
	
