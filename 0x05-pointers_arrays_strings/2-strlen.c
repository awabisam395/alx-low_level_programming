#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: int
 * Return: always int
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
