#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, nl;

	nl = 10;

	for (x = 48; x <= 57; x++)
		putchar(x);

	for (x = 97; x <= 102; x++)
		putchar(x);

	putchar(nl);

	return (0);
}
