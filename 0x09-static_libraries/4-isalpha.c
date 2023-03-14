#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * Return: 1 if c is a letter, 0 otherwise
 */
 
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
