#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Entry point
 * Description: Reverses the content of an array of integers
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
