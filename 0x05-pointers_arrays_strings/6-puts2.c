#include "main.h"
/**
 * puts2 - function should point only one character out of two
 * starting with the first one
 * @str: input
 *
 * Return: print
 */
void puts2(char *str)
{
	int z = 0;

	while (str[Z] != '\0')
	{
		if (z % 2 == 0)
		{
		_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');

}
