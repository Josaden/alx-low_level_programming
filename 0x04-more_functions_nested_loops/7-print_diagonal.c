#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: numer of spaces before the backslash
 * Return: void
 */

void print_diagonal(int n)
{
	int l, m;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (m = 0; m < n; m++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
