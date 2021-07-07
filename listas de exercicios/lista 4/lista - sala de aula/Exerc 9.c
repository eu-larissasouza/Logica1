#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()
{
	system("color 0f");
	setlocale(LC_ALL, "Portuguese");

	char(curso);
	printf("\t\t Código de Acesso a um curso\n\n");
	
	printf("\t Informe o código: \n\n\tEngenharia - '1' \n\n\tEdificações - '2' \n\n\tSistemas Elétricos - '3' \n\n\tTurismo - '4' \n\n\tAnálise de Sistemas - '5'\n\n");
	scanf("%c", &curso);
	
	switch(curso)
	{
		case '1':
			{
				printf("\t\t Curso de Engenharia \n");
			}
		case '2':
			{
				printf("\t\t Curso de Edificações \n");
			}
		case '3':
			{
				printf("\t\t Curso de Sistemas Elétricos \n");
			}
		case '4':
			{
				printf("\t\t Curso de Turismo \n");
			}
		case '5':
			{
				printf("\t\t Curso em Análise de Sistemas \n");
			}
		default:
			{
				printf("\t\t Código inválido\n");
			}
	}
	getch();
	return 0;
}
