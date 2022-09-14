#include "main.h"
/**
 * _abs - put sign
 * @numb: integer parameter for function
 * Return: 0
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
