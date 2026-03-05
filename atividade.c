// um aluno que tem 4 notas e a media escolar é sete 
#include <stdio.h>
int main()
{
    float nota1, nota2, nota3, nota4, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1); // Lê a primeira nota do aluno
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); // Lê a segunda nota do aluno
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3); // Lê a terceira nota do aluno
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4); // Lê a quarta nota do aluno

    media = (nota1 + nota2 + nota3 + nota4) / 4; // Calcula a média das quatro notas

    if (media >= 7.0) {
        printf("Parabéns! Você foi aprovado com média %.2f\n", media);
    } else {
        printf("Infelizmente, você foi reprovado com média %.2f\n", media);
    }

    return 0;
}