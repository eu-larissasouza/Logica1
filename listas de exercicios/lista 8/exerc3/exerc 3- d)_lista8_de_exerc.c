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
	printf("\t ........ Pot�ncia de um n�mero qualquer ........\n\n");
	printf("\tInforme o n�mero a ser a base\n\n\t");
	scanf("%d", &X);
	printf("\n\t Agora, informe a que exponente ele ser� elevado\n\n\t");
	scanf("%d", &Y);
	
	return 0;
}

int saida()
{
	printf("\n\n\t %d elevado � %d = %d\n", X, Y, result);
	return 0;
}
