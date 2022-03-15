#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char l = 'a';

	while (i <= 10)
	{
		while (l <= 'z')
		{
			putchar(l);
			l++;
		}
		i++;
		putchar('\n');
	}
}
