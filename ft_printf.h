#ifndef LIBFT_H
# define LIBFT_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_printf(const char *format, ...);
void ft_num_to_hex(int addr, const char *base);
void ft_putchar(char printme);
void ft_prstring(char *printme);

#endif