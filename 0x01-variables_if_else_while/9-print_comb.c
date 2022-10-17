#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, nl, cm;

	cm = 44;

	nl = 10;

	for (x = 48; x <= 57; x++)
		if (x != 57)
		{
			putchar(x);
			putchar(cm);
		}
		else
			putchar(x);

	putchar(nl);

	return (0);
}
