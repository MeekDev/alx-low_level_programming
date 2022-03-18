#include "main.h"
/**
 * print_most_numbers - print numbers
 * Description: print numbers 0 to 9
 * Return: nothing
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && !n == 4)
		{
			_putchar(n + '0');
		}
		n++;
	}
	_putchar('\n');
}
