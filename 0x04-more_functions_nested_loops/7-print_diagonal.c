#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: paramter
 * Return: null
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	while (i < n)
	{
		while (j <= i)
		{
			if (j != i)
			{
				_putchar(' ');
			}
			else
			{
				_puchar(92);
			}
			j++;
		}
		_puchar('\n');
		i++;
		j = 0;
	}
	if (n <= 0)
		_putchar('\n');
}
