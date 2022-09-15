#include "main.h"
/**
 * jack_bauer - This function prints every minute of the day of Jack Bauer,
 * from 00:00 to 23:59
 * Return: 0
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;
	int hrs_double;
	int mins_double;

	while (hrs < 24)
	{
		while (mins < 60)
		{
			mins_double = mins % 10;
			hrs_double = hrs % 10;
			_putchar(hrs / 10 + '0');
			_putchar(hrs_double + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins_double + '0');
			_putchar('\n');
			mins++;
		}
		hrs++;
		mins = 0;
	}
}


