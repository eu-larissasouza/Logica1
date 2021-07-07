#include<stdio.h>
#include<conio.h>

int main()

{
	float A, B, C;
	
	printf("Digite tres numeros diferentes");
	scanf("%f, %f, %f", &A, &B, &C);
	if( ( A > B ) && ( A > C ) && ( B > C ) )
	{printf("O valor maior, o valor menor e o valor do meio sao respectivamente: %.2f, %.2f, %.2f"
	, A, B, C); }
	else{
		if( ( A > B ) && ( A > C ) && ( C > B ) )
		{printf("O valor maior, o valor menor e o valor do meio sao respectivamente: %.2f, %.2f, %.2f", A, C, B); }
		else{
			if( ( B > A ) && ( B > C ) && ( A > C ) )
			{printf("O valor maior, o valor menor e o valor do meio sao respectivamente: %.2f, %.2f, %.2f", B, A, C); } 
			else{
				if( ( B > A ) && ( B > C ) && ( C > A ) )
				{printf("O valor maior, o valor menor e o valor do meio sao respectivamente: %.2f, %.2f, %.2f", B, C, A); }
				else{
					if( ( C > A ) && ( C > B ) && ( A > B ) )
					{printf("O valor maior, o valor menor e o valor do meio sao respectivamente: %.2f, %.2f, %.2f", C, A, B); }
					else{
						if( ( C > A ) && ( C > B ) && ( B > A ) )
						{printf("O valor maior, o valor menor e o valor do meio sao respectivamente: %.2f, %.2f, %.2f", C, B, A); }
						}
					}	
				}		
			}
		}
}

