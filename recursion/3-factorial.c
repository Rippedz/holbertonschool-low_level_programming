#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to get factorial of
 * Return: factorial of n
 */
int factorial(int n)
{
	/* Base Case return always -1 */
	if (n < 0)
		return (-1);
	/* n = 0 or 1 then return 1 */
	if (n <= 1)
		return (1);
	/* Recursive Case n * factorial of n - 1 */
	return (n * factorial(n - 1));
}
