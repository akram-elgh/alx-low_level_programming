#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet++);
}
_putchar('/n');
}
