#include "main.h"
/**
 * print_line - print line
 * @n: paramter
 * Return: nothing
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar(95);
			i++;
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
