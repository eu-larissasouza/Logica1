#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(void)

{

	setlocale(LC_ALL, "Portuguese");
	
	float x, y, total, S;
	char op;
	
	do
	
	{
		
		printf("\n\n\t\t Calculadora Decline \n\n");
		printf("\n\tExecuta Cálculos com as Operações Aritméticas\n\n");
		
		printf("\n\n\t Cálculos de Adição: '+' \n");
		printf("\n\n\t Cálculos de Subtração: '-' \n");
		printf("\n\n\t Cálculos de Múltiplicação: '*' \n");
		printf("\n\n\t Cálculos de Divisão: '/' \n");
	
		printf("\n\n\tInforme a operação");
		printf("\n\n\t Pressione 'S' para encerrar o programa");
		scanf("%c", &op);
	
		{
			switch(op)
			
			{
				case '+':
					{
						printf("\n\n\t Cool! Você escolheu Adição\n\n");
						printf("\n\n\tInforme o primeiro número\n\n\t\t");
						scanf("%f", &x);
						printf("\n\n\tInforme o segundo número\n\n\t\t");
						scanf("%f", &y);
						total= x+y;
						printf("Total: %f + %f = %f", x, y, total);
						break;
					}
					
				case '-':
					{
						printf("\n\n\t Cool! Você escolheu Subtração\n\n");
						printf("\n\n\tInforme o primeiro número\n\n\t\t");
						scanf("%f", &x);
						printf("\n\n\tInforme o segundo número\n\n\t\t");
						scanf("%f", &y);
						total= x-y;
						printf("Total: %f - %f = %f", x, y, total);
						break;	
					}
					
				case '*':
					{
						printf("\n\n\t Cool! Você escolheu Múltiplicação\n\n");
						printf("\n\n\tInforme o primeiro número\n\n\t\t");
						scanf("%f", &x);
						printf("\n\n\tInforme o segundo número\n\n\t\t");
						scanf("%f", &y);
						total= x*y ;
						printf("Total: %f * %f = %f", x, y, total);	
						break;
					}
					
				case '/':
					{
						printf("\n\n\t Cool! Você escolheu Divisão\n\n");	
						printf("\n\n\tInforme o primeiro número\n\n\t\t");
						scanf("%f", &x);
						printf("\n\n\tInforme o segundo número\n\n\t\t");
						scanf("%f", &y);
						total= x/y;
						printf("Total: %f / %f = %f", x, y, total);
						break;
					}
					
				default:
					{
						printf("\n\n\t Opa, operação desconhecida \n\n");
					}		
			}	
		}
	}
	
	while((op != S));
	
	system("pause");
	getch ();
	return 0;
}
