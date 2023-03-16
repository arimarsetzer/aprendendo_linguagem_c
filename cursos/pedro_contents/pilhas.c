#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

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
int *newIntArray(int s)
{
    // OU
    // return (int*)calloc(s, sizeof(int));
    int *arr = (int *)malloc(sizeof(int) * s);
    for (int i = 0; i < s; i++)
    {
        arr[i] = 0;
    }
    return arr;
}

typedef struct
{
    int64_t length;
    int *array;
} IntList;

IntList *newIntList(int size)
{
    IntList *list = (IntList *)malloc(sizeof(IntList));
    list->length = size;
    list->array = newIntArray(size);
    return list;
}

/**
 * Returns the index of the first occurence of an element in the list,
 * or -1 if no such element exists
 */
int64_t indexOf(IntList *list, int element)
{
    int64_t indice = 0;

    while (indice < list->length)
    {

        if (element == list->array[indice])
        {
            return indice;
        }
        indice += 1;
    }
    return -1;
}

/**
 * Returns true if a given element is part of the list
 */
bool contains(IntList *list, int element)
{
    return indexOf(list, element) != -1;
}

int main()
{
    int ENTRADA_DO_USUARIO = 10;

    IntList *myList = newIntList(ENTRADA_DO_USUARIO);

    myList->array[0] = 10;
    myList->array[1] = 5;
    myList->array[2] = 7;
    myList->array[3] = 90;

    int entradaLista = 50;

    bool listContain = contains(myList, entradaLista);

    printf("MyList contain %d? %s", entradaLista, listContain ? "true" : "false");
}
