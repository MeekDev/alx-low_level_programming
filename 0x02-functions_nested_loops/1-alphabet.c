#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print all alphabets
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
}
