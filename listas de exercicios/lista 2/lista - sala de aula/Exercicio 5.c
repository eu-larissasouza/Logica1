#include<stdio.h>
#include<conio.h>

int main()

{
	float A, B, C;
	
	printf("Digite o primeiro valor");
	scanf("%f", &A);
	printf("Digite o segundo valor");
	scanf("%f", &B);
	printf("Digite o terceiro valor");
	scanf("%f", &C);
	if ((A == B) && (B == C)) 
	{printf("Os valores sao iguais, portanto nao possibilitam uma ordem crescente");	}
	else{	
	
		{	
			if((A < B) && (A < C) && (B < C))
			{printf("Os valores em ordem crescente sao respectivamente: %.2f, %.2f, %.2f", A, B, C);	}
			else{
				if ((A < B) && (A < C) && (C < B))
				{printf("Os valores em ordem crescente sao respectivamente: %.2f, %.2f, %.2f", A, C, B);	}
				else{
					if((B < A) && (B < C) && (A < C))
					{printf("Os valores em ordem crescente sao respectivamente: %.2f, %.2f, %.2f", B, A, C);	}
					else{
						if((B < A) && (B < C) && (C < A))
						{printf("Os valores em ordem crescente sao respectivamente: %.2f, %.2f, %.2f", B, C, A);	}	
						else{
							if((C < A) && (C < B) && (A < B))
							{printf("Os valores em ordem crescente sao respectivamente: %.2f, %.2f, %.2f", C, A, B);	}
							else{
								if((C < A) && (C < B) && (B < A))
								{printf("Os valores em ordem crescente sao respectivamente: %.2f, %.2f, %.2f", C, B, A);	}
								}
							}
						}	
					}
				}
			}	
 		}
	
	getch();
	return 0;
}
