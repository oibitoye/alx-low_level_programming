#include "main.h"

/**
 * read_textfile - function reads text file and prints its letters
 * @filename: name of input file
 * @letters: numbers of letters to be printed.
 * Return: numbers of letters printed or 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr, op;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1)
		return (0);

	close(op);

	free(buffer);

	return (wr);
}
