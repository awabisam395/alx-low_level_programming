#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int l;

	for (l = 0 ; l < 10 ; l++)
	{
	if (l == 9)
		putchar(l + '0');
	else
	{
		putchar(l + '0');
		putchar(' ');
		putchar(',');
	}
	}
	return (0);
}
