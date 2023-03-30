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

int length(IntList *list)
{
    return list->length;
}

/**
 * Returns a reference to an element of the list at a given index
 * or NULL if no such element was found
 */
int *get(IntList *list, int64_t index)
{
    if (index < length(list) && index >= 0)
    {
        return &list->array[index];
    }
    return NULL;
}

void printIntList(IntList *list)
{
    printIntArray(list->array, list->length);
}

/**
 * appends an element at the end of the list
 */
void append(IntList *list, int element)
{
    list->length++;
    list->array = realloc(list->array, list->length * sizeof(int));

    list->array[list->length - 1] = element;
}
/**
 * Removes the last element at the end of the list, and returns its value
 */
int pop(IntList *list)
{
    int lastValue = list->array[list->length - 1];

    list->length--;
    list->array = realloc(list->array, list->length * sizeof(int));

    return lastValue;
}

int main()
{

    int tamanhoDaLista = 10;

    IntList *myList = newIntList(tamanhoDaLista);

    myList->array[0] = 10;
    myList->array[1] = 20;
    myList->array[2] = 30;
    myList->array[3] = 40;
    myList->array[4] = 50;
    myList->array[8] = 800;
    myList->array[9] = 1000;

    int entradaLista = 50;

    bool listContain = contains(myList, entradaLista);

    int *referenceReturn = get(myList, 500);

    printIntList(myList);

    append(myList, 13);
    append(myList, 15);
    append(myList, 20);
    int intLastValue = pop(myList);

    printIntList(myList);

    printf("The returned reference is %p\n", referenceReturn);
    printf("MyList contain %d? %s\n", entradaLista, listContain ? "true" : "false");
    printf("The length of myList is %d\n", length(myList));
    printf("The value removed was %d\n", intLastValue);
}
