/******************************************************************************
* File: stats.c
* Author: Augustine Pimentel
* Description:
* Performs statistical analysis on a dataset.
******************************************************************************/

#include "stats.h"
#include <stdio.h>


/* Test dataset */
unsigned char test[SIZE] = {
201, 203, 199, 190, 210, 180, 175, 220,
205, 198, 200, 202, 204, 206, 207, 208,
210, 212, 214, 215, 217, 219, 221, 223,
225, 227, 229, 231, 233, 235, 237, 239,
241, 243, 245, 247, 249, 250, 252, 255
};

/* Main function */
int main(void)
{
    unsigned char median;
    unsigned char mean;
    unsigned char max;
    unsigned char min;

    printf("Original Array:\n");
    print_array(test, SIZE);

    /* Calculate statistics */
    mean = find_mean(test, SIZE);
    max = find_maximum(test, SIZE);
    min = find_minimum(test, SIZE);

    /* Sort array before computing median */
    sort_array(test, SIZE);

    median = find_median(test, SIZE);

    printf("\nSorted Array (Descending):\n");
    print_array(test, SIZE);

    printf("\nStatistics:\n");
    printf("Mean   : %d\n", mean);
    printf("Median : %d\n", median);
    printf("Max    : %d\n", max);
    printf("Min    : %d\n", min);

    return 0;
}

/* Print statistics */
void print_statistics(unsigned char *array, unsigned int length)
{
    printf("Mean: %d\n", find_mean(array, length));
    printf("Median: %d\n", find_median(array, length));
    printf("Max: %d\n", find_maximum(array, length));
    printf("Min: %d\n", find_minimum(array, length));
}

/* Print array elements */
void print_array(unsigned char *array, unsigned int length)
{
    for(unsigned int i = 0; i < length; i++)
    {
        printf("%3d ", array[i]);

        if((i + 1) % 8 == 0)
            printf("\n");
    }
}

/* Find mean value */
unsigned char find_mean(unsigned char *array, unsigned int length)
{
    unsigned int sum = 0;

    for(unsigned int i = 0; i < length; i++)
        sum += array[i];

    return (unsigned char)(sum / length);
}

/* Find maximum value */
unsigned char find_maximum(unsigned char *array, unsigned int length)
{
    unsigned char max = array[0];

    for(unsigned int i = 1; i < length; i++)
    {
        if(array[i] > max)
            max = array[i];
    }

    return max;
}

/* Find minimum value */
unsigned char find_minimum(unsigned char *array, unsigned int length)
{
    unsigned char min = array[0];

    for(unsigned int i = 1; i < length; i++)
    {
        if(array[i] < min)
            min = array[i];
    }

    return min;
}

/* Find median */
unsigned char find_median(unsigned char *array, unsigned int length)
{
    if(length % 2 == 0)
    {
        return (array[length/2] + array[length/2 - 1]) / 2;
    }
    else
    {
        return array[length/2];
    }
}
/* Sort array (largest → smallest) using bubble sort */
void sort_array(unsigned char *array, unsigned int length)
{
    unsigned char temp;

    for(unsigned int i = 0; i < length - 1; i++)
    {
        for(unsigned int j = 0; j < length - i - 1; j++)
        {
            if(array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}