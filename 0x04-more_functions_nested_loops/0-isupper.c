#include "main.h"
#include <ctype.h>
/**
 * _isupper - output uppercase letter
 * @c: parameter to include
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
