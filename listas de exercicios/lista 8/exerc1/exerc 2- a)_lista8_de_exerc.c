#include<stdio.h>
#include<conio.h>
#include<locale.h>

int soma();
int entrada();
int saida();
int S, N;

int main ()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
	entrada();
	soma(N);
	saida();

	getch ();
    return 0;
}
int soma(N)
{
    int i;
    S= 0;
    
    for(i=1; i<=N; i++)
	{
    	S= S+i;
    	printf("\t %d\n", S);
    }		
    return (S);
}
int entrada()
{
	printf("\t ........ Soma dos N primeiros inteiros ........\n");	
	
	printf("\t Você quer fazer a soma de quantos números inteiros?\n\n\t");
	scanf("%d", &N);
	return (N);
}
int saida()
{	
	printf ("\t\n A soma dos N inteiros é %d\n", S);
	return 0;
}
