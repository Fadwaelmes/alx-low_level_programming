#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				if (i < j || j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
