#include "main.h"

/**
* rot13 - To encode sting using rot13
* @args: pointer to te string
* Return: count to the rot 13 value of the string
*/

int rot13(va_list args)
{	char *str;
	int i;
	int j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j <= 52; j++)
	{
	if (str[i] == s1[j])
	{
	_putchar(s2[j]);
	break;
	}
	}
	if (j == 53)
		_putchar(str[i]);
	}
	return (i);
}
