#include "main.h"

/**
* main - To test my printf
* Return: 0 always sucess
* @void: ...
*/

int main(void)
{
	char d = 'a';
	char *y = "Emmanuel";

	_printf("%c\n", 'F');
	_printf("%%\n", '%');
	_printf("%s\n", "Olalekan");
	_printf("%s\n", y);
	_printf("%c\n", d);
	return (0);
}
