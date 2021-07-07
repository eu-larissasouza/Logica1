#include<stdio.h>
#include<conio.h>

int main()

{
	float M, N1, N2, N3;
	
	printf("Informe a nota 1");
	scanf("%f", &N1);
	printf("Informe a nota 2");
	scanf("%f", &N2);
	printf("Informe a nota 3");
	scanf("%f", &N3);
	M= ((N1 + N2 + N3)/3);
	if (M >=6.0)
	printf("Aprovado com media: %f", M);
	else
	printf("Reprovado com media: %f", M);

	getch();
	return 0;
}
