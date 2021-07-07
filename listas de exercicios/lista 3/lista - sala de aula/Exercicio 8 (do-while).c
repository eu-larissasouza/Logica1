#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main()

{
  setlocale(LC_ALL, "Portuguese");
  
  printf("\n\t\t Programa que exibe a série de Fibonacci \n");
  
  int x, y, ajudante, i;
 
  x = 0;
  y = 1;
  i = 0;

  do
  {
    ajudante = x + y;
    x = y;
    y = ajudante;
    printf("%d\n", ajudante);
	i++;
  }
  while(i < 15);

  system("pause");
  getch ();
  return 0;
}
