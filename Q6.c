#include <stdio.h>

int main (){
    int n1, n2;
    printf("digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    
    if (n1 > 0 && n2 > 0){
        printf("ambos os numeros são positivos");
    } else {
        printf("pelo menos um dos numeros não é positivo"); 
    }
    return 0;
}