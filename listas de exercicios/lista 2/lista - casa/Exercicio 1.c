#include<stdio.h>
#include<conio.h>

int main()

{
	int Num;
	
	printf("Digite um numero inteiro");
	scanf("%d", &Num);
	if (Num % 2 == 0)
	printf("O numero digitado eh Par");
	else
	printf("O numero digitado eh Impar");
	
	getch();
	return 0;
}
