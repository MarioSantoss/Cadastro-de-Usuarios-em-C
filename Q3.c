#include <stdio.h>

int main (){
    int n1, n2, n3, media;
    printf("digite tres numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    media= (n1+n2+n3)/3;
    printf("a media é %d \n", media);

    if (media >= 7){
        printf("o resultado é maior ou igual a 7");
    } else {
        printf("o resultado é menor que 7"); 
    }
    return 0;
}