#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

int soma(int S)
{
	int z, *i;
    
    i=&z;
    
    for(*i=S-1;*i>=0;--*i)
    {
        S=S+*i;
    }  
return(S);
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int y, *N;
    
    N=&y;
    
    printf("\t ........ Soma dos N primeiros inteiros ........\n");
    printf("\t Você quer fazer a soma de quantos nÃºmeros inteiros?\n\n\t");
	scanf("%d", &*N);
    
    *N=soma(*N);
    
    printf("\n\t A soma dos N inteiros é: \t%d", y);

getch();
return 0;    
}
