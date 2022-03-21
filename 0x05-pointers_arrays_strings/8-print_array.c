#include "main.h"
#include <stdio.h>
/**
 * print_array - print the array
 * @a: parameter
 * @n: parameter
 * Return: null
 */
print_array(int *a, int n)
{
	int i;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
