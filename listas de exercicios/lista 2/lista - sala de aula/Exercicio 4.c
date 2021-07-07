#include<stdio.h>
#include<conio.h>

int main()

{
	float A, B, C;
	
	printf("Digite o primeiro valor para o lado de um Triangulo");
	scanf("%f", &A);
	printf("Digite o segundo valor para o lado de um Triangulo");
	scanf("%f", &B);
	printf("Digite o terceiro valor para o lado de um Triangulo");
	scanf("%f", &C);
	if ((A < B + C) && (B < A + C) && (C < A + B))
	
	{
	if ((A == B) && (B == C))
	{printf("Estes valores formam um Triangulo Equilatero");	}
	else{
		if ((A == B) || (A == C) || (B == C))
		{printf("Estes valores formam um Triangulo Isosceles");		}
		else{
			if (((A < B) || (A > B)) && ((B < C) || (B > C)))
			{printf("Estes valores formam um Triangulo Escaleno");		}	
			}
		}
			
	}
	else
	printf("Estes valores nao formam um Triangulo");
		
	getch();
	return 0;
}
