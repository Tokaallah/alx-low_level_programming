#include "main.h"

/**
 * print_square - prints hashes square
 * @size: size of the square
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		if (i != size - 1)
			putchar('\n');
	}
	putchar('\n');
}
