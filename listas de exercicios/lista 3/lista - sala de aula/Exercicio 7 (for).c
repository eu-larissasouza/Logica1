#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\t\tPotências de 3 variando de 0 a 15\n\n");
	
	int x, i, result;
	
	x=3;
	
	for(i=0;i<=15;i++)
	
	{
		result= pow(x, i);
		printf("\t%d elevado à %d = %d\n\n", x, i, result);
		
	}
	
	system("pause");
	getch();
	return 0;
}
