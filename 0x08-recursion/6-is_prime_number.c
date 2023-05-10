#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - will say whether an integer is a prime number or not
 * @n: no to evaluate
 *
 * Return: 1 whenever n is a prime number,else 0 
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates to know if a number is prime recursively
 * @n: no to evaluate
 * @i: iterators
 *
 * Return: 1 whenever n is a prime, else 0 
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
