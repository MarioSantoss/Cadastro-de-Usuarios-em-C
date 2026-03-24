#include <stdio.h>

int main (){

    int n1, n2, n3;
    printf("digite tres numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > 50 || n2 > 50 || n3 > 50){
        printf("pelo menos um dos numeros é maior que 50");
    } else {
        printf("nenhum dos numeros é maior que 50");
    }
    return 0;
}