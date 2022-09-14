#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in
 * lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, x;

	for (x = 0; x <= 9; x++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
