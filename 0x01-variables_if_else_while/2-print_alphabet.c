#include <stdio.h>
/**
 * main - Entry point of program
 * Description: print letters from a to z
 * Result: Always 0 (Success)
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
return (0);
}
