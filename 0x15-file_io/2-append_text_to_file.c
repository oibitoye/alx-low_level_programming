#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: input filename.
 * @text_content: content to be appended
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, cont, wr;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		for (cont = 0; text_content[cont]; cont++)
			;

		wr = write(op, text_content, cont);

		if (wr == -1 || op == -1)
			return (-1);
	}

	close(op);

	return (1);
}
