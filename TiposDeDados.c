#include <stdio.h>

int main() {

    printf("===== TIPOS INTEIROS =====\n\n");

    printf("signed char:        -128 até 127\n");
    printf("unsigned char:      0 até 255\n\n");

    printf("short int:          -32.768 até 32.767\n");
    printf("unsigned short:     0 até 65.535\n\n");

    printf("int:                -2.147.483.648 até 2.147.483.647\n");
    printf("unsigned int:       0 até 4.294.967.295\n\n");

    printf("long int (64 bits): -9.223.372.036.854.775.808 até 9.223.372.036.854.775.807\n");
    printf("unsigned long:      0 até 18.446.744.073.709.551.615\n\n");

    printf("long long int:      -9.223.372.036.854.775.808 até 9.223.372.036.854.775.807\n");
    printf("unsigned long long: 0 até 18.446.744.073.709.551.615\n\n");


    printf("===== TIPOS REAIS (PONTO FLUTUANTE) =====\n\n");

    printf("float:       1.2e-38 até 3.4e+38\n");
    printf("             Precisão aproximada: 6 a 7 casas decimais\n\n");

    printf("double:      2.2e-308 até 1.8e+308\n");
    printf("             Precisão aproximada: 15 a 16 casas decimais\n\n");

    printf("long double: 3.4e-4932 até 1.1e+4932\n");
    printf("             Precisão maior que double (depende do compilador)\n\n");

    printf("===== RECOMENDAÇÃO PARA METEOROLOGIA =====\n\n");
    printf("- Temperatura, umidade e pressão: usar double para maior precisão.\n");
    printf("- Contagem de dias ou registros: int ou long long.\n");
    printf("- Valores sempre positivos: usar unsigned.\n");

    return 0;
}