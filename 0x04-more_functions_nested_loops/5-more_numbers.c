#include "main.h"
/**
 * more_numbers - print more numbers
 * Description: print numbers form 0 to 14 ten times
 * Return: Nothing
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
