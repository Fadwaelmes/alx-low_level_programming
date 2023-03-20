#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar('a' + i);
	}
	putchar('\n');
	return (0);
}
