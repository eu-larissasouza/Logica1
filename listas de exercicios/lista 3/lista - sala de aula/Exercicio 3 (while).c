#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf ("\t\t\tTabuada utilizando o comando while\n\n");
	
	int x, tab, y;
	
	printf ("\tEntre com o número da tabuada:\n\t");
	scanf ("%d", &y);
	
	x=1;
	while(x<=10)

	{
		tab=x*y;
		printf ("\n\t %d x %d = %d\n", y, x, tab);	
		x++;
	}
    
    system("pause");
    getch();
    return 0;
}
