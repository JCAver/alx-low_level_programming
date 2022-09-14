#include "main.h"

/**
 * print sign - check the code.
 * @n: parameter for the function.
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	rturn (1);
}

	else if(n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
