#include "main.h"
#include <stdio.h>


/**
* main - To test the function
* @void: argument
* Return: 0 always sucess
*/

int main(void)
{	int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
	count1 = _printf("%c\n", 'F');
	printf("The total number of count1 is:%d\n", count1);
	count2 = _printf("%s\n", "Olalekan");
	count4 = printf("%s\n", "Olalekan");
	printf("The total number of count2 is:%d\n", count4);
	printf("The total number of count2 is:%d\n", count2);
	count3 = _printf("%%\n", '%');
	printf("The total number of count3 is:%d\n", count3);
	return (0);
}
