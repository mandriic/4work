#include "ft_printf.h"
int ft_pointer(void *pointer)
{
	int i;
	char *hex;

	i = 0;
	if (!pointer || (void *)pointer == NULL)
		return (write(1, "(null)", 6));
	hex = ft_num_to_base((long unsigned int)pointer, "0123456789abcdef");
	ft_putchar('0');
	ft_putchar('x');
	while (hex[i] != '\0')
		ft_putchar(hex[i++]);
	free(hex);
	return(i + 2);
}
