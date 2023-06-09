#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int (*checkspecifier(const char *))(va_list);

/**
* struct specifier - data type for specifiers
* @ch: character specifier
* @func: pointer to the character specifier
*/

typedef struct specifier
{
	char *ch;
	int (*func)(va_list);
} specifier;

int print_char(va_list);
int print_string(va_list);
int print_pc(va_list);
int print_int(va_list);
int print_dec(va_list);
int _putchar(char c);
int print_bin(va_list);
int print_hex(va_list);
int print_pointer(va_list);
int print_heX(va_list);
int print_unsigned_int(va_list);
int rev_string(va_list);
int rot13(va_list);
#endif
