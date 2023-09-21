#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: an array
 * @v: number of contents in array
 * Return: void
 */
void reverse_array(int *a, int v)
{
	int i;
	int t;

	for (i = 0; i < v--; i++)
	{
		t = a[i];
		a[i] = a[v];
		a[v] = t;
	}
}
