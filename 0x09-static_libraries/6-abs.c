#include "main.h"

/**
 * _abs - function that computes the absolute
 *         value of integer
 *
 * @n: integer type inpute for function
 *
 * Return: alwyas 0 ( Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
