#include "main.h"
/**
 * _islower - entry
 * funtion that checks for lowercase character
 * @c: checks if its lowercase
 * Return: 0 (if lowercase), 1(if not)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
