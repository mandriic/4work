#include "ft_printf.h"
void ft_putchar(char printme)
{
	write(1, &printme, 1);
}