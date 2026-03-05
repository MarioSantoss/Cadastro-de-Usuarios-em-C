#include <stdio.h>

int main() {
    // 1. Duas variáveis inteiras
    char nome[50], sobrenome[50];

    // 2. Exibir as informações na tela
    printf("Digite seu nome: ");
    scanf("%s", nome);  
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);
    printf("Nome completo: %s %s\n", nome, sobrenome);

    return 0;
}
