#include <stdio.h>

void mover(int n, char origem, char destino, char auxiliar) {
    // Caso base: Se houver apenas um disco, mova-o diretamente
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }
    
    // Passo 1: Mover n-1 discos de origem para auxiliar
    mover(n - 1, origem, auxiliar, destino);
    
    // Passo 2: Mover o disco n de origem para destino
    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    
    // Passo 3: Mover n-1 discos de auxiliar para destino
    mover(n - 1, auxiliar, destino, origem);
}

int main() {
    int n;
    printf("Digite o número de discos: ");
    scanf("%d", &n);
    
    // Chama a função para mover os discos da torre A para a torre C
    mover(n, 'A', 'C', 'B');
    
    return 0;
}