#include "main.h"

/**
 * create_file - function creates file
 * @filename: name of output file
 * @text_content: content of output file.
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int op, cont, wr;

	if (!filename)
		return (-1);

	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (op == -1)
		return (-1);

	if (!text_content)
	{
		text_content = "";
	}
	else
	{
		for (cont = 0; text_content[cont]; cont++)
			;
	}

	wr = write(op, text_content, cont);

	if (wr == -1)
		return (-1);

	close(op);

	return (1);
}
