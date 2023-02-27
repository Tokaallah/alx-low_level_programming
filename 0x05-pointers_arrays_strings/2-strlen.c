#include "main.h"

/**
 * _strlen - gets character length
 *
 * @s: character getstring
 * Return: returns length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
