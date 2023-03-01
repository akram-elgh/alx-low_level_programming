#include "main.h"

/**
 * _strncat: similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
 * @dest: the destination
 * @src: the source
 * 
 * Return: pointerto dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i++] = src[j++];
}
dest[i] = '\0';
return (dest);
}
