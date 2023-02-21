#include "main.h"

/**
 * print_alphabet - printing alphabet from a to z
 *
 * Return: Void
 */
void print_alphabet(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet++);
}
_putchar('\n');
}
