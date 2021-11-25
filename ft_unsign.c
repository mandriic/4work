#include "ft_printf.h"
int ft_unsign(long unsigned int u)
{
	char *uns2char;
	int i;
	i = 0;
	if(u == 0)
		return(write(1, "0", 1)); 
	uns2char = ft_num_to_base(u , "0123456789");
	while (uns2char[i] != '\0')
		ft_putchar(uns2char[i++]);
	free(uns2char);
	return (i);
}