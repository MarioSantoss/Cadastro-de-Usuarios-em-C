#include <stdio.h>

int main() {
	float n1, n2, resultado;
	char operador;

	printf("Digite a expressao (ex: 10 + 5): ");
	scanf("%f %c %f", &n1, &operador, &n2);

	switch (operador) {
		case '+':
			resultado = n1 + n2;
			printf("Resultado: %.2f\n", resultado);
			break;
		case '-':
			resultado = n1 - n2;
			printf("Resultado: %.2f\n", resultado);
			break;
		case '*':
			resultado = n1 * n2;
			printf("Resultado: %.2f\n", resultado);
			break;
		case '/':
			if (n2 != 0) {
				resultado = n1 / n2;
				printf("Resultado: %.2f\n", resultado);
			} else {
				printf("Erro: divisao por zero nao permitida.\n");
			}
			break;
		default:
			printf("Operador invalido! Use +, -, * ou /.\n");
	}

	return 0;
}
