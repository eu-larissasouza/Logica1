#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Programa para exibir os números de 1 a 20, utilizando while\n");
	
	int i;
	
	i=1;
	
	while (i<= 20)
	
	{
		printf("\n\t%d\n", i);
		i++;
	}
	
	system("pause");
    getch ();
    return 0;
	
}	
