#include "main.h"
/**
 * _pow_recursion - power using recussion
 * @x: number to raised to power y
 * @y: power number
 * Return: power results
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1)
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
