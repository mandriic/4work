#include "ft_printf.h"
int ft_putchar(char printme)
{
	return (write(1, &printme, 1));
}