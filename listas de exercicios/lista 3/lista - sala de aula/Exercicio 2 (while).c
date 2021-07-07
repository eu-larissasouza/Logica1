#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Total da soma obtido dos cem primeiros números inteiros\n");
	
	int s, i;
		
	s=0;
	i=1;
	
	while (i<=100)
	
	{
		s= s+i;
		i++;
		printf ("\t\n A soma é %d\n", s);
	}
	
	printf("\nO valor total do cálculo é %d", s);
	
    system("pause");
	getch ();
    return 0;
}
