#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * orint_name - print the name
 * @name: name to print
 * @f: functions to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
