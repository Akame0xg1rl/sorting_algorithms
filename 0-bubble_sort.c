#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - Sorts an array of integers
 * @array: The array to be sorted
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
    int swapped;
    size_t i, j;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0;

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                print_array(array, size);

                swapped = 1;
            }
        }

        if (swapped == 0)
            break;
    }
}
