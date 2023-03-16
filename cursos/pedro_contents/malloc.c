#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

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

int main()
{
    int ENTRADA_DO_USUARIO = 10;

    IntList *myList2 = newIntList(ENTRADA_DO_USUARIO);
    free(myList2->array);
    free(myList2);

    int *arr = newIntArray(ENTRADA_DO_USUARIO);

    arr[5] = 10;
    arr[9] = 0xFFFFFFFF;

    printIntArray(arr, ENTRADA_DO_USUARIO);
    // [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

    free(arr);
    return 0;
}