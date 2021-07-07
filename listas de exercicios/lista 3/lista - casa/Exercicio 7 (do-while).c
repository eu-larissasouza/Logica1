#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main ()

{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Programa para exibir os números de 1 a 20, utilizando do-while\n");
	
	int i;
	
    i=1;
    
    do
	
	{
		printf("\n\t%d\n", i);
		i++;
	}
	
	while (i<= 20);
	
	system("pause");
    getch ();
    return 0;
	
}	
