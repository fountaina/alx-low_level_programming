#include <unistd.h>
#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On sucess 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int c);
int _abs(int n);
int print_last_digit(int n);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_to_98(int n);
void print_times_table(int n);

#endif
