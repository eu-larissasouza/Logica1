#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Programa para exibir os n�meros pares e �mpares entre 1 e 20, utilizando while\n");
	
	int i;
	
    i=1;
    
	for (i=1; i<=20; i++)
	
	{	
		if (i % 2 == 0)	
		printf ("\n\t%d � par\n", i);
	
		else 
	    printf ("\n\t%d � �mpar\n", i);
	}	
    
    system("pause");
    getch ();
    return 0;
}
