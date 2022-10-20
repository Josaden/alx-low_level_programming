#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
			for (b = 0; b < size; b++)
			{
				if (b < size - (a + 1))
						{
						_putchar(' ');
						}
				else
				{
					_putchar(35);
				}
				_putchar(10);
			}
	}
	else
	{
		_putchar(10);
	}
}
