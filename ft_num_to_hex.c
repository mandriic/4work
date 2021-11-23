
#include "ft_printf.h"
void ft_num_to_hex(int addr, const char *base)
{
//	char arr;		 
	char arrres[50];
	int type;
	type = strlen(base);
					// printf("%p\n", Parr);
				 // printf("%p\n", addr);
//	long unsigned int addr;
//	addr = (long unsigned int)&obj;
	int rest;
	int i = 0;

	while (addr != 0)
	{
		rest = addr % 16;
		arrres[i++] = base[rest];
		addr = addr / 16;
	}
	i = 0;
	//printf("%s\n", arrres);
	i = strlen(arrres) - 1;
	write(1,"\n",1);
	write(1,"0",1);
	write(1,"x",1);
	while (arrres[i])
		write(1,&arrres[i--],1);
}
