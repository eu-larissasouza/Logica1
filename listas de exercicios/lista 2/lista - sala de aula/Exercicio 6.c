#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{
	float A, B, C, Delta, X1, X2;
	
	printf("Equacao do segundo grau \n\n");
	printf("Digite o coeficiente A");
	scanf("%f", &A);
	printf("Digite o coeficiente B");
	scanf("%f", &B);
	printf("Digite o coeficiente C");
	scanf("%f", &C);
	if ((A < 0) || (A > 0))
	
	{
		Delta= pow(B, 2)(-4 * A * C);
		{
		if (Delta < 0)
		{printf("A equacao nao possui uma solucao");	}
		else{
			if(Delta = 0)
			{
				X1= ((-B)/2*A);
				X2= X1;
				printf("A equacao tem duas raizes reais e iguais: %f, %f", X1, X2);
			}
			else{
				X1=(B+sqrt(Delta))/(2*A);
				X2=(B-sqrt(Delta))/(2*A);
				printf("A equacao tem duas raizes reais e diferentes: %f, %f", X1, X2);
				}
			}
		}
	}
	else
	printf("Nao eh uma equacao de segundo grau!");
	
	getch();
	return 0;
}
