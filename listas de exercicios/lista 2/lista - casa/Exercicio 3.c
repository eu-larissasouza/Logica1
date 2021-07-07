#include<stdio.h>
#include<conio.h>

int main()

{
    float Nota, notaMultiplicada, Resto, Resultado;

    printf("Entre com a Nota");
    scanf("%f", &Nota);
    notaMultiplicada= (Nota * 100);
    Resto= (notaMultiplicada /100);
    if (Resto >= 51)
    Resultado= (Nota - (Resto/ 100)) +1;
    else
    Resultado= (Nota - (Resto/ 100));
    printf("O resultado eh: %f", Resultado);

    getch();
    return 0;
}
