#include "main.h"
#include <stdio.h>

/**
 * chk_err - function checks if files can be opened.
 * @frm: From.
 * @to: To
 * @argv: array of argument
 * Return: void
 */

void chk_err(int frm, int to, char *argv[])
{
	if (frm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Main entry point
 * @argc: number of arguments.
 * @argv: array of arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int frm, to, cls_err;
	ssize_t num_char, wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	frm = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	chk_err(frm, to, argv);

	num_char = 1024;
	while (num_char == 1024)
	{
		num_char = read(frm, buffer, 1024);
		if (num_char == -1)
			chk_err(-1, 0, argv);
		wr = write(to, buffer, num_char);
		if (wr == -1)
			chk_err(0, -1, argv);
	}

	cls_err = close(frm);
	if (cls_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", frm);
		exit(100);
	}

	cls_err = close(to);
	if (cls_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", frm);
		exit(100);
	}
	return (0);
}
