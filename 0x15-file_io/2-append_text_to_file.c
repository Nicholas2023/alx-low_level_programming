#include "main.h"

/**
 * append_text_to_file - Appends text at the end of the file
 * @filename: Name of the file
 * @text_content: String to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/*Variable declaration*/
	int f_open, f_read = 0, f_write;

	/*Check if filename is NULL*/
	if (!filename)
		return (-1);

	/*Open and set the mode of the file*/
	f_open = open(filename, O_WRONLY | O_APPEND);
	if (f_open == -1)
		return (-1);

	/*Check if text_content is NULL, then calc strlen*/
	if (text_content != NULL)
	{
		/*Calculate the length of the text_content*/
		for (f_read = 0; text_content[f_read];)
			f_read++;

		/*Write an appended text to the file*/
		f_write = write(f_open, text_content, f_read);
		if (f_write == -1)
			return (-1);
	}

	/*Close the file*/
	close(f_open);

	return (1);
}
