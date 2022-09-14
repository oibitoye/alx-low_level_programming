#include "main.h"
/**
 * _isalpha - check for lowercase or Uppercase character
 * @alph: is an integer parameter for the function
 * Return: 0
 */
 int _isalpha(int alph)
 {
 	if ((alph >= 'A' && alph <= 'Z') || (alph >= 'a' && alph <= 'z'))
 	{
 	return (1);
 	}
 	else
 	return (0);
 }

