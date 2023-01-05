#include "main.h"

/**
 * _puts_recursion - prints a string recursivly
 * @s: string parameter
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
