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
int a;
int b;
int c;
int d;
for (i = 0; i <= 99; i++)
{
for (j = i + 1; j <= 99; j++)
{
a = i / 10;
b = i % 10;
c = j / 10;
d = j % 10;
putchar('0' + a);
putchar('0' + b);
putchar(' ');
putchar('0' + c);
putchar('0' + d);
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
