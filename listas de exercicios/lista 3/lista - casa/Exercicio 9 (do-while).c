#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Programa para exibir os n�meros pares e �mpares entre 1 e 20, utilizando do-while\n");
	
	int i;
	
    i=1;
    do	
 
	{
		if (i % 2 == 0)	
		printf ("\n\t%d � par\n", i);
		
		else 
	    printf ("\n\t%d � �mpar\n", i);
		i++;
	}	
    
	while (i<=20);

    system("pause");
    getch ();
    return 0;
}
