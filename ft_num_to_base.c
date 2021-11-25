
#include "ft_printf.h"
char *ft_num_to_base(unsigned long long addr, char *base)
{		 
	char *arrres;
	char *temp;
	int rest;
	int i2;
	int i3;
	unsigned long long addr2;
	unsigned long long len;
	i2 = 0;
	i3 = 0;
	len = 0;
	addr2 = addr;
	len = ft_strlen(base);
	i3 = 0;
	while (addr2 >= (unsigned long long)len)
	{
		addr2 = addr2 / len;
		i3++;
	}
	arrres = malloc (sizeof(char) * (i3 + 2));
	while (addr > 0)
	{
		rest = addr % len;
		arrres[i2++] = base[rest];
		addr = addr / len;
	}
	arrres[i2] = '\0';
	temp = malloc (sizeof(char) * (i3 + 2));
	i2 = 0;
	while (i3 != -1)
		temp[i2++] = arrres[i3--];
	temp[i2] = '\0';
	free(arrres);
	return(temp);
}
