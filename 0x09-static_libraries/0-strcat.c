#include "main.h"

/**
 * _strcat - A function that concatenates two strings@
 * @dest: Pointer to the first string
 * @src: Pointer to the second string
 * Return: the string dest
 */
char *_strcat(char *dest, char *src)
{
	int strng2 = 0, strng1 = 0;

	while (dest[strng2])
		strng2++;
	while (src[strng1] != 0)
	{
		dest[strng2] = src[strng1];
		strng2++;
		strng1++;
	}
	dest[strng2] = '\0';
	return (dest);
}
