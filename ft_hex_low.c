#include "ft_printf.h"
int ft_hex_low(long unsigned int nohex)
{
	char *hex;
	int i;
	
	if (!nohex)
		return (write(1, "0", 1));
	hex = ft_num_to_base((long unsigned int)nohex, "0123456789abcdef");
	i = 0;
	while (hex[i] != '\0')
		ft_putchar(hex[i++]);
	free(hex);
	return(i);
}