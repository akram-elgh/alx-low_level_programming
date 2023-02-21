#include "main.h"

/**
 * print_alphabet_x10 - pa function that prints 10 times the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
char alphabet;
int i;
i = 0;
while (i < 10)
{
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet++);
}
_putchar('\n');
i++;
}
}
