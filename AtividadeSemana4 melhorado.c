// ========== EXERCÍCIO 1: VERIFICAÇÃO DE MAIORIDADE ==========
#include <stdio.h>

int main_ex1() {
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }
    return 0;
}

// ========== EXERCÍCIO 2: RADAR DE VELOCIDADE ==========
#include <stdio.h>

int main_ex2() {
    float velocidade;
    printf("Digite a velocidade do carro (km/h): ");
    scanf("%f", &velocidade);

    if (velocidade > 80) {
        printf("Voce foi multado!\n");
    } else {
        printf("Boa viagem!\n");
    }
    return 0;
}

// ========== EXERCÍCIO 3: MÉDIA E SITUAÇÃO ACADÊMICA ==========
#include <stdio.h>

int main_ex3() {
    float n1, n2, n3, media;
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
    return 0;
}

// ========== EXERCÍCIO 4: MENU DA PIZZARIA ==========
#include <stdio.h>

int main_ex4() {
    int opcao;
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
    return 0;
}

// ========== EXERCÍCIO 5: CONSULTA DE DDD ==========
#include <stdio.h>

int main_ex5() {
    int ddd;
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
    return 0;
}

// ========== EXERCÍCIO 6: CONTROLE DE POLUIÇÃO ==========
#include <stdio.h>

int main_ex6() {
    float indice;
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
    return 0;
}

// ========== EXERCÍCIO 7: CONVERSÃO FAHRENHEIT PARA CELSIUS ==========
#include <stdio.h>

int main_ex7() {
    float f, c;
    printf("Temperatura em Farenheit: ");
    scanf("%f", &f);

    c = (5.0 * (f - 32.0) / 9.0);

    printf("Temperatura em Celsius: %.2f\n", c);
    return 0;
}

// ========== EXERCÍCIO 8: APROVAÇÃO POR MÉDIA E FREQUÊNCIA ==========
#include <stdio.h>

int main_ex8() {
    float n1, n2, media, freq;
    int aulas_m, aulas_a;

    printf("Notas, aulas ministradas e assistidas: ");
    scanf("%f %f %d %d", &n1, &n2, &aulas_m, &aulas_a);

    media = (n1 + n2) / 2;
    freq = ((float)aulas_a / aulas_m) * 100;

    if (media >= 6.0 && freq >= 75.0) {
        printf("Aprovado! Media: %.1f, Frequencia: %.1f%%\n", media, freq);
    } else {
        printf("Reprovado! Media: %.1f, Frequencia: %.1f%%\n", media, freq);
    }
    return 0;
}

// ========== EXERCÍCIO 9: CLASSIFICAÇÃO DE TRIÂNGULOS ==========
#include <stdio.h>

int main_ex9() {
    float a, b, c;
    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) printf("Equilatero\n");
        else if (a == b || a == c || b == c) printf("Isosceles\n");
        else printf("Escaleno\n");
    } else {
        printf("Nao formam um triangulo.\n");
    }
    return 0;
}

// ========== EXERCÍCIO 10: PROCESSAMENTO DE TRÊS NÚMEROS ==========
#include <stdio.h>
#include <math.h>

int main_ex10() {
    float n1, n2, n3;
    printf("Digite tres numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    // Primeiro número
    if (n1 > 0) printf("Raiz de %.1f: %.2f\n", n1, sqrt(n1));
    else printf("Quadrado de %.1f: %.2f\n", n1, n1 * n1);

    // Segundo número
    if (n2 > 10 && n2 < 100) printf("Numero esta entre 10 e 100 – intervalo permitido\n");

    // Terceiro número
    if (n3 < n2) printf("Diferenca: %.2f\n", n2 - n3);
    else printf("Resultado: %.2f\n", n3 + 1);

    return 0;
}

// ========== MENU PRINCIPAL ==========
#include <stdio.h>

int main() {
    int escolha;
    
    printf("\n======== ATIVIDADE SEMANA 4 ========\n");
    printf("1 - Verificacao de Maioridade\n");
    printf("2 - Radar de Velocidade\n");
    printf("3 - Media e Situacao Academica\n");
    printf("4 - Menu da Pizzaria\n");
    printf("5 - Consulta de DDD\n");
    printf("6 - Controle de Poluicao\n");
    printf("7 - Conversao Fahrenheit para Celsius\n");
    printf("8 - Aprovacao por Media e Frequencia\n");
    printf("9 - Classificacao de Triangulos\n");
    printf("10 - Processamento de Tres Numeros\n");
    printf("0 - Sair\n");
    printf("=====================================\n");
    printf("Escolha um exercicio: ");
    scanf("%d", &escolha);

    switch(escolha) {
        case 1: main_ex1(); break;
        case 2: main_ex2(); break;
        case 3: main_ex3(); break;
        case 4: main_ex4(); break;
        case 5: main_ex5(); break;
        case 6: main_ex6(); break;
        case 7: main_ex7(); break;
        case 8: main_ex8(); break;
        case 9: main_ex9(); break;
        case 10: main_ex10(); break;
        case 0: printf("Encerrando...\n"); break;
        default: printf("Opcao invalida!\n");
    }

    return 0;
}
