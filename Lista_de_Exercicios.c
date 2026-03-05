#include <stdio.h>
int main()
{
    // 1) Peça ao usuário para digitar seu nome e exiba a mensagem: 'Olá, [nome]!'.
    char nome[50];

    printf("Digite seu nome: ");
    scanf("%s", nome); // Lê o nome do usuário

    printf("Olá, %s! \n", nome); // Exibe a mensagem de saudação

    // 2) Peça ao usuário para informar seu nome e idade e mostre: '[nome] tem [idade] anos.'
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade); // Lê a idade do usuário
    printf("%s tem %d anos.\n", nome, idade); // Exibe a mensagem com nome e idade

// 3) Solicite rua, número e bairro e exiba as informações organizadas como um endereço completo.
    char rua[50], bairro[50];
    int numero;
    printf("Digite sua rua:");
    scanf("%s", rua); // Lê a rua do usuário
    printf("Digite o número: ");
    scanf("%d", &numero); // Lê o número do usuário
    printf("Digite seu bairro: ");
    scanf("%s", bairro); // Lê o bairro do usuário
    printf("Endereço completo: %s, %d, %s\n", rua, numero, bairro); // Exibe o endereço completo

    // 4) Peça nome, cidade e profissão e exiba um pequeno texto apresentando a pessoa.
    char cidade[50], profissao[50];
    printf("Digite sua cidade: ");
    scanf("%s", cidade); // Lê a cidade do usuário
    printf("Digite sua profissão: ");
    scanf("%s", profissao); // Lê a profissão do usuário
    printf("Olá, meu nome é %s, sou de %s e trabalho como %s.\n", nome, cidade, profissao); // Exibe o texto de apresentação

    // 5) Solicite nome de um produto, preço e quantidade e apenas exiba os dados informados.
    char produto[50];
    float preco;
    int quantidade;
    printf("Digite o nome do produto: ");
    scanf("%s", produto); // Lê o nome do produto
    printf("Digite o preço do produto: ");
    scanf("%f", &preco); // Lê o preço do produto
    printf("Digite a quantidade do produto: ");
    scanf("%d", &quantidade); // Lê a quantidade do produto
    printf("Produto: %s\nPreço: %.2f\nQuantidade: %d\n", produto, preco, quantidade); // Exibe os dados do produto

    // 6) Peça três notas de um aluno e exiba todas organizadas em formato de boletim (sem calcular média).
    float nota1, nota2, nota3; 
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1); // Lê a primeira nota do aluno
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2); // Lê a segunda nota do aluno
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3); // Lê a terceira nota do aluno
    printf("Boletim do aluno:\nNota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n", nota1, nota2, nota3); // Exibe as notas do aluno em formato de boletim

    // 7) Peça dois números e calcule a soma entre eles, exibindo o resultado.
    float num1, num2, soma;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1); // Lê o primeiro número
    printf("Digite o segundo número: ");
    scanf("%f", &num2); // Lê o segundo número
    soma = num1 + num2; // Calcula a soma dos dois números
    printf("A soma de %.2f e %.2f é: %.2f\n", num1, num2, soma); // Exibe o resultado da soma

    // 8) Solicite o ano de nascimento do usuário e calcule a idade atual.
    int anoNascimento, anoAtual, idadeAtual;
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoNascimento); // Lê o ano de nascimento do usuário
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual); // Lê o ano atual
    idadeAtual = anoAtual - anoNascimento; // Calcula a idade atual
    printf("Sua idade atual é: %d anos\n", idadeAtual); // Exibe a idade atual do usuário
    
    // 9) Peça o salário atual de um funcionário e calcule o salário com 10% de aumento.
    float salarioAtual, salarioAumentado;
    printf("Digite seu salário atual: ");
    scanf("%f", &salarioAtual); // Lê o salário atual do funcionário
    salarioAumentado = salarioAtual * 1.10; // Calcula o salário
    printf("Seu salário com 10%% de aumento é: %.2f\n", salarioAumentado); // Exibe o salário com aumento
    
    // 10) Crie uma calculadora simples: peça dois números e mostre os resultados das operações de soma, subtração, multiplicação e divisão.
    float numeroA, numeroB;
    printf("Digite o primeiro número para a calculadora: ");
    scanf("%f", &numeroA); // Lê o primeiro número para a calculadora
    printf("Digite o segundo número para a calculadora: ");
    scanf("%f", &numeroB); // Lê o segundo número para a calculadora
    printf("Resultados das operações:\n");
    printf("Soma: %.2f\n", numeroA + numeroB); // Exibe o resultado da soma
    printf("Subtração: %.2f\n", numeroA - numeroB); // Exibe o resultado da subtração
    printf("Multiplicação: %.2f\n", numeroA * numeroB); // Exibe o resultado da multiplicação
    if (numeroB != 0) {
        printf("Divisão: %.2f\n", numeroA / numeroB); // Exibe o resultado da divisão
    } else {
        printf("Divisão: Não é possível dividir por zero.\n"); // Exibe mensagem de erro para divisão por zero
    }

    return 0;
}







