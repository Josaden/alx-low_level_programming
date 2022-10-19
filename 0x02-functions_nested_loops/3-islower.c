#include "main.h"

/**
 * _islower - Entry point
 * Return: 0 if successful and 1 if unsuccessful
 * @c: can be any lowercase letter
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
