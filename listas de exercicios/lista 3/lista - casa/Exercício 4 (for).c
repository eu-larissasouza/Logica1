#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Programa para exibir os números de 1 a 20, utilizando for\n");
	
	int i;
	
	for(i=1; i<= 20; i++)              
	
	{
		printf("\n\t%d\n", i);
	}
	
    system("pause");
    getch ();
    return 0;
}	

	

