#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point of the program
 * - Gideon Obae, 2021-08-26"
 * Description: followed by a new line, to the standard error.
 * Result: Always 1 (Success)
 */
int main(void)
{
write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
