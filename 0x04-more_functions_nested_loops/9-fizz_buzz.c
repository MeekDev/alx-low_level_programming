#include <stdio.h>
/**
 * main - Entry point
 * Description: print 1 to 100
 * if 3 fizz if 5 Buzz
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (num % 3 != 0 && num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (num == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
