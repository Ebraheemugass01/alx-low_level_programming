#include <stdio.h>
#include <stdlid.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 */
int  main(void)
{
	Int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
{
	printf("%d is positive\n", n);
}
esle if (n == 0)
{
	printf("%d is zero\n, n);
}
else if (n < 0)
{
	printf(" % d is negative\n", n);
}
return (0);
}

