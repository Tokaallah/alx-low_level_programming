#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char *str = "My Dyn Lib";
    int len = _strlen(str);

    printf("%d\n", len);

    return 0;
}
