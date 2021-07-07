#include<stdio.h>
#include<conio.h>

int main()

{
	float N1, N2, M, NExam, NM;
	
	printf("Digite a primeira nota");
	scanf("%f", &N1);
	printf("Digite a segunda nota");
	scanf("%f", &N2);
	M= (N1+N2)/2;
	if (M >= 6.0)
	printf("Aluno aprovado com média: %f", M);
	else
	printf("Digite a Nota do Exame");
	scanf("%f", &NExam);
	NM=(NExam+M)/2;
		if (NM >=5.0)
		printf("Aluno Aprovado em exame com média: %f", NM);
		else
		printf("Aluno Reprovado em exame com média: %f", NM);
		
		getch();
		return 0;
}
