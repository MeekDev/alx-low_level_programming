#include <stdio.h>
/**
 * main - Entry point
 * Description: Fibonacci sequence
 * Return: 0 Always (Success)
 */
int main(void)
{
	unsigned int a = 1;
	unsigned int b = 1;
	unsigned int c;
	unsigned int i;

	printf("1, ");
	for (i = 1; i <= 50; i++)
	{
		if (i != 1)
		{
			printf("%d, ", a);

			c = a + b;

			a = b;
			b = c;
		}
	}
	return (0);
}
