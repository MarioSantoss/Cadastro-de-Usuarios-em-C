#include <stdio.h>
int main(){
    int idade;
    printf("Digite uma idade: ");
    scanf("%d", &idade);

    switch (idade)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      printf ("você é uma criança de %d anos", idade);
         
        break;

    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        printf ("você é um adolescente de %d anos", idade);
             
            break;
    case 18:
    case 19:
    case 20:
    case 21:

        printf ("você é um adulto de %d anos", idade);

            break;
    default:
    printf("você é muitoooo velhooooo!!!!!");
    }
}