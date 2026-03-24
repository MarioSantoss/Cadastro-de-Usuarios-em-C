#include <stdio.h>

int main (){
    int n1, n2, soma;
    printf("digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    soma= n1+n2;
    printf("a soma é %d\n", soma);

    if (n1 > n2){
        printf("esse é o maior: %d\n", n1);
        printf("e esse é o menor: %d\n", n2);
    } else {
        printf("esse é o maior: %d\n", n2);
        printf("e esse é o menor: %d\n", n1);
    }

    return 0;
}
