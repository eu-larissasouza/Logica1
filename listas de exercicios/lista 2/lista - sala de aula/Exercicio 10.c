#include<stdio.h>
#include<conio.h>

int main()

{
	int Num1, Num2, Num3, Num4, Num5, B, B2;
	
	printf("Digite o primeiro numero inteiro");
	scanf("%f", &Num1);
	printf("Digite o segundo numero inteiro");
	scanf("%f", &Num2);
	printf("Digite o terceiro numero inteiro");
	scanf("%f", &Num3);
	printf("Digite o quarto numero inteiro");
	scanf("%f", &Num4);
	printf("Digite o terceiro numero inteiro");
	scanf("%f", &Num5);
	B= Num1;
	B2= Num1;
	
	
	if ( Num2 > B )
	{ B= Num2; }
	
	if ( Num3 > B )
	{ B= Num3; }
	
	if ( Num4 > B )
	{ B= Num4; }
	
	if ( Num5 > B )
	{ B= Num5; }
	printf("O valor maior eh: %f", B);
	
	
	
	if ( Num2 < B2 )
	{ B2= Num2; }
	
	if ( Num3 < B2 )
	{ B2= Num3; }
	
	if ( Num4 < B2 )
	{ B2= Num4; }
	
	if ( Num5 < B2 )
	{ B2= Num5; }
	printf("O valor menor eh: %f", B2);

	getch();
	return 0;
}
