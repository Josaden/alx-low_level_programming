#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: variable holding first string
 * @src: variable holding another string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}
	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);

}
