#include <stdio.h>
//sistema de baliza para carros.
int main(){
    float distancia;
    printf("Digite a distancia do carro para a vaga: ");
    scanf("%f", &distancia);
    if (distancia < 0.5){
        printf("Alerta vermelho: Muito próximo da vaga!\n");
    } else if (distancia >= 0.5 && distancia < 1.0){
        printf("Alerta amarelo: Se aproximando da vaga!\n");
    } else {
        printf("Alerta verde: Distância segura da vaga!\n");
    }



    


    return 0;
}