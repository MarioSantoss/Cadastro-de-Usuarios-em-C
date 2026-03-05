#include <stdio.h>

int main()
{
    // 1. Declaração e inicialização de variáveis
    int anoNascimento = 2000;
    int anoAtual = 2026;
    int numeroFilhos = 2;
    char nome[50] = "Breno Brito";
    char profissao[50] = "professor da Unijaguaribe";
    char turma[50] = "turma de ADS e ES";
    int quantidadeAlunos = 42;
    int quantidadeComputadores = 30;
    

    // 2. Processamento
    int idade = anoAtual - anoNascimento;
    int alunosSemComputadores = quantidadeAlunos - quantidadeComputadores;

    // 3. Saída de dados
    printf("=== INFORMACOES DO PROFESSOR ===\n");
    printf("Nome: %s\n", nome);
    printf("Profissao: %s\n", profissao);
    printf("Idade: %d anos\n", idade);
    printf("Numero de filhos: %d\n\n", numeroFilhos);

    printf("=== INFORMACOES DA TURMA ===\n");
    printf("Turma: %s\n", turma);
    printf("Total de alunos: %d\n", quantidadeAlunos);
    printf("Total de computadores: %d\n", quantidadeComputadores);
    printf("Alunos SEM computador: %d\n\n", alunosSemComputadores);

    // 4. Verificação de recursos
    if (alunosSemComputadores > 0) {
        printf("AVISO: Faltam %d computadores!\n\n", alunosSemComputadores);
    } else {
        printf("Todos os alunos possuem computadores.\n\n");
    }

    // 5. Distribuição de computadores
    printf("=== DISTRIBUICAO DE COMPUTADORES ===\n");
    for (int i = 1; i <= quantidadeAlunos; i++) {
        if (i <= quantidadeComputadores) {
            printf("Aluno %2d: [OK] Computador alocado\n", i);
        } else {
            printf("Aluno %2d: [--] SEM computador\n", i);
        }
    }

    return 0;
}