#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	printf("\t\tPot�ncias de 3 variando de 0 a 15\n\n");
	
	int x, i, result;
	
	x=3;
	i=0;
	
	do
	
	{
		result= pow(x, i);
		printf("\t%d elevado � %d = %d\n\n", x, i, result);
		i++;
	}
	
	while(i<=15);
	
	system("pause");
	getch();
	return 0;
}
