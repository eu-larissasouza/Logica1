#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("\t\tMultiplicação sucessiva por 3 de um número menor ou igual à 50\n\n");
	
	printf("Informe um número menor ou igual à 50\n\t");
	scanf("%d", &x);
	
	for(x>=50; x<250; x= x*3)
	
	{
		printf("\n\tA multiplicação é igual a: %d\n\n", x);
	}
	
	printf("\n\tValor final encontrado: %d\n", x);
	
	system("pause");
	getch ();
	return 0;
}
