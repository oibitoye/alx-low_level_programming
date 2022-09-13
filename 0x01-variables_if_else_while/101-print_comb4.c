#include <stdio.h>
/**
* main - Main program
* Description: Prints all possible different combinations of 3 digits.
* Return: 0
*/
int main(void)
{
	int numb = 0;
	int frst;
	int midd;
	int last;

	while (numb < 1000)
	{
		frst = (numb / 100 + '0');
		midd = (numb / 10 % 10 + '0');
		last = (numb % 10 + '0');

		if ((frst < midd) && (midd < last))
		{
			putchar(frst);
			putchar(midd);
			putchar(last);

			if (numb != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		numb++;
	}
putchar('\n');
return (0);
}
