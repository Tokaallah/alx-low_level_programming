#ifndef MAIN_H
#define MAIN_H
void _puts_recursion(char *s);
/**
 * _puts_recursion - uses recursion
 * @s: string to recurse through
 */
void _print_rev_recursion(char *s);
/**
 * _print_rev_recursion - prints reverse with recurse
 * @s: string to print
 */
int _strlen_recursion(char *s);
/**
 * _strlen_recursion - gets string length
 * @s: string to count
 * Return: int value
 */
int factorial(int n);
/**
 * factorial - return factorial
 * @n: number to return
 * Return: factorial or -1
 */
int _pow_recursion(int x, int y);
/**
 * _pow_recursion - gives power
 * @x: integer to power
 * @y: power to do
 * Return: return integer value
 */
int _sqrt_recursion(int n);
/**
 * _sqrt_recursion - square root of int
 * @n: integer to root
 * Return: int value
 */
int is_prime_number(int n);
/**
 * is_print_number - is prime or not
 * @n: integer to compare
 * Return: boolean
 */
int is_palindrome(char *s);
/**
 * is_palindrome - is palindrome
 * @s: string to do
 * Return: boolean
 */
int wildcmp(char *s1, char *s2);
#endif
