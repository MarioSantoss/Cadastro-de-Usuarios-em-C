#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Voce digitou o numero 1.\n");
            break;
        case 2:
            printf("Voce digitou o numero 2.\n");
            break;
        case 3:
            printf("Voce digitou o numero 3.\n");
            break;
        default:
            printf("Voce digitou um numero diferente de 1, 2 ou 3.\n");
            break;
    }

    return 0;
}