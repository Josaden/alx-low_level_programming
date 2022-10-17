#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, cm, spa;

	cm = 44;

	spa = 32;

	for (x = 48; x <= 57; x++)
		if (x != 57)
		{
			putchar(x);
			putchar(cm);
			putchar(spa);
		}
		else
			putchar(x);

	return (0);
}
