#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");
	
	char mes;
	printf("\t\t\t Meses do ano\n\n");
	printf("\t Em que m�s estamos?\n\n");
	printf("\t M�s '1' "); 	printf("\t\t M�s '2' \n\n");
	printf("\t M�s '3' ");	printf("\t\t M�s '4' \n\n");
	printf("\t M�s '5' ");	printf("\t\t M�s '6' \n\n");
	printf("\t M�s '7' ");	printf("\t\t M�s '8' \n\n");
	printf("\t M�s '9' ");	printf("\t\t M�s '10' \n\n");
	printf("\t M�s '11' ");	printf("\t\t M�s '12' \n\n\n\t");
	
	scanf("%c", &mes);
	
	switch(mes)
	{
		case '1': 
		printf("\t Janeiro \n\n"); break;
		case '2':
		printf("\t Fevereiro \n\n"); break;
		case '3':
		printf("\t Mar�o \n\n"); break;
		case '4':
		printf("\t Abril \n\n"); break;
		case '5':
		printf("\t Maio \n\n"); break;
		case '6':
		printf("\t Junho \n\n"); break;
		case 7:
		printf("\t Julho \n\n"); break;
		case 8:
		printf("\t Agosto \n\n"); break;
		case 9:
		printf("\t Setembro \n\n"); break;
		case 10:
		printf("\t Outubro \n\n"); break;
		case 11:
		printf("\t Novembro \n\n"); break;
		case 12:
		printf("\t Dezembro \n\n"); break;
		default:
		printf("\t M�s Inv�lido \n\n"); break;
		 }
	getch ();
	return 0; 
}
