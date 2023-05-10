#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - it says if an integer is a prime no or not
 * @n: nos to evaluates
 *
 * Return: 1 whether n is a prime no, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates if a no is prime recursively
 * @n: no to evaluates
 * @i: iterators
 *
 * Return: 1 whether n is prime, else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
