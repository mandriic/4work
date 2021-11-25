#ifndef LIBFT_H
# define LIBFT_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int ft_printf(const char *format, ...);
char *ft_num_to_base(unsigned long long addr, char *base);
int ft_putchar(char printme);
int ft_print_string(char *printme);
int ft_parsing(char caracter, va_list args);
int ft_pointer(void *pointer);
int ft_dec_ent(int);
char	*ft_itoa(int n);
int ft_unsign(long unsigned int);
int	ft_strlen(const char *s);
int ft_hex_low(long unsigned int nohex);
int ft_hex_high(long unsigned int nohex);
#endif