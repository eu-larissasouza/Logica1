#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Programa para exibir os n�meros pares entre 1 e 20, utilizando while\n");
	
	int i;
	
	i=1;
	
	while (i<=20)
	
	{		
		{
			if (i % 2==0)
			printf ("\n\t%d � par\n", i);
		}
		i++;
	}
	
    system("pause");
    getch ();
    return 0;
}
