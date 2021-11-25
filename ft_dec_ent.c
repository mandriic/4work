#include "ft_printf.h"
int ft_dec_ent(int number)
{
	int i;
	char *temp;

	temp = ft_itoa(number);
	i = 0;
	while(temp[i] != '\0')
		ft_putchar(temp[i++]);
	free(temp);
	return(i);
}