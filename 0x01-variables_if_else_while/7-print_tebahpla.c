#include <stdio.h>
/**
 * main - Prints lowercase alphabets in reverse
 * @vooid:no argument
 * Return: 0
 **/
int main(void)
{
	char c;

	for ( c = 'z'; c > 'a'; c--)
		putchar(c);
	putchar('\n');
	return(0);
}
