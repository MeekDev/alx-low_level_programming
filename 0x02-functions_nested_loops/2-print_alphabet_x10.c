#include <stdio.h>
#include "main.h"
/**
 * print_alphabet -  prints 10 times the alphabet
 */
void print_alphabet(void)
{
	int i = 0;
	
	char l = 'a';

	while (i <= 26)
	{
		while (l <= 'z')
		{
			putchar(l);
			l++;
		}
		i++;
	}
	putchar('\n');
}
