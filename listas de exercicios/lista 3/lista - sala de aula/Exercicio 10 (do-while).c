#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf("Total da soma dos números pares existentes entre 1 e 500\n");
	
	int s, i;
		
	s=0;
	i=1;
	
	do
	
	{
		if(i % 2 == 0)
		{
		s= s+i;
		printf ("\t\n A soma é %d\n", s);
		}
		i++;
	}
	
	while(i<=500);
	
	printf("\nO valor total do cálculo é %d\n", s);
	
    system("pause");
	getch ();
    return 0;
}
