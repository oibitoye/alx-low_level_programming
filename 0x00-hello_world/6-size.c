#include <stdio.h>

/**
 * main - Main entry point
 * Description: Size is not grandeur
 * Return: 0
 */
int main(void)
{
	char words;
	int numbas;
	long longword;
	long long llongword;
	float fl_nombas;

	printf("Size of a char: %d byte(s)\n", (char)sizeof(words));
	printf("Size of an int: %ld byte(s)\n", sizeof(numbas));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longword));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(llongword));
	printf("Size of a float: %ld byte(s)\n", sizeof(fl_nombas));
	return (0);
}

