#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: numer of spaces before the backslash
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		int l, m;

		for (m = 0; m < n; m++)
		{
			for (l = 0; l < n; l++)
			{
			_putchar(92);
			}
		_putchar(10);
		}
	}
}
