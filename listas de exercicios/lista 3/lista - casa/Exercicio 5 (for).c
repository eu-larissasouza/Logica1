#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Programa para exibir os n�meros �mpares entre 1 e 20, utilizando for\n");
	
	int i;
	
	for (i=1 ; i<=20; i++)
	
	{
		if (i % 2 == 1)
		printf ("\n\t%d � �mpar\n", i);
	}	
	
	system("pause");
    getch ();
    return 0;
}
