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
int j;
int k;
for (i = 48; i < 58; i++)
{
for (j = i + 1; j < 58; j++)
{
for (k = j + 1; k < 58; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i < 55)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
