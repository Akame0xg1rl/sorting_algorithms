#include <stdio.h>
#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order using Shell sort
 * @array: The array to be sorted
 * @size: Size of the array
 */
void shell_sort(int *array, size_t size)
{
    size_t gap = 1, i, j;
    int temp;

    while (gap < size / 3)
        gap = gap * 3 + 1;

    while (gap > 0)
    {
        for (i = gap; i < size; i++)
        {
            temp = array[i];

            for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
            {
                array[j] = array[j - gap];
            }

            array[j] = temp;
        }

        gap /= 3;

        print_array(array, size);
    }
}
