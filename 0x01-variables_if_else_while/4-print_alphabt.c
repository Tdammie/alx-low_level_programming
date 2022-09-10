#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	putchar alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
			continue;
		else if (alphabet == 'e')
			continue;

		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
