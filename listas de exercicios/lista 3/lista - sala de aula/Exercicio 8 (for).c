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

  for(i = 0; i < 15; i++)
  {
    ajudante = x + y;
    x = y;
    y = ajudante;
 
    printf("%d\n", ajudante);
  }

  system("pause");
  getch ();
  return 0;
}
