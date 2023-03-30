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
    IntList *this = (IntList *)malloc(sizeof(IntList));
    this->length = size;
    this->array = newIntArray(size);
    return this;
}

/**
 * Returns the index of the first occurence of an element in the this,
 * or -1 if no such element exists
 */
int64_t indexOf(IntList *this, int element)
{
    int64_t indice = 0;

    while (indice < this->length)
    {

        if (element == this->array[indice])
        {
            return indice;
        }
        indice += 1;
    }
    return -1;
}

/**
 * Returns true if a given element is part of the this
 */
bool contains(IntList *this, int element)
{
    return indexOf(this, element) != -1;
}

int length(IntList *this)
{
    return this->length;
}

/**
 * Returns a reference to an element of the this at a given index
 * or NULL if no such element was found
 */
int *get(IntList *this, int64_t index)
{
    if (index < length(this) && index >= 0)
    {
        return &this->array[index];
    }
    return NULL;
}

void printIntList(IntList *this)
{
    printIntArray(this->array, this->length);
}

/**
 * appends an element at the end of the this
 */
void append(IntList *this, int element)
{
    this->length++;
    this->array = realloc(this->array, this->length * sizeof(int));

    this->array[this->length - 1] = element;
}
/**
 * Removes the last element at the end of the this, and returns its value
 */
int pop(IntList *this)
{
    int lastValue = this->array[this->length - 1];

    this->length--;
    this->array = realloc(this->array, this->length * sizeof(int));

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

    bool thisContain = contains(myList, entradaLista);

    int *referenceReturn = get(myList, 500);

    printIntList(myList);

    append(myList, 13);
    append(myList, 15);
    append(myList, 20);
    int intLastValue = pop(myList);

    printIntList(myList);

    printf("The returned reference is %p\n", referenceReturn);
    printf("MyList contain %d? %s\n", entradaLista, thisContain ? "true" : "false");
    printf("The length of myList is %d\n", length(myList));
    printf("The value removed was %d\n", intLastValue);
}
