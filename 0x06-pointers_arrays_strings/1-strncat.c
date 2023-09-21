#include "main.h"
/**
 * _strncat - used to conatenate two strings
 * using at most bytes from src
 * @dest: input val
 * @src: input val
 * @n: input val
 * Return: dest
 */
char *_strncat(char *dest, char *src, int  n)
{
	int r;
	int s;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
		dest[r] = src[s];
		r++;
		s++;
	}
	dest[r] = '\0';
	return (dest);
}
