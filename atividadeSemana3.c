#include <stdio.h>

int main()
{
    // Declaração de variáveis que serão reutilizadas
    int n1, n2, n3, idade;
    float valor;

    printf("--- ATIVIDADE ABP-2026.1 (ADS) ---\n\n");

    // 1) Dobro e verificação se > 100
    printf("1. Digite um numero inteiro: ");
    scanf("%d", &n1);
    int dobro = n1 * 2;
    printf("Dobro: %d. ", dobro);
    if (dobro > 100)
        printf("O dobro e maior que 100.\n\n");
    else
        printf("O dobro nao e maior que 100.\n\n");

    // 2) Verificação de divisibilidade
    printf("2. Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    if (n2 != 0 && n1 % n2 == 0)
        printf("O primeiro e divisivel pelo segundo.\n\n");
    else
        printf("O primeiro nao e divisivel pelo segundo.\n\n");

    // 3) Soma, paridade e > 50
    printf("3. Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    int soma = n1 + n2;
    if (soma % 2 == 0 && soma > 50)
        printf("A soma (%d) e par e maior que 50.\n\n", soma);
    else
        printf("A soma (%d) nao atende aos dois requisitos.\n\n", soma);

    // 4) Produto positivo
    printf("4. Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    if (n1 * n2 > 0)
        printf("O produto e positivo.\n\n");
    else
        printf("O produto nao e positivo.\n\n");

    // 5) Fora do intervalo entre 20 e 80
    printf("5. Digite um numero inteiro: ");
    scanf("%d", &n1);
    if (n1 < 20 || n1 > 80)
        printf("O numero esta fora do intervalo [20-80].\n\n");
    else
        printf("O numero esta dentro do intervalo.\n\n");

    // 6) Triângulo válido
    printf("6. Digite os tres lados de um triangulo: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if ((n1 + n2 > n3) && (n1 + n3 > n2) && (n2 + n3 > n1))
        printf("Formam um triangulo valido.\n\n");
    else
        printf("Nao podem formar um triangulo.\n\n");

    // 7) Desconto por idade ou valor
    printf("7. Digite a idade e o valor da compra: ");
    scanf("%d %f", &idade, &valor);
    if (idade >= 60 || valor > 200)
        printf("Desconto concedido!\n\n");
    else
        printf("Sem desconto.\n\n");

    // 8) Par, Positivo E múltiplo de 5
    printf("8. Digite um numero inteiro: ");
    scanf("%d", &n1);
    if (n1 % 2 == 0 && n1 > 0 && n1 % 5 == 0)
        printf("O numero atende as tres condicoes.\n\n");
    else
        printf("O numero nao atende as tres condicoes.\n\n");

    // 9) Ordem crescente
    printf("9. Digite tres numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 < n2 && n2 < n3)
        printf("Estao em ordem crescente.\n\n");
    else
        printf("Nao estao em ordem crescente.\n\n");

    // 10) Verificações diversas 
    printf("10. Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    int diff = n1 - n2;
    printf("- Diferenca: %d\n", diff);
    if (diff > 10)
        printf("- A diferenca e maior que 10.\n");
    if (n1 % 2 == 0 && n2 % 2 == 0)
        printf("- Ambos sao pares.\n");
    if (n1 < 0 || n2 < 0)
        printf("- Pelo menos um e negativo.\n");
    if (n1 != n2)
        printf("- Os numeros sao diferentes.\n");

    return 0;
}
