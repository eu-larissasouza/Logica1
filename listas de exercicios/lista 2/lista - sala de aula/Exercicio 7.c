#include<stdio.h>
#include<conio.h>

int main()

{
	int N,X;
	
	printf("Informe o valor inteiro de N");
	scanf("%d", &N);
	if (N < 0)
	X= (N *-1);
	else
	X= N;
	printf("O valor do modulo deste numero eh: %d", X);
	
	getch();
	return 0;
}
