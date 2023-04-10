#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: Name of the file to be read and printed
 * @letters: The number of letters to be read and printed
 *
 * Return: 0 if file cannot be opened
 * 0 if filename is NULL
 * 0 if write fails
 * Actual number of letters to be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/*Variable declaration*/

	ssize_t f_open, f_read, f_write;
	char *tmp;

	/*Check if filename is NULL*/

	if (filename == NULL)
		return (0);

	/*Memory allocation for read and written letters*/

	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
		return (0);

	/*File opening and mode stating*/

	f_open = open(filename, O_RDONLY);

	/*File reading*/

	f_read = read(f_open, tmp, letters);

	/*File writing to stdout*/

	f_write = write(STDOUT_FILENO, tmp, f_read);

	/*Check for errors in system calls*/

	if (f_open == -1 || f_read == -1 || f_write == -1 || f_write != f_read)
	{
		free(tmp);
		return (0);
	}

	/*Free the dynamic memory, previously allocated*/

	free(tmp);

	/*Close the file*/

	close(f_open);

	/*Return number of bytes written to stdout*/

	return (f_write);
}
