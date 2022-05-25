#include <stdio.h>

int main()
{
	char op;
	float num1, num2, res;
	
	printf("Escolha uma das operações abaixo\n");
	printf("+: Soma\n");
	printf("-: Subtracao\n");
	printf("*: Multiplicacao\n");
	printf("/: Divisão\n");
	printf("Escolha: ");
	fflush(stdin);
	scanf("%c", &op);

	switch(op)
	{
		case '+':
			printf("Digite um valor: ");
			scanf("%f", &num1);
			printf("Digite outro valor: ");
			scanf("%f", &num2);
			res = num1 + num2;
			printf("Resultado: %.2f", res);
			break;
			
		case '-':
			printf("Digite um valor: ");
			scanf("%f", &num1);
			printf("Digite outro valor: ");
			scanf("%f", &num2);
			res = num1 - num2;
			printf("Resultado: %.2f", res);
			break;
			
		case '*':
			printf("Digite um valor: ");
			scanf("%f", &num1);
			printf("Digite outro valor: ");
			scanf("%f", &num2);
			res = num1 * num2;
			printf("Resultado: %.2f", res);
			break;
			
		case '/':
			printf("Digite um valor: ");
			scanf("%f", &num1);
			printf("Digite outro valor: ");
			scanf("%f", &num2);
			res = num1 / num2;
			printf("Resultado: %.2f", res);
			break;
			
		default:
			printf("Valor invalido!");
	}

 	return 0;
}