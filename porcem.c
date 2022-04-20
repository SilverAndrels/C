#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>

float quantox(float x1, float x2)
{
	float result3;
	result3 = (x2 / x1) * 100;
}

float achaporcem(float n1, float n2)
{
	float result1;
	result1 = (n2 * n1) / 100;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	while (1)
	{
		float v, porc, result, resultf;
		v = porc = result = resultf = 0.0;
		int op;
		op = 0;

		system("cls");

		puts("==========================================");

		puts("Bem Vindo ao facilitador de porcentagem!!!");

		puts("==========================================");
		printf("Escolha uma opção:\n1 - Para aumentar X porcento:\n2 - Para diminuir X porcento:\n3 - Para saber quantos porcento de X:\n4 - Para saber quanto X representa de Y:\n"); // pergunta ao usuário.

		scanf("%d", &op);

		if (op == 1)
		{
			printf("Digite o número que será aumentado usado: ");
			scanf("%f", &v);
			result = v;

			if (v > 0)
			{
				printf("Quantos porcento quer aumenta-lo ? ");
				scanf("%f", &porc);

				result = porc + 100;
				result / 10;
				resultf = v * result;
				resultf = resultf / 100;

				printf("O resultado é: %.01f\n", resultf);

				Sleep(1500);
			}
			else
				puts("O número tem que ser maior que zero!\n ");
		}
		else

			if (op == 2)
		{

			printf("Digite o número que será usado: ");

			scanf("%f", &v);

			result = v;

			if (v > 0)
			{

				printf("Quantos porcento quer diminui-lo ? ");

				scanf("%f", &porc);

				result = 100 - porc;

				resultf = v * result;

				resultf = resultf / 100;

				printf("O resultado é: %.01f\n", resultf);
			}
			else
				puts("O número tem que ser maior que zero!\n ");
		}
		else if (op == 3)
		{
			printf("Digite o número que quer saber a porcentagem: ");
			scanf("%f", &v);

			if (v > 0)
			{
				printf("Quantos porcento quer saber ?: ");
				scanf("%f", &porc);

				resultf = achaporcem(v, porc);
				printf("O resultado é: %.01f\n", resultf);
			}
		}

		if (op == 4)
		{
			printf("Digite o valor de X: ");
			scanf("%f", &porc);

			if (porc > 0)
			{
				printf("Qual o valor de Y ?");
				scanf("%f", &v);

				result = quantox(v, porc);
				printf("X é %0.1f porcento de %0.1f", result, v);
			}
			else
				puts("O número tem que ser maior que zero!\n");
		}
		else if (op <= 0)
			puts("Opção não disponível!\n");
		Sleep(2000);
	}
}