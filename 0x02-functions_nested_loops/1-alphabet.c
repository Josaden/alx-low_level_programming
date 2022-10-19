#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Return: zero(0) if sucessful
 */

void print_alphabet(void)
{

	int n;

	for (n = 97; n <= 122; n++)
		_putchar(n);

	_putchar(10);

	return (0);

}
