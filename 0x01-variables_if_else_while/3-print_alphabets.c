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
for (i = 97; i <= 122; i++)
putchar(i);
for (i = 65; i <= 90; i++)
putchar(i);
putchar('\n');
return (0);
}
