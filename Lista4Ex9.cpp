#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int opcao;
	float n1,n2,res;
	char reset;
	do
	{
	system("cls");
	printf("Calculadora Simples  \n\nDigite dois valores\n\n1° operando: "); scanf("%f",&n1); printf("\n2° operando: "); scanf("%f",&n2);
	do 
	{
	printf("\nQual operação deseja executar de acordo com as opções abaixo?\n\n1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\n\nOpção: "); scanf("%d",&opcao);
	if (opcao<1||opcao>4)
	{
		system("cls");
		printf("\nOpção inválida! Por favor, escolha uma opção entre 1 e 4.\n");
	}
	}	
	while (opcao<1||opcao>4);
	if (opcao==1)
	{
		res=n1+n2;
		printf("\nO resultado da soma de %.2f + %.2f é = %.2f",n1,n2,res);
	}
	else if (opcao==2)
	{
		res=n1-n2;
		printf("\nO resultado da subtração de %.2f - %.2f é = %.2f",n1,n2,res);
	}
	else if (opcao==3)
	{
	
		res=n1*n2;
		printf("\nO resultado da multiplicação de %.2f x %.2f é = %.2f",n1,n2,res);
	}
	else if (opcao==4)
	{
		 if (n2!=0)
		{
		res=n1/n2;;
		printf("\nO resultado da divisão de %.2f / %.2f é = %.2f",n1,n2,res);
		printf("\n\nDeseja Reiniciar?  S= Sim N= Não\n"); scanf("%c", &reset);
		while (reset=='S'||reset=='s');
		}
		else 
		{
		printf("\nO Divisor não pode ser igual a zero.");
		printf("\n\nDeseja Reiniciar?  S= Sim N= Não\n"); scanf("%c", &reset);
		while (reset=='S'||reset=='s');
		}
	}
	else 
		printf("\n\nAlgo deu errado!!  Deseja Reiniciar?  S= Sim N= Não\n"); scanf("%c", &reset);
	}
	while (reset=='S'||reset=='s');

return 0;
}
