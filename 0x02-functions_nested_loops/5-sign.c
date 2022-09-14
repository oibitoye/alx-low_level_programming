#include "main.h"
/**
 * main - Main entry point
 * print_sign - print sign
 * Description: put sign of number
 * Return: 0
 */
 int print_sign(int numb)
 {
 	if (numb > 0)
 	{
 	_putchar('+');
 	return (1);
 }
 	else if (numb < 0)
 	{
 	_putchar('-');
 	return (-1);
 	}	
 	else
 	{
 	_putchar('0');
 	return (0);
 	}
 }

