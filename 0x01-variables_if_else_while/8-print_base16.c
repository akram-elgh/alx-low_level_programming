#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 48; i <= 102; i++)
{
if (i < 58 || i > 96 )
{
putchar(i);
}
}
putchar('\n');
return (0);
}
