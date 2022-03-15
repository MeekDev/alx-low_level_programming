#include <stdio.h>
#include "main.h"
/**
 * main - print all alphabets
 */
void main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
