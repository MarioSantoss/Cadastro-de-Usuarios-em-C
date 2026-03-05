#include <stdio.h>
int main(){
    int x, y, z;
    x=y=10;
    printf("digite tres numeros: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("%d\n", x);
    z=x++;
    printf("%d\n", z);
    x=-x;
    printf("%d\n", x);
    y++;
    printf("%d\n", y);
    x=x+y-z--;
    printf("%d\n", x);
    printf("Todos os numeros!!");
    printf("%d\n %d\n %d\n", x, y, z);

    return 0;

}