#include "main h"
#include <unistd.h"
/**
 * _putchar -write the character c to stdout
 * @c- the character to print
 * return :1 (success)
 * error,return -1. erroe is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
