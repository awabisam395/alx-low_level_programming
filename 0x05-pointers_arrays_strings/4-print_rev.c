#include "main.h"
/**
 * print_rev - reverse things
 * @s: char
 * return: always 0
 */
void print_rev(char *s)
{
	int longx;
	int o;

	longx = 0;
	while (*s != 0)
	{
		longx++;
		*s++;
	}
	s--;
	for (o = longx; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
