#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	
	setlocale(LC_ALL, "Portuguese");
	
	printf(" Gerar RA novo com invers�o dos 4 d�gitos menos significativos do RA inicial. \n\n");


	int RAI[9], RAN[9], i;

	for(i=0;i<=8;++i)
	{
	printf("\tInforme o elemento\t");
	scanf("%d", &RAI[i]);
	RAN[0] = RAI[0], RAN[1] = RAI[1], RAN[2] = RAI[2], RAN[3] = RAI[3], RAN[4] = RAI[4], RAN[5] = RAI[8], RAN[6] = RAI[7], RAN[7] = RAI[6], RAN[8] = RAI[5];
	}
	
	for(i=0;i<=8;++i)
		printf("%d", RAN[i]);
	
	return 0;
	getch ();
}
