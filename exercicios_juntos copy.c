#include <stdio.h>
#include <string.h>

// Constantes para facilitar manutenção
#define TAMANHO_TEXTO 50

int main()
{
    // 1. ENTRADA DE DADOS - Informações do Professor
    char nome[TAMANHO_TEXTO] = "Breno Brito";
    char profissao[TAMANHO_TEXTO] = "Professor da Unijaguaribe";
    int anoNascimento = 2000;
    int anoAtual = 2026;
    int numeroFilhos = 2;

    // 1.1 ENTRADA DE DADOS - Informações da Turma
    char turma[TAMANHO_TEXTO] = "Turma de ADS e ES";
    int quantidadeAlunos = 42;
    int quantidadeComputadores = 30;

    // 2. PROCESSAMENTO
    int idade = anoAtual - anoNascimento;
    int diferenca = quantidadeAlunos - quantidadeComputadores;
    int alunosSemComputador = (diferenca > 0) ? diferenca : 0;
    int computadoresSobrando = (diferenca < 0) ? -diferenca : 0;

    // 3. SAÍDA - Informações do Professor
    printf("╔════════════════════════════════════╗\n");
    printf("║     INFORMACOES DO PROFESSOR       ║\n");
    printf("╠════════════════════════════════════╣\n");
    printf("║ Nome: %-28s ║\n", nome);
    printf("║ Profissao: %-23s ║\n", profissao);
    printf("║ Idade: %-2d anos                     ║\n", idade);
    printf("║ Filhos: %-2d                         ║\n", numeroFilhos);
    printf("╚════════════════════════════════════╝\n\n");

    // 3.1 SAÍDA - Informações da Turma
    printf("╔════════════════════════════════════╗\n");
    printf("║       INFORMACOES DA TURMA         ║\n");
    printf("╠════════════════════════════════════╣\n");
    printf("║ Turma: %-27s ║\n", turma);
    printf("║ Total de alunos: %-17d ║\n", quantidadeAlunos);
    printf("║ Total de computadores: %-11d ║\n", quantidadeComputadores);
    printf("╚════════════════════════════════════╝\n\n");

    // 4. ANÁLISE DE RECURSOS
    printf("╔════════════════════════════════════╗\n");
    printf("║        ANALISE DE RECURSOS         ║\n");
    printf("╠════════════════════════════════════╣\n");
    
    if (alunosSemComputador > 0) {
        printf("║ [!] ALERTA: Faltam %2d computadores ║\n", alunosSemComputador);
    } else if (computadoresSobrando > 0) {
        printf("║ [+] Sobram %2d computadores         ║\n", computadoresSobrando);
    } else {
        printf("║ [OK] Recursos equilibrados         ║\n");
    }
    printf("╚════════════════════════════════════╝\n\n");

    // 5. DISTRIBUIÇÃO DE COMPUTADORES
    printf("╔════════════════════════════════════╗\n");
    printf("║   DISTRIBUICAO DE COMPUTADORES     ║\n");
    printf("╠════════════════════════════════════╣\n");

    int alunosComPC = 0;
    int alunosSemPC = 0;

    for (int i = 1; i <= quantidadeAlunos; i++) {
        if (i <= quantidadeComputadores) {
            printf("║ Aluno %2d: [OK] PC alocado          ║\n", i);
            alunosComPC++;
        } else {
            printf("║ Aluno %2d: [--] Sem PC              ║\n", i);
            alunosSemPC++;
        }
    }

    printf("╠════════════════════════════════════╣\n");
    printf("║ RESUMO:                            ║\n");
    printf("║   Com computador: %-2d alunos        ║\n", alunosComPC);
    printf("║   Sem computador: %-2d alunos        ║\n", alunosSemPC);
    printf("╚════════════════════════════════════╝\n");

    return 0;
}