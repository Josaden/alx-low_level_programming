#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: last digit
 * Return: last digit
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		n = n * -1;
	}

	m = n % 10;

	return (m);
}
