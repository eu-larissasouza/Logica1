#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");

	char(curso);
	printf("\t\t C�digo de Acesso a um curso\n\n");
	
	printf("\t Informe o c�digo: \n\n\tEngenharia - '1' \n\n\tEdifica��es - '2' \n\n\tSistemas El�tricos - '3' \n\n\tTurismo - '4' \n\n\tAn�lise de Sistemas - '5'\n\n");
	scanf("%c", &curso);
	
	switch(curso)
	{
		case '1':
			{
				printf("\t\t Curso de Engenharia \n");
			}
		case '2':
			{
				printf("\t\t Curso de Edifica��es \n");
			}
		case '3':
			{
				printf("\t\t Curso de Sistemas El�tricos \n");
			}
		case '4':
			{
				printf("\t\t Curso de Turismo \n");
			}
		case '5':
			{
				printf("\t\t Curso em An�lise de Sistemas \n");
			}
		default:
			{
				printf("\t\t C�digo inv�lido\n");
			}
	}
	getch();
	return 0;
}
