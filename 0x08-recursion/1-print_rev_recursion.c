#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to string to be printed in reverse.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* base case: end of string */
		return;

	_print_rev_recursion(s + 1); /* recursive call with incremented pointer */
	_putchar(*s);
}
