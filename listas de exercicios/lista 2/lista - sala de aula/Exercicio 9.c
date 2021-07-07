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
	
	if (((N1 % 4 == 0) && (N1 % 5 == 0)) || ((N2 % 4 == 0) && (N2 % 5 == 0)) || ((N3 % 4 == 0) && (N3 % 5 == 0)) )
	{
		if ((N1 % 4 == 0) && (N1 % 5 == 0))
		{	printf("\n Numero divisivel por 4 e 5: %d", N1);	}

		if ((N2 % 4 == 0) && (N2 % 5 == 0))
		{	printf("\n Numero divisivel por 4 e 5: %d", N2);	}

		if ((N3 % 4 == 0) && (N3 % 5 == 0))
		{	printf("\n Numero divisivel por 4 e 5: %d", N3);	}
	}
	
	else
	printf("Nao foi digitado nenhum numero divisivel por 4 e 5");
	
	getch();
	return 0;	
}
