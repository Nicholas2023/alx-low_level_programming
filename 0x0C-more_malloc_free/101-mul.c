#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/**
 * error - Check error
 *
 * Return: Nothing
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}


/**
 * check_digits - Iterates through a string of numbers containing
 *                  leading zeroes until it hits a non-zero number.
 * @num: The string of numbers to be iterate through.
 *
 * Return: Void
 */


void check_digits(char *num)
{
	int len = strlen(num);

	for (int i = 0; i < len; i++)
	{
		if (num[i] < '0' || num[i] > '9')
		{
			error();
		}
	}
}


/**
 * multiply - Multiplies a string of numbers by a single digit.
 * @num1: The buffer to store the result.
 * @num2: The string of numbers.
 *
 * Return: Void
 */


void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));

	if (result == NULL)
	{
		error();
	}
	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int digit1 = num1[i] - '0';
			int digit2 = num2[j] - '0';
			int product = digit1 * digit2;
			int sum = result[i + j + 1] + product;

			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	int i = 0;

	while (result[i] == 0 && i < len1 + len2 - 1)
	{
		i++;
	}

	for (; i < len1 + len2; i++)
	{
		printf("%d", result[i]);
	}
	printf("\n");
	free(result);
}


/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error();
	}
	check_digits(argv[1]);
	check_digits(argv[2]);
	multiply(argv[1], argv[2]);
	return (0);
}
