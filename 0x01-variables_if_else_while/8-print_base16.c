#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char hex_digits[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(hex_digits[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
