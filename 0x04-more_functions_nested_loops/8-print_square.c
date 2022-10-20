#include "main.h"

/**
 * print_square - function that prints a squar
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		int x, y;

		for (x = 0; x <= size; x++)
		{
			for (y = 0; y <= size; y++)
			{
				_putchar(35);
			}
		}
		_putchar(10);
	}
}

