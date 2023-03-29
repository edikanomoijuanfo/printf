#include "main.h"

/**
* checkspecifier - function to check a format and print proper function
* @format: The format to check
* Return: pointer to the function
*/

int (*checkspecifier(const char *format))(va_list args)
{	int i;
	specifier check[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_pc},
	{"i", print_int},
	{"d", print_dec},
	{"b", print_bin},
	{"x", print_hex},
	{"X", print_heX},
	{"u", print_unsigned_int},
	{"r", rev_string},
	{"R", rot13},
	{NULL, NULL}
	};
	for (i = 0; check[i].ch != NULL; i++)
	{
		if (*(check[i].ch) == *format)
		{
			return (check[i].func);
		}
	}
	return (NULL);
}
