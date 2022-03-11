#include <stdio.h>
/**
 * main - Entry point
 * Description: Runs a program check the output
 * Return: 0
 */
int main(void)
{
int i;
char c;
float f;
long li;
long long lli;
printf("Size of a char: %c byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", (unsigned)sizeof(i));
printf("Size of a long int: %ld byte(s)\n", sizeof(li);
printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
printf("Size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
