#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints random to varaible
 *
 * Return: Always (Successful)
 */
int main(void)
{
	int n;
	char last[] = "last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is %d and is", last, n, n% 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less that 6 and not )\n");
	}
	return (0);

}
