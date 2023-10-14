#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int character(va_list print);
int string(va_list print);
int percent(void);
int integer(va_list print);
int number_hundler(int i);
int specifier(const char *format, va_list print);

#endif
