#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet in lowercase
 *
 * Return: Always 0 (seccess)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
