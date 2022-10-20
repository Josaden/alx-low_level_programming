#include "main.h"

/**
 * times_table - print the 9 times tabl
 * Return: times table
 *
 */

void times_table(void)
{
	int a, b, mu;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			mu = a * b;

			if (mu <= 9)
			{
				if (b != 0)
				{
					_putchar(' ');
				}
				_putchar(mu + '0');
			}
			else
			{
				_putchar(mu / 10 + '0');
				_putchar(mu % 10 + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
