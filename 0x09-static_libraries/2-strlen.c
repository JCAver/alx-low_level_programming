#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String
 *
 * Return: returns length as intrger
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
