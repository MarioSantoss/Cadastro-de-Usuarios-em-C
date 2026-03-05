#include <stdio.h>

int main() {
    int a, b, c;
    float media;
    
    // Tarefa 1: Leia dois números inteiros e mostre a soma deles.
    printf("Tarefa 1 - Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);
    printf("A soma é: %d\n", a + b);

    // Tarefa 2: Leia dois números inteiros e mostre: soma, subtração, multiplicação e divisão.
    printf("Tarefa 2 - Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Soma: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);
    if (b != 0) {
        printf("Divisão: %.2f\n", (float)a / b);
    } else {
        printf("Divisão por zero não é permitida.\n");
    }

    // Tarefa 3: Leia três notas e calcule a média aritmética.
    printf("Tarefa 3 - Digite três notas: ");
    scanf("%d %d %d", &a, &b, &c);
    media = (a + b + c) / 3.0;
    printf("Média: %.2f\n", media);

    // Tarefa 4: Leia um número inteiro e informe se ele é par ou ímpar.
    printf("Tarefa 4 - Digite um número inteiro: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("O número é PAR.\n");
    } else {
        printf("O número é ÍMPAR.\n");
    }

    // Tarefa 5: Leia dois números e mostre qual é o maior.
    printf("Tarefa 5 - Digite dois números: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("O maior número é: %d\n", a);
    } else if (b > a) {
        printf("O maior número é: %d\n", b);
    } else {
        printf("Os números são iguais.\n");
    }

    // Tarefa 6: Leia um número e verifique se ele está entre 10 e 50.
    printf("Tarefa 6 - Digite um número: ");
    scanf("%d", &a);
    if (a >= 10 && a <= 50) {
        printf("O número está entre 10 e 50.\n");
    } else {
        printf("O número não está entre 10 e 50.\n");
    }

    // Tarefa 7: Leia a nota e a frequência de um aluno. Ele será aprovado se nota ≥ 7 E frequência ≥ 75%.
    int frequencia;
    printf("Tarefa 7 - Digite a nota e a frequência do aluno: ");
    scanf("%d %d", &a, &frequencia);
    if (a >= 7 && frequencia >= 75) {
        printf("O aluno foi aprovado.\n");
    } else {
        printf("O aluno não foi aprovado.\n");
    }

    // Tarefa 8: Leia a idade e se possui autorização (1 para sim / 0 para não). Permitir acesso se idade ≥ 18 OU possuir autorização.
    int autorizacao;
    printf("Tarefa 8 - Digite a idade e se possui autorização (1 para sim / 0 para não): ");
    scanf("%d %d", &a, &autorizacao);
    if (a >= 18 || autorizacao == 1) {
        printf("Acesso permitido.\n");
    } else {
        printf("Acesso negado.\n");
    }

    // Tarefa 9: Leia um número e verifique se ele é positivo E par.
    printf("Tarefa 9 - Digite um número: ");
    scanf("%d", &a);
    if (a > 0 && a % 2 == 0) {
        printf("O número é positivo e par.\n");
    } else {
        printf("O número não é positivo e par.\n");
    }

    // Tarefa 10: Leia três números inteiros e mostre a soma, a média e se a média é maior que 7.
    printf("Tarefa 10 - Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    int soma = a + b + c;
    media = soma / 3.0;
    printf("A soma dos três números é: %d\n", soma);
    printf("A média é: %.2f\n", media);
    if (media > 7) {
        printf("A média é maior que 7.\n");
    } else {
        printf("A média não é maior que 7.\n");
    }

    return 0;
}