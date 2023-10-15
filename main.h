#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>

int _putchar(char c);
int character(va_list print);
int string(va_list print);
int percent(void);
int integer(va_list print);
int number_hundler(int i);
int specifier(const char *format, va_list print);
bool string_checker(const char *set, char c);
int _printf(const char *format, ...);
int printf_int(va_list args);
int printf_dec(va_list args);

#define MY_INT_MIN -2147483647
#define MY_INT_MAX 2147483647

#endif
