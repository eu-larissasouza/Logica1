#include<stdio.h>
#include<conio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	printf ("\t\tNumeros divisiveis por 4 menores que 200\n\n");
	
	int i;
	
	i=1;
	
	do
	
	{
		if (i % 4==0)
		printf ("\tDivisível por 4: %d\n\n", i);
		i++;
	}	
	
	while(i<200);
	
	system("pause");
    getch();
    return 0;
}
