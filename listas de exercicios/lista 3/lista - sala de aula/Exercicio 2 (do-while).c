#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Total da soma obtido dos cem primeiros n�meros inteiros\n");
	
	int s, i;
		
	s=0;
	i=1;
	
	do
	
	{
		s= s+i;
		i++;
		printf ("\t\n A soma � %d\n", s);
	}
	
	while (i<=100);
	
	printf("\nO valor total do c�lculo � %d", s);
	
    system("pause");
	getch ();
    return 0;
}
