#include "main.h"
/**
 * _abs - function computes the absolute value of an integer
 * @numb: integer parameter for function
 * Return: absolute value
 */
int _abs(int numb)
{
	if (numb >= 0)
	{
		return (numb);
	}
	else
		return (numb * -1);
}

