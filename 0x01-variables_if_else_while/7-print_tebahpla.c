#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int x, nl;

	nl = 10;

	for (x = 122; x >= 97; x--)
		putchar(x);
	putchar(nl);

	return (0);
}
