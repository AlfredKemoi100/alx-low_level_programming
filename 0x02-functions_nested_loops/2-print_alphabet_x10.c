#include "main.h"

/**
 *print print_alphabet_x10 -> prints 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n')
	}
}
