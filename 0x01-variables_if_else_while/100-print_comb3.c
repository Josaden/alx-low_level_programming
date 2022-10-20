#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, cm, spa, nl;

	nl = 10;

	cm = 44;

	spa = 32;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);

		if (x == 57)
		{
		}
		else
		{
			putchar(cm);
			putchar(spa);
		}
	}
		putchar(nl);
	return (0);
}
