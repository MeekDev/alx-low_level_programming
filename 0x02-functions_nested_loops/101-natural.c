#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || 1 % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
