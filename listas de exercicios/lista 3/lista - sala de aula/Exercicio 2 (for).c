#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Total da soma obtido dos cem primeiros números inteiros\n");
	
	int s, i;
		
	s=0;
	
	for(i=1; i<=100; i++)
	
	{
		s= s+i;
		printf ("\t\n A soma é %d\n", s);
	}
	
	printf("\nO valor total do cálculo é %d\n", s);
	
    system("pause");
	getch ();
    return 0;
}
