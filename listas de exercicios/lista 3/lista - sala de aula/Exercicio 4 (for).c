#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("\t\tMultiplica��o sucessiva por 3 de um n�mero menor ou igual � 50\n\n");
	
	printf("Informe um n�mero menor ou igual � 50\n\t");
	scanf("%d", &x);
	
	for(x>=50; x<250; x= x*3)
	
	{
		printf("\n\tA multiplica��o � igual a: %d\n\n", x);
	}
	
	printf("\n\tValor final encontrado: %d\n", x);
	
	system("pause");
	getch ();
	return 0;
}
