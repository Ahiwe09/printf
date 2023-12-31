#include "main.h"
/**
 * play_str - This function prints strings of charaters and standered output
 * @lst: The list of the variable part of the variadic function
 *
 * Return: This function return an int value
 */
int play_str(va_list lst)
{
	int cntr = 0;
	char *fetch = va_arg(lst, char *);

	if (fetch == NULL)
		fetch = "(null)";
	while (*fetch != '\0')
	{
		cntr += _putchar(*fetch);
		fetch++;
	}
	return (cntr);
}
