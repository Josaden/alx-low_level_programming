#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int m, n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if  (n >= 10)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar(10);
	}
}

