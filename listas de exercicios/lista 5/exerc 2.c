#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
	int A[8], B[8], i, j, auxiliar, acha, pesq;
	char resp;
	
	for(i=1; i<=8; i++)
	{	printf("Informe o %d� elemento", i+1);
		fflush(stdin);scanf("%d", &A[i]);
		B[i]= A[i]* 5;	}
		 
	for(i=1; i<=7; i++)
		for(j=i++; j<=8; j++)
		{	if(B[i]> B[j])
			{	auxiliar= B[i];
			 	B[i]= B[j];
			 	B[j]= auxiliar;	}	}
	
	for(i=1; i<=8; ++i)
		printf("\n%d\n", B[i]);
	
	printf("\n\n\t Voc� quer fazer uma pesquisa?\n Insira '1' se Sim ou '2' se N�o\n");
	fflush(stdin);scanf("%c", resp);
	
	do{	
		printf("\n\t Entre com o elemento a ser pesquisado:\n\n");
		fflush(stdin);scanf("%d", &pesq);
        i=1;
        acha=0;
        while(i<=8 && acha==0)
        {	if (pesq == B[i])
			acha= 1;
			else
			i++;	}	
		if (acha == 1)
		printf ("\t%d encontrado na %d� posi��o", pesq, i+1);
		else 
		printf ("Sinto muito, %d n�o foi localizado!", pesq);
		
		printf ("\n\tDeseja continuar a pesquisar? Insira '1' se Sim ou '2' se N�o");
		fflush(stdin);	scanf("%c", resp);	}
	while(resp == '1');

	getch();
	return 0;
}
