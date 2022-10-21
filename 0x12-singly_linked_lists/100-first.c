#include <stdio.h>

/**
 * print_main - function will be executed before main
 * Return: void.
 */

void __attribute__ ((constructor)) print_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
