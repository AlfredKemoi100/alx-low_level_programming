#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints single integer from 0-10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');

	return (0);
}
