#include "main.h"

/**
 * print_line -  function that draws a straight line in the terminal
 * @n: the number of _ consisted in the line
 * Return: straight line
 */

void print_line(int n)
{
	m = 1;

	while (m <= n)
	{
		_putchar(95);
		m++;
	}
	_putchar('\n');
}
