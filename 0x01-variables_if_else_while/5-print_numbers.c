#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Single numbers in base from 0 to 9
 *
 * Return: Always 0
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
