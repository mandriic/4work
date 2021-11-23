#include "ft_printf.h"
//FLAGS!
int ft_printf(const char *format, ...)
{
		va_list args;
		va_start(args, format);
		int i = 0;
		while(format[i])
		{
			if(format[i] == '%')
			{
			 		if (format[i + 1] == 'c')
							ft_putchar(va_arg(args, int));
					else if (format[i] == '%' && format[i + 1] == 's')
							ft_prstring(va_arg(args, char *));
					i += 2;	
			}

			ft_putchar(format[i++]);
		}
		// printf("tessrt - %d", va_arg(args, int));
		// printf("tessrt - %s", va_arg(args, char *));

}
