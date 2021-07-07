#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf ("\t\t\tTabuada utilizando o comando do-while\n\n");
	
	int x, tab, y;
	
	printf ("\tEntre com o número da tabuada:\n\t");
	scanf ("%d", &y);
	
	x=1;
	
	do

	{
		tab=x*y;
		printf ("\n\t %d x %d = %d\n", y, x, tab);	
		x++;
	}
	
    while(x<=10);
    
    system("pause");
    getch();
    return 0;
}
