#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\t\t Cálculo de Potências \n\n");
	
	int i, Base, Expoente, resultado;
	
	printf("\tInforme o número a ser calculado - base\n\n\t\t");
	scanf("%d", &Base);
	printf("Você escolheu o número %d. Agora, informe a que exponente ele será elevado\n\n\t\t", Base);
	scanf("%d", &Expoente);	
	
	resultado=1;
	
	for(i=0; i< Expoente; i++)
	
	{
		resultado= pow(Base, Expoente);
		printf("\n\t%d elevado à %d = %d\n\n\t", Base, Expoente, resultado);
	}
	
	system("pause");
	getch();
	return 0;
}
