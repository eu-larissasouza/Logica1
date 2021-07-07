#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	printf ("\t\t\tTabuada utilizando o comando for\n\n");
	
	int x, tab, y;
	
	printf ("\tEntre com o número da tabuada:\n\t");
	scanf ("%d", &y);
	
	for(x=1; x<=10; x++)

	{
		tab=x*y;
		printf ("\n\t %d x %d = %d\n", y, x, tab);	
	}
    
    system("pause");
    getch();
    return 0;
}
