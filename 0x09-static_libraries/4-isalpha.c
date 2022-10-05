#include "main.h"

/**
 * _isalpha - check the code.
 * @c: parameter for the function.
 *
 * Return: 1 if c is letter.
 * Return 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
