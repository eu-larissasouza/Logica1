#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main ()
{
	printf("Programa para exibir os valores numéricos inteiros ímpares entre 0 e 20.\n");
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=0; i<=20; i++)
	
	{
		if (i % 2 == 1)
		printf ("\n\t%d é ímpar\n", i);
	}
	
    system("pause");
    getch ();
    return 0;
}
