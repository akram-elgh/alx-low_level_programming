#include "main.h"

/**
  * print_square - print square
  * @size: size of square
	* 
  * void: none
  */
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
for (i = 1; i <= size ; i++)
{
for (j = 1 ; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
