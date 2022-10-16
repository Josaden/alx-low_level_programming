#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	int last_digit = n % 10;

	printf("The last digit of %d is ", n);
	if (last_digit > 5)
		printf("%d and is greater than 5", last_digit);
	else if (last_digit == 0)
		printf("%d and is 0", last_digit);
	else if ((last_digit < 6) && (last_digit != 0))
		printf("%d and is less than 6 and not 0", last_digit);
	return (0);
}
