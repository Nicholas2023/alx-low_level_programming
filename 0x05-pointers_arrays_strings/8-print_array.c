#include <stdio.h>

/**
 * print_array - Entry point
 * Description: Prints n elememts of an array of integers
 * @a: integer type array pointer
 * @n: size of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
			if (i != n - 1)
			{
				printf(", ");
			}
	}
	printf("\n");
}
