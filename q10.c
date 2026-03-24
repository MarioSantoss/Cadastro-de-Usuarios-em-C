#include <stdio.h>

int main() {
	int x, y, z;
	int resultado;

	printf("Digite tres numeros inteiros (x y z): ");
	scanf("%d %d %d", &x, &y, &z);

	resultado = (x + y) * z;

	printf("resultado = %d\n", resultado);

	if (resultado > 100 && x != z) {
		printf("Condicao verdadeira: resultado > 100 e x != z.\n");
	} else {
		printf("Condicao falsa: nao atende resultado > 100 e x != z ao mesmo tempo.\n");
	}

	return 0;
}
