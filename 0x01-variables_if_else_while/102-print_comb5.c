#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			k = ++j + 1;
		}
		j = ++i + 1;
	}
	putchar('\n');

	return (0);
}
