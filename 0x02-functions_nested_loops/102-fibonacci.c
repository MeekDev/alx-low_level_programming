#include <stdio.h>
/**
 * main - Entry point
 * Description: Fibonacci sequence
 * Return: 0 Always (Success)
 */
int fibonacci(int);

int main(void)
{
	int fibonacci(int n)
	{
		if (n < 2)
		{
			return (1);
		}
		else
		{
			return (fibonacci(n - 1) + fibonacci(n - 2));
		}
	}

	int i;

	for (i = 0; i <= 50; i++)
	{
		printf("%d, ", fibonacci(i));
	}
	return (0);
}
