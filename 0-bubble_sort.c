#include"sort.h"
#include<stdio.h>
#include<stddef.h>

/**
 * bubble_sort -sorts the array in ascending order
 * @array: -pointer to array to be sorted
 * @size: - holds the value of the size of array
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int tmp;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                print_array(array, size);
            }
        }
    }
}