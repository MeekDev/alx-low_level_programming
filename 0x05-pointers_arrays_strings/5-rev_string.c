#include "main.h"
/**
 * rev_string - reverse string
 * @s: paramter
 * Return: null
 */
void rev_string(char *s)
{
	int i = 0;

	while (i != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
