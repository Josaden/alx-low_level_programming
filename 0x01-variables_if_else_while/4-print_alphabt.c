#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int x, nl;

	for (x = 97; x <= 122; x++)
		if ((x == 101) || (x == 133))
		{}
		else
			putchar(x);
	putchar("nl");

	return (0);
}
