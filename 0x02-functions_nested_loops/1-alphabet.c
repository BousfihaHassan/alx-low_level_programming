#include "main.h"

/**
 * printf_alphabet - utilizes on the _putchar function to printf
 *                   the alphabet a - z
 *
 *Description:  prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	 _putchar('\n');
}
