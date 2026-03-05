#include <stdio.h>

float raiz_aprox(float x) {
    if (x <= 0) return 0;

    float r = x;
    for (int i = 0; i < 20; i++) {
        r = 0.5f * (r + x / r);
    }
    return r;
}

int main() {
    int idade, opcao, ddd, aulas_m, aulas_a;
    float velocidade, n1, n2, n3, media, freq, indice, f, c, a, b;
    
    printf("\n===== ATIVIDADE SEMANA 4 =====\n\n");
    
    // ========== EXERCÍCIO 1: VERIFICAÇÃO DE MAIORIDADE ==========
    printf("--- EXERCÍCIO 1: VERIFICACAO DE MAIORIDADE ---\n");
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }
    printf("\n");
    
    // ========== EXERCÍCIO 2: RADAR DE VELOCIDADE ==========
    printf("--- EXERCÍCIO 2: RADAR DE VELOCIDADE ---\n");
    printf("Digite a velocidade do carro (km/h): ");
    scanf("%f", &velocidade);
    
    if (velocidade > 80) {
        printf("Voce foi multado!\n");
    } else {
        printf("Boa viagem!\n");
    }
    printf("\n");
    
    // ========== EXERCÍCIO 3: MÉDIA E SITUAÇÃO ACADÊMICA ==========
    printf("--- EXERCÍCIO 3: MEDIA E SITUACAO ACADEMICA ---\n");
    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    media = (n1 + n2 + n3) / 3;
    
    if (media >= 7.0) {
        printf("Aprovado\n");
    } else if (media >= 5.0) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
    printf("\n");
    
    // ========== EXERCÍCIO 4: MENU DA PIZZARIA ==========
    printf("--- EXERCÍCIO 4: MENU DA PIZZARIA ---\n");
    printf("=== PIZZARIA DO BAIRRO ===\n");
    printf("1 - Pizza Calabresa\n2 - Pizza Frango com Catupiry\n");
    printf("3 - Pizza Portuguesa\n4 - Cancelar pedido\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1: printf("Voce escolheu Pizza Calabresa\n"); break;
        case 2: printf("Voce escolheu Pizza Frango com Catupiry\n"); break;
        case 3: printf("Voce escolheu Pizza Portuguesa\n"); break;
        case 4: printf("Pedido cancelado\n"); break;
        default: printf("Opcao invalida\n");
    }
    printf("\n");
    
    // ========== EXERCÍCIO 5: CONSULTA DE DDD ==========
    printf("--- EXERCÍCIO 5: CONSULTA DE DDD ---\n");
    printf("Digite o DDD: ");
    scanf("%d", &ddd);
    
    switch(ddd) {
        case 61: printf("Brasilia\n"); break;
        case 71: printf("Salvador\n"); break;
        case 11: printf("Sao Paulo\n"); break;
        case 21: printf("Rio de Janeiro\n"); break;
        case 32: printf("Juiz de Fora\n"); break;
        case 19: printf("Campinas\n"); break;
        case 27: printf("Vitoria\n"); break;
        case 31: printf("Belo Horizonte\n"); break;
        default: printf("DDD nao cadastrado\n");
    }
    printf("\n");
    
    // ========== EXERCÍCIO 6: CONTROLE DE POLUIÇÃO ==========
    printf("--- EXERCÍCIO 6: CONTROLE DE POLUICAO ---\n");
    printf("Informe o indice de poluicao: ");
    scanf("%f", &indice);
    
    if (indice >= 0.5) {
        printf("Todos os grupos devem paralisar as atividades!\n");
    } else if (indice >= 0.4) {
        printf("Industrias do 1o e 2o grupo intimadas a suspender atividades.\n");
    } else if (indice >= 0.3) {
        printf("Industrias do 1o grupo intimadas a suspender atividades.\n");
    } else {
        printf("Indice aceitavel.\n");
    }
    printf("\n");
    
    // ========== EXERCÍCIO 7: CONVERSÃO FAHRENHEIT PARA CELSIUS ==========
    printf("--- EXERCÍCIO 7: CONVERSAO FAHRENHEIT PARA CELSIUS ---\n");
    printf("Temperatura em Farenheit: ");
    scanf("%f", &f);
    
    c = (5.0 * (f - 32.0) / 9.0);
    
    printf("Temperatura em Celsius: %.2f\n", c);
    printf("\n");
    
    // ========== EXERCÍCIO 8: APROVAÇÃO POR MÉDIA E FREQUÊNCIA ==========
    printf("--- EXERCÍCIO 8: APROVACAO POR MEDIA E FREQUENCIA ---\n");
    printf("Notas, aulas ministradas e assistidas: ");
    scanf("%f %f %d %d", &n1, &n2, &aulas_m, &aulas_a);
    
    media = (n1 + n2) / 2;
    freq = ((float)aulas_a / aulas_m) * 100;
    
    if (media >= 6.0 && freq >= 75.0) {
        printf("Aprovado! Media: %.1f, Frequencia: %.1f%%\n", media, freq);
    } else {
        printf("Reprovado! Media: %.1f, Frequencia: %.1f%%\n", media, freq);
    }
    printf("\n");
    
    // ========== EXERCÍCIO 9: CLASSIFICAÇÃO DE TRIÂNGULOS ==========
    printf("--- EXERCÍCIO 9: CLASSIFICACAO DE TRIANGULOS ---\n");
    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &n3);
    
    if (a < b + n3 && b < a + n3 && n3 < a + b) {
        if (a == b && b == n3) printf("Equilatero\n");
        else if (a == b || a == n3 || b == n3) printf("Isosceles\n");
        else printf("Escaleno\n");
    } else {
        printf("Nao formam um triangulo.\n");
    }
    printf("\n");
    
    // ========== EXERCÍCIO 10: PROCESSAMENTO DE TRÊS NÚMEROS ==========
    printf("--- EXERCÍCIO 10: PROCESSAMENTO DE TRES NUMEROS ---\n");
    printf("Digite tres numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    // Primeiro número
    if (n1 > 0) printf("Raiz de %.1f: %.2f\n", n1, raiz_aprox(n1));
    else printf("Quadrado de %.1f: %.2f\n", n1, n1 * n1);
    
    // Segundo número
    if (n2 > 10 && n2 < 100) printf("Numero esta entre 10 e 100 – intervalo permitido\n");
    
    // Terceiro número
    if (n3 < n2) printf("Diferenca: %.2f\n", n2 - n3);
    else printf("Resultado: %.2f\n", n3 + 1);
    
    printf("\n");
    printf("===============================\n");
    return 0;
}
