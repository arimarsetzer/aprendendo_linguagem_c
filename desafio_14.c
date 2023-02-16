#include <stdio.h>

int main()
{
    // imprime o cabeçalho do nosso jogo
    printf("**************************************************************\n");
    printf("* Calculadora de multiplicação *\n");
    printf("**************************************************************\n");

    int valor1;
    int valor2;

    printf("Informe o primeiro número: ");
    scanf("%d", &valor1);
    printf("Informe o segundo número: ");
    scanf("%d", &valor2);

    int resultado = valor1 * valor2;

    printf("O resultado da multiplicação é: %d", resultado);
}
