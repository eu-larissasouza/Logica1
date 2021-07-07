#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main(void)

{
	setlocale(LC_ALL, "Portuguese");
	
	float x, i, resultado, S;
	char calc;
	
	while(calc != S)
	
	{	
		printf("\n\n\t\t Cálculo lógico \n\n");
		printf("\n\t Executa um dos cálculos escolhidos \n\n");
	
		printf("\n\n\t Cálculo da potência de x elevado a 3: 1 \n");
		printf("\n\n\t Cálculo da raiz quadrada de x: 2 \n");	 
		printf("\n\n\t Cálculo do fatorial de x: 3  \n");
		printf("\n\n\t Sair: 4  \n");
		
		printf("\n\n\tInforme um cálculo:");
		scanf("%c", &calc);
		
		switch (calc)
		 {
		 	case '1':
				{
					printf("\n\n\t Cool! Cálculo da potência de X elevado a 3 \n\n");
					printf("\n\n\t Informe um valor para x \n\n\t\t");
					scanf("%f", &x);
					i=3;
					resultado= pow(x, i);
					printf("Resultado: %f elevado à %f = %f", x, i, resultado);
					break;	
				}
				
			case '2':
				{
					printf("\n\n\t Cool! Cálculo da raiz quadrada de x \n\n");						
					printf("\n\n\t Informe um valor para x \n\n\t\t");
					scanf("%f", &x);						
					resultado= sqrt(x);
					printf("Resultado: A raiz de %f é %f", x, resultado);	
					break;
				}
				
			case '3':
				{
					printf("\n\n\t Cool! Cálculo do fatorial de x \n\n");	
					printf("\n\n\t Informe um valor para x \n\n\t\t");
					scanf("%f", &x);						
					for(i=1; x>1; x--)
					{
					i *= x;
					resultado= i;
					printf("Resultado: O cálculo fatorial é %f", resultado);
					}						
					break;
				}		
			case '4':
				{
					getch ();
					return 0;
				}
		 }	
	}
	
	system("pause");
	getch ();
	return 0;
}
