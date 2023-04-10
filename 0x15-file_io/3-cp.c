#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_tmp - Allocates 1024 bytes for tmp
 * @file: The name of the file buffer is storing char
 * Return: A pointer to new tmp
 */
char *create_tmp(char *file)
{
	char *tmp;

	/*Memory allocation*/
	tmp = malloc(sizeof(char) * 1024);
	if (tmp == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (tmp);
}

/**
 * _close - Closes files
 * @file: The file to be closed
 */
void _close(int file)
{
	int x;

	x = close(file);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another
 * @ac: argument count
 * @av: Arguments passed
 * Return: 1 on success, exit otherwise
 */

int main(int ac, char *av[])
{
	int source, dest, f_read, w;
	char *tmp;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*Assign value to tmp by calling a function*/
	tmp = create_tmp(av[2]);
	/*Open the source file to be copied*/
	source = open(av[1], O_RDONLY);
	/*Read the source file*/
	f_read = read(source, tmp, 1024);
	/*Open the destination file*/
	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		/*Check if source and dest file returns an error*/
		if (source == -1 || f_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(tmp);
			exit(98);
		}
		w = write(dest, tmp, f_read);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(tmp);
			exit(99);
		}
		f_read = read(source, tmp, 1024);
		/*Appends source file with dest file*/
		dest = open(av[2], O_WRONLY | O_APPEND);
	} while (f_read > 0);
	free(tmp);
	/*Close files by calling functions*/
	_close(source);
	_close(dest);
	return (0);
}
