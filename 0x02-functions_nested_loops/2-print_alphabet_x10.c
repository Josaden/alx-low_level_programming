#include "main.h"

/**
 * print_alphabet_x10(void) - Entry point
 * Return: void
 */

void print_alphabet_x10(void)
{
	int m, n;

	m = 0;

	while (m < 10)
	{
		for (n = 97; n <= 122; n++);
		{
			_putchar(n);
		}
		_putchar('\n');
		m++;
	}
}
