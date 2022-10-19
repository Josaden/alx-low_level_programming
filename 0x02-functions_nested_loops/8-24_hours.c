#include "main.h"

/**
 * jack_bauer - function that prints 00:00 to 23:59
 * Return: 00:00 - 23:59
 * void: function returns void
 */

void jack_bauer(void)
{
	int a, b, c, d, col, nl;

	col = 58;

	nl = 10;

	for (a = 48; a < 51; a++)
	{
		for (b = 48; b < 52; b++)
		{
			for (c = 48; c < 54; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(col);
					_putchar(c);
					_putchar(d);
					_putchar(nl);
				}
			}
		}
	}
	return;
}
