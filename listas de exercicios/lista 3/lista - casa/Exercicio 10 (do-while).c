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
		printf("\n\tExecuta C�lculos com as Opera��es Aritm�ticas\n\n");
		
		printf("\n\n\t C�lculos de Adi��o: '+' \n");
		printf("\n\n\t C�lculos de Subtra��o: '-' \n");
		printf("\n\n\t C�lculos de M�ltiplica��o: '*' \n");
		printf("\n\n\t C�lculos de Divis�o: '/' \n");
	
		printf("\n\n\tInforme a opera��o");
		printf("\n\n\t Pressione 'S' para encerrar o programa");
		scanf("%c", &op);
	
		{
			switch(op)
			
			{
				case '+':
					{
						printf("\n\n\t Cool! Voc� escolheu Adi��o\n\n");
						printf("\n\n\tInforme o primeiro n�mero\n\n\t\t");
						scanf("%f", &x);
						printf("\n\n\tInforme o segundo n�mero\n\n\t\t");
						scanf("%f", &y);
						total= x+y;
						printf("Total: %f + %f = %f", x, y, total);
						break;
					}
					
				case '-':
					{
						printf("\n\n\t Cool! Voc� escolheu Subtra��o\n\n");
						printf("\n\n\tInforme o primeiro n�mero\n\n\t\t");
						scanf("%f", &x);
						printf("\n\n\tInforme o segundo n�mero\n\n\t\t");
						scanf("%f", &y);
						total= x-y;
						printf("Total: %f - %f = %f", x, y, total);
						break;	
					}
					
				case '*':
					{
						printf("\n\n\t Cool! Voc� escolheu M�ltiplica��o\n\n");
						printf("\n\n\tInforme o primeiro n�mero\n\n\t\t");
						scanf("%f", &x);
						printf("\n\n\tInforme o segundo n�mero\n\n\t\t");
						scanf("%f", &y);
						total= x*y ;
						printf("Total: %f * %f = %f", x, y, total);	
						break;
					}
					
				case '/':
					{
						printf("\n\n\t Cool! Voc� escolheu Divis�o\n\n");	
						printf("\n\n\tInforme o primeiro n�mero\n\n\t\t");
						scanf("%f", &x);
						printf("\n\n\tInforme o segundo n�mero\n\n\t\t");
						scanf("%f", &y);
						total= x/y;
						printf("Total: %f / %f = %f", x, y, total);
						break;
					}
					
				default:
					{
						printf("\n\n\t Opa, opera��o desconhecida \n\n");
					}		
			}	
		}
	}
	
	while((op != S));
	
	system("pause");
	getch ();
	return 0;
}
