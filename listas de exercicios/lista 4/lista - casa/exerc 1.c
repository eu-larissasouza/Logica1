#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\t Vírus no sistema de banco de dados da universidade \n\n");


	int RAV[9], RAC[9], i;

	for(i=0;i<=8;++i)
	{
	printf("\t\tInforme o elemento\n\t");
	scanf("%d", &RAV[i]);
	RAC[0] = RAV[0], RAC[1] = RAV[1], RAC[2] = RAV[7], RAC[3] = RAV[6], RAC[4] = RAV[4], RAC[5] = RAV[5], RAC[6] = RAV[2], RAC[7] = RAV[3], RAC[8] = RAV[8];
	}
	
	for(i=0;i<=8;++i)
		printf("%d", RAC[i]);
	
	return 0;
	getch ();
}
