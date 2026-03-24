#include <stdio.h>

int main (){
    int n1;
    printf("digite um numero: ");
    scanf("%d", &n1);
    
    if (n1 % 2 == 0){
        printf("o numero é par");
    } else {
        printf("o numero é impar"); 
    }
    return 0;
}