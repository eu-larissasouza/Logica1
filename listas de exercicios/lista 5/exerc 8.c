#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
	int Nota[40], i, j, pesq, acha, auxiliar;
	char (resp);
	
	for(i=1;i<=40;++i)
	{	printf("\t Informe a nota do %dº aluno\t", i);
		fflush(stdin);scanf("\t%d", &Nota[i]);
	}
	for(i=1;i<=40;++i)
		printf("\t%d\n", Nota[i]);
	
	for(i=1; i<=39; i++)
		for(j=i++; j<=40; j++)
		{	if(Nota[i]> Nota[j])
			{	auxiliar= Nota[i];
			 	Nota[i]= Nota[j];
			 	Nota[j]= auxiliar;	}	}
				 	
	printf("\n\n\t Você quer fazer uma pesquisa?\n Insira '1' se Sim ou '2' se Não\n");
	fflush(stdin);scanf("%c", resp);
	
	do{	
		printf("\n\t Entre com o elemento a ser pesquisado:\n\n");
		fflush(stdin);scanf("%d", &pesq);
        i=1;
        acha=0;
        while(i<=30 && acha==0)
        {	if (pesq == Nota[i])
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
