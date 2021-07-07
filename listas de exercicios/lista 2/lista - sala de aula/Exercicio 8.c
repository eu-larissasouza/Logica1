#include<stdio.h>
#include<conio.h>

int main()

{
	int N1, N2, N3;
	
	printf("Entre com o valor do primeiro numero inteiro");
	scanf("%d", &N1);
	printf("Entre com o valor do segundo numero inteiro");
	scanf("%d", &N2);
	printf("Entre com o valor do terceiro numero inteiro");
	scanf("%d", &N3);
	
	if ( ( ( N1 % 2 == 0 ) && ( N1 % 3 == 0)) || ( ( N2 % 2 == 0 ) && ( N2 % 3 == 0 ) ) || ( ( N3 % 2 == 0 ) && ( N3 % 3 == 0 ) ) )
	{
		if ((N1 % 2 == 0) && (N1 % 3 == 0))
		{	printf("\n Numero divisivel por 2 e 3: %d", N1);	}

		if ((N2 % 2 == 0) && (N2 % 3 == 0))
		{	printf("\n Numero divisivel por 2 e 3: %d", N2);	}

		if ((N3 % 2 == 0) && (N3 % 3 == 0))
		{	printf("\n Numero divisivel por 2 e 3: %d", N3);	}	
	}
	else
	printf("Nao foi digitado nenhum numero divisivel por 2 e 3");
	
	getch();
	return 0;	
}

