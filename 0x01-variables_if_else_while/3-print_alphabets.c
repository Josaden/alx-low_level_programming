#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
		putchar(x);
	for (x = 65; x <= 90; x++)
		putchar(x);
	putchar(10);
	return (0);
}
