#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: last digit
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n % 10 * -1;
		_putchar(n + '0');
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
	}

	return (n);
}
