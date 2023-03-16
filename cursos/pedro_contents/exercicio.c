#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    int64_t length;
    int *array;
} IntList;

/**
 * Allocates a new IntList
 */
IntList *newIntList(int64_t initialSize);

/**
 * Clears the memory of an IntList
 */
void deleteIntList(IntList *list);

/**
 * Returns the current length of list
 */
int length(IntList *list);

/**
 * Returns a reference to an element of the list at a given index
 * or NULL if no such element was found*/
int *get(IntList *list, int64_t index);

/**
 * Returns the index of the first occurence of an element in the list,
 * or -1 if no such element exists
 */
int64_t indexOf(IntList *list, int element);

/**
 * Returns true if a given element is part of the list
 */
bool contains(IntList *list, int element);

/**
 * appends an element at the end of the list
 */
void append(IntList *list, int element);

/**
 * Removes the last element at the end of the list, and returns its value
 */
int pop(IntList *list);

/**
 * Inserts an element at a given index,
 * pushing subsequent elements to the side
 */
void insertAt(IntList *list, int element, int64_t index);

/**
 * Removes an element at a given index, bringing elements after index back,
 * and returns its value
 */
int removeAt(IntList *list, int64_t index);
