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
	{NULL, NULL},
	};

	for (i = 0; check[i].ch != NULL; i++)
	{
		if (*(check[i].ch) == *format)
		{
			return (check[i].func);
		}
	}
	return (0);
}
