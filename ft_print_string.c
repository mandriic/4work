#include "ft_printf.h"
int ft_print_string(char *printme)
{
	int i;
	if (!printme)
		return (write(1, "(null)", 6));
	i = 0;
	while (printme[i] != '\0')
		ft_putchar(printme[i++]);
	return(i);
}