#include<stdio.h>
#include<conio.h>
#include<locale.h>

int entrada();
int calculoatraso();
int saida();

float val, tax, tem, prest;

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
	entrada();
	calculoatraso(val, tax,tem);
	saida();
	
	getch();
	return 0;
}

int calculoatraso(valor,taxa,tempo)
{
   prest = val + (val * (tax/100) * tem);
   return (prest);
}

int entrada()
{
    printf("\t ........ C�lculo da Presta��o em Atraso........\n\n");
    printf("\t Informe o valor da presta��o em Atraso:\n\n\t");
    scanf("%f", &val);
    printf("\n\t Informe a taxa da presta��o em atraso: \n\n\t");
    scanf("%f", &tax);
    printf("\n\t Informe o tempo da presta��o em atraso:\n\n\t");
    scanf("%f", &tem); 
}

int saida()
{
	printf ("\n\t O valor da presta��o em atraso �: %.2f", prest);
	return  0;
}
