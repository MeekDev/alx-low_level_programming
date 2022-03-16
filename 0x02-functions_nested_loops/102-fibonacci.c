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
	int i;

	printf("1, ");
	for (i = 1; i <= 50; i++)
	{
		if (a != 1)
		{
			printf("%d, ", a);

			c = a + b;

			a = b;
			b = c;
	}
	return (0);
}
