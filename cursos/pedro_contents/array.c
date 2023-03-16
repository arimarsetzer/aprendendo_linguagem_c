#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

typedef struct
{
    int indice;
    float valor;
    char *nome;
} MeuStruct;

void sizeOfCoisas()
{

    int i = 0;
    char *myString = "123";
    MeuStruct helloStruct = {
        1, 25.6, myString};

    printf("sizeof helloStruct = %zu\n", sizeof(helloStruct));
    printf("helloStruct = { %d, %f, %s }\n",
           helloStruct.indice, helloStruct.valor, helloStruct.nome);

    // %zu == printar um valor numérico sem sinal para o tipo especial size_t
    // size_t: tipo numérico especial que é capaz de representar qualquer "tamanho"
    // o operador sizeof retorna um número compatível com size_t

    printf("sizeof char = %zu\n", sizeof(char));
    printf("sizeof short = %zu\n", sizeof(short));
    printf("sizeof int = %zu\n", sizeof(int));
    printf("sizeof long = %zu\n", sizeof(long));
    printf("sizeof int64_t = %zu\n", sizeof(int64_t));
    printf("sizeof float = %zu\n", sizeof(float));
    printf("sizeof double = %zu\n", sizeof(double));

    printf("\n");

    printf("sizeof size_t = %zu\n", sizeof(size_t));
    printf("sizeof long* = %zu\n", sizeof(long *));
    printf("sizeof int* = %zu\n", sizeof(int *));
    printf("sizeof char* = %zu\n", sizeof(char *));

    printf("\n");

    int64_t arr[4] = {0, 0, 0, 0};
    printf("sizeof arr = %zu\n", sizeof(arr));
    printf("sizeof arr / sizeof arr[0] = %zu\n", sizeof(arr) / sizeof(arr[0]));

    printf("\n");
    int64_t *arrptr = arr;
    printf("sizeof arrptr = %zu\n", sizeof(arrptr));

    printf("\n");
}

void printIntArray(int *arr, int size)
{
    printf("[");

    int i = 0;
    while (i < size)
    {
        printf("%d", arr[i]);

        if (i < size - 1)
        {
            printf(", ");
        }

        i++;
    }
    printf("]\n");
}

void brincandoComArray()
{

    int arr[4] = {4, 5, 6, 7};

    printf("end de arr = %p\n", arr);
    printf("end de arr[0] = %p\n", &arr[0]);
    printf("end de arr[1] = %p\n", &arr[1]);
    printf("end de arr[2] = %p\n", &arr[2]);
    printf("end de arr[3] = %p\n", &arr[3]);
    printf("end de arr[4] = %p\n", &arr[4]);

    printf("Valor do 6o elemento = %d\n", arr[5]);

    printf("arr = ");

    printIntArray(arr, 4);
};

int main()
{

    sizeOfCoisas();

    // brincandoComArray();
    return 0;
}