#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
	return (0);
}
