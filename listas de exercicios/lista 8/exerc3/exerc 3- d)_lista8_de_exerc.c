#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int entrada();
int potenciacao();
int saida();

int i, X, Y, result;

int main()
{
	system("color 0f");
    setlocale(LC_ALL, "Portuguese");
			
	entrada();
	potenciacao(X, Y);
	saida();
	
	getch();
	return 0;
}

int potenciacao(X, Y)
{
	result= pow(X, Y);

    return (result);
}

int entrada()
{
	printf("\t ........ Potência de um número qualquer ........\n\n");
	printf("\tInforme o número a ser a base\n\n\t");
	scanf("%d", &X);
	printf("\n\t Agora, informe a que exponente ele será elevado\n\n\t");
	scanf("%d", &Y);
	
	return 0;
}

int saida()
{
	printf("\n\n\t %d elevado à  %d = %d\n", X, Y, result);
	return 0;
}
