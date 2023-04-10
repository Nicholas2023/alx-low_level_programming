#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file being created
 * @text_content: A string to be written to the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	/*Variable declaration*/
	int f_open, f_read = 0, f_write;

	/*Check if filename if NULL*/
	if (!filename)
		return (-1);

	/*Open set the mode of the file rw------- */
	f_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f_open == -1)
		return (-1);

	/*Check if text_content is NULL*/
	if (text_content == NULL)
		text_content = "";

	/*Calculate the number of characters in text_content*/
	for (f_read = 0; text_content[f_read] != '\0';)
		f_read++;

	/*Write text_content to the file*/
	f_write = write(f_open, text_content, f_read);
	if (f_write == -1)
		return (-1);

	/*Close the file*/
	close(f_open);

	return (1);
}
