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
printf("Size of a char: %ld byte(s)\n",sizeof(c));
printf("Size of an int: %ld byte(s)\n",sizeof(i));
printf("Size of a float: %ld byte(s)",sizeof(f));
printf("Size of a long long int: %ld byte(s)",sizeof(lli));
printf("Size of a long int: %ld byte(s)",sizeof(li));
return (0)
}
