#include "ft_printf.h"
void ft_prstring(char *printme)
{
	int i;

	i = 0;
	while (printme[i])
		ft_putchar(printme[i++]);
}