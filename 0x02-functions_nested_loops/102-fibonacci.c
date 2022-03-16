#include <stdio.h>
/**
 * main - Entry point
 * Description: Fibonacci sequence
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a = 1;
	int b = 1;
	int c;

	for (i = 0; i <= 50; i++)
	{
		printf("%d, ", a);
		c = a + b;

		a = b;

		b = c;
	}
	return (0);
}
