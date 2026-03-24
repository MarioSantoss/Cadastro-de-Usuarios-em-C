#include <stdio.h>

int main (){
    int n1, n2, multiplicacao;
    printf("digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    multiplicacao= n1*n2;
    printf("a multiplicacao é %d", multiplicacao);

    if (multiplicacao > 100){
        printf("o resultado é maior que 100");
    } else {
        printf("o resultado é menor que 100"); 
    }
    return 0;
}