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
	printf("Calculadora Simples  \n\nDigite dois valores\n\n1� operando: "); scanf("%f",&n1); printf("\n2� operando: "); scanf("%f",&n2);
	do 
	{
	printf("\nQual opera��o deseja executar de acordo com as op��es abaixo?\n\n1-Adi��o\n2-Subtra��o\n3-Multiplica��o\n4-Divis�o\n\nOp��o: "); scanf("%d",&opcao);
	if (opcao<1||opcao>4)
	{
		system("cls");
		printf("\nOp��o inv�lida! Por favor, escolha uma op��o entre 1 e 4.\n");
	}
	}	
	while (opcao<1||opcao>4);
	if (opcao==1)
	{
		res=n1+n2;
		printf("\nO resultado da soma de %.2f + %.2f � = %.2f",n1,n2,res);
	}
	else if (opcao==2)
	{
		res=n1-n2;
		printf("\nO resultado da subtra��o de %.2f - %.2f � = %.2f",n1,n2,res);
	}
	else if (opcao==3)
	{
	
		res=n1*n2;
		printf("\nO resultado da multiplica��o de %.2f x %.2f � = %.2f",n1,n2,res);
	}
	else if (opcao==4)
	{
		 if (n2!=0)
		{
		res=n1/n2;;
		printf("\nO resultado da divis�o de %.2f / %.2f � = %.2f",n1,n2,res);
		printf("\n\nDeseja Reiniciar?  S= Sim N= N�o\n"); scanf("%c", &reset);
		while (reset=='S'||reset=='s');
		}
		else 
		{
		printf("\nO Divisor n�o pode ser igual a zero.");
		printf("\n\nDeseja Reiniciar?  S= Sim N= N�o\n"); scanf("%c", &reset);
		while (reset=='S'||reset=='s');
		}
	}
	else 
		printf("\n\nAlgo deu errado!!  Deseja Reiniciar?  S= Sim N= N�o\n"); scanf("%c", &reset);
	}
	while (reset=='S'||reset=='s');

return 0;
}
