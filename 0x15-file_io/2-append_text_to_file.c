#include "main.h"
/**
 * append_text_to_file - Fnctn Appends text at the end of a file
 * @filename: A pointer to the name of the file to append to.
 * @text_content: The string to append to the end of the file.
 *
 * Return: If function fails or filename is NULL (-1).
 *         If file doesnt exist or user lacks write perms (-1)
 *         Else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, leng);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
