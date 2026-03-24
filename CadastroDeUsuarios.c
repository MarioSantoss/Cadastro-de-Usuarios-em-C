#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], senha[20];
    int idade, telefone, cpf;
    float altura;
    char cima_baixo [100] ="/***********************************/";
    char meio [100] = "/-----------------------------------/";

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu telefone: ");
    scanf("%d", &telefone);

    printf("informe seu CPF: ");
    scanf("%d", &cpf);

    printf("Digite a sua senha: ");
    scanf("%s", senha);


    while (strlen(senha) < 8) {
        printf("A senha deve conter pelo menos 8 caracteres. Digite novamente: ");
        scanf("%s", senha);
    }

    printf("Senha cadastrada com sucesso!\n\n\n");

    printf("%s\n", cima_baixo);

    printf("\n/* DADOS DO USUÁRIO:               */\n\n");
    printf("%s\n\n", meio);
    printf("| Nome: %s                       |\n\n", nome);
    printf("| Idade: %d                         |\n\n", idade);
    printf("| Telefone: %d             |\n\n", telefone);
    printf("| CPF: %d                    |\n\n", cpf);
    printf("| Altura: %.2f                      |\n\n", altura);
    printf("%s\n", cima_baixo);

    return 0;
}
