#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Total da soma dos n�meros pares existentes entre 1 e 500\n");
	
	int s, i;
		
	s=0;
	i=1;
	
	while(i<=500)
	
	{
		if(i % 2 == 0)
		{
		s= s+i;
		printf ("\t\n A soma � %d\n", s);
		}
		i++;
	}
	
	printf("\nO valor total do c�lculo � %d\n", s);
	
    system("pause");
	getch ();
    return 0;
}
