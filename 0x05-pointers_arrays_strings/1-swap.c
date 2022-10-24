#include "main.h"

/**
  * swap_int - function that swaps the values of two integers
  * @a:  first variable
  * @b: second variable
  */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
