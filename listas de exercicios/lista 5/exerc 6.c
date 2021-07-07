#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
	int A[30], B[30], i, acha, pesq;
	char (resp);
	
	for(i=1;i<=30;++i)
	{	printf("\t Informe o %dº elemento\t", i);
		fflush(stdin);scanf("\t %d", &A[i]);
		B[i]= pow(A[i],2);
	}
	
	printf("\n\n\t Você quer fazer uma pesquisa?\n Insira '1' se Sim ou '2' se Não\n");
	fflush(stdin);scanf("%c", resp);
	
	do{	
		printf("\n\t Entre com o elemento a ser pesquisado:\n\n");
		fflush(stdin);scanf("%d", &pesq);
        i=1;
        acha=0;
        while(i<=30 && acha==0)
        {	if (pesq == B[i])
			acha= 1;
			else
			i++;	}	
		if (acha == 1)
		printf ("\t%d encontrado na %dº posição", pesq, i+1);
		else 
		printf ("Sinto muito, %d não foi localizado!", pesq);
		
		printf ("\n\tDeseja continuar a pesquisar? Insira '1' se Sim ou '2' se Não");
		fflush(stdin);	scanf("%c", resp);	}
	while(resp == '1');
        
	getch();
	return 0;
}
