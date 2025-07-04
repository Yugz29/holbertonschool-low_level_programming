#include "main.h"

/**
 * auxiliaire - checks whether a number has a divisor
 * @n: number to test
 * @r: current divider
 *
 * Return: 1 if n is prime, 0 otherwise
 *
 **/

int auxiliaire(int n, int r)
{
	if (n % r == 0)
	{
		return (0);
	}
	if (r * r > n)
	{
		return (1);
	}
	else
	{
		return (auxiliaire(n, r + 1));
	}
}

/**
 * is_prime_number - determines whether a number is prime
 * @n: number to test
 * Return: 1 if n is prime, 0 otherwise
 **/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (auxiliaire(n, 2));
}
