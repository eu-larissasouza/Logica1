#include<stdio.h>
#include<conio.h>

int main()

{
	int Num, NumChave;
	
	printf("Digite um numero inteiro");
	scanf("%d", &Num);
	NumChave= 20;
	if( ( (Num > 0) || (Num == 0) ) && ( (Num < 100) || (Num == 100) ) )
	{
	Num= (Num- NumChave);
		{
		if(Num < 0)
		Num= (Num *-1);
		}
	printf("A distancia entre o numero digitado e o numero chave eh: %d", Num);	
	}

	else
	printf("Numero digitado incorreto");
	
	getch();
	return 0;
}
