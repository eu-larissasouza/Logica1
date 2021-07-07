#include<stdio.h>
#include<conio.h>

int main()

{
	float V1, V2, D;
	
	printf("Digite o primeiro Valor Numerico");
	scanf("%f", &V1);
	printf("Digite o segundo Valor Numerico");
	scanf("%f", &V2);
	if (V1 == V2)
	printf("Os numeros digitados sao iguais, portanto nao ha diferencas entre eles");
	else{
		if (V1 < V2)
		D= (V2 - V1);
		else
		D= (V1 - V2);
	    printf("A diferenca entre os numeros eh: %f", D);
		}
		
	getch();
	return 0;
}
