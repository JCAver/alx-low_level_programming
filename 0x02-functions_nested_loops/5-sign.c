#include "main.h"

/**
 * print sign - check the code.
 * @n: parameter for the function.
 *
 * Return: 1 if c is letter.
 * Return 0 otherwise.
 */
int print_sign(int n)
{
	if ((n > 0))
		return (1);
	else
		_putchar(+);
	if ((n == 0))
                return (0);
        else
                _putchar(0);
	if ((n < 0))
                return (-1);
        else
                _putchar(-);
}
