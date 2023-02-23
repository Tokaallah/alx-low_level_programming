#include "main.h"

/**
 * more_numbers - print numbers 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
				putchar((ch / 10) + 48);
			putchar((ch % 10) + 48);
		}
		putchar('\n');
	}
}
