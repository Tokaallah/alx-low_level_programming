#include "main.h"
#include <stddef.h>
#include <unistd.h>

int _putchar(char c)
{
    /* Function implementation */
    return write(1, &c, 1);
}

int _islower(int c)
{
    /* Function implementation */
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c)
{
    /* Function implementation */
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n)
{
    /* Function implementation */
    return (n < 0) ? -n : n;
}

int _isupper(int c)
{
    /* Function implementation */
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c)
{
    /* Function implementation */
    return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
    /* Function implementation */
    int length = 0;
    while (*s)
    {
        length++;
        s++;
    }
    return length;
}

void _puts(char *s)
{
    /* Function implementation */
    while (*s)
    {
        _putchar(*s);
        s++;
    }
}

char *_strcpy(char *dest, char *src)
{
    /* Function implementation */
    char *copy = dest;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return copy;
}

int _atoi(char *s)
{
    /* Function implementation */
    int result = 0;
    int sign = 1;
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    while (*s)
    {
        result = result * 10 + (*s - '0');
        s++;
    }
    return sign * result;
}

char *_strcat(char *dest, char *src)
{
    /* Function implementation */
    char *concat = dest;
    while (*dest)
        dest++;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return concat;
}

char *_strncat(char *dest, char *src, int n)
{
    /* Function implementation */
    char *concat = dest;
    while (*dest)
        dest++;
    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    *dest = '\0';
    return concat;
}

char *_strncpy(char *dest, char *src, int n)
{
    /* Function implementation */
    char *copy = dest;
    while (*src && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }
    while (n > 0)
    {
        *dest = '\0';
        dest++;
        n--;
    }
    return copy;
}

int _strcmp(char *s1, char *s2)
{
    /* Function implementation */
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n)
{
    /* Function implementation */
    char *ptr = s;
    while (n > 0)
    {
        *ptr = b;
        ptr++;
        n--;
    }
    return s;
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
    /* Function implementation */
    char *ptr_dest = dest;
    char *ptr_src = src;
    while (n > 0)
    {
        *ptr_dest = *ptr_src;
        ptr_dest++;
        ptr_src++;
        n--;
    }
    return dest;
}

char *_strchr(char *s, char c)
{
    /* Function implementation */
    while (*s)
    {
        if (*s == c)
            return s;
        s++;
    }
    return NULL;
}

unsigned int _strspn(char *s, char *accept)
{
    /* Function implementation */
    unsigned int count = 0;
    while (*s && _strchr(accept, *s))
    {
        count++;
        s++;
    }
    return count;
}

char *_strpbrk(char *s, char *accept)
{
    /* Function implementation */
    while (*s)
    {
        if (_strchr(accept, *s))
            return s;
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle)
{
    /* Function implementation */
    while (*haystack)
    {
        char *h = haystack;
        char *n = needle;
        while (*h && *n && *h == *n)
        {
            h++;
            n++;
        }
        if (!*n)
            return haystack;
        haystack++;
    }
    return NULL;
}
