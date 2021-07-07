#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int x, tab, y;
	
	printf ("\t\t\tTabuada\n\n");
	
	printf ("\tEntre com um número:\n\n\t");
	scanf ("\n\n%d", &y);
	
	x=1;
	do
	{
		tab=x*y;
		printf ("\n\t\t%d x %d = %d\n", y, x, tab);
		x++;
	}
    while(x<=10);
    
    system("pause");
    getch();
    return 0;
}
