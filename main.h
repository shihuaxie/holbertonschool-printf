#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list *args);
int print_string(va_list *args);
int print_percent(__attribute__((unused)), va_list *args);
int print_numbers(va_list *args);

#endif
