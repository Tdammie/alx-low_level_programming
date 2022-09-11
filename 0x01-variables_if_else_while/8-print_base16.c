#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints numbers of bas 16 in lowercase
 *
 * Return: ALways 0
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c)
	}

	putchar('\n');

	return (0);
}


