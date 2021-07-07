#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Programa para exibir os quadrados dos números inteiros de 15 a 200.\n");
	
	int i, x;
	
	for(i=15; i<=200; i++)
	
	{
		x= pow(i,2);
		printf("\n\t O quadrado de %d é %d\n", i, x);
	}
	
	system("pause");
	getch();
	return 0;
}
