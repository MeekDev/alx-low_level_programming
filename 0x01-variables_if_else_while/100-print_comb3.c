#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f_num;

	int l_num = 0;

	while (l_num < 10)
	{
		f_num = 0;
		while (f_num < 10)
		{
			putchar('0' + l_num);
			putchar('0' + f_num);

			if (f_num + l_num != 18)
			{
				putchar(',');
				putchar(' ');
			}
			f_num++;
		}

		l_num++;
	}
	putchar('\n');
	return (0);
}
