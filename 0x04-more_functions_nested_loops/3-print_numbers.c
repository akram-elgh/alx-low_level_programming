#include "main.h"

/**
* print_number - prints numbers from 0 to 9
* 
* Return: void
*/
void print_number(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
