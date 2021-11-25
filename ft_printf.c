#include "ft_printf.h"
//FLAGS!
int ft_printf(const char *format, ...)
{
		va_list args;
		int count;
		va_start(args, format);
		int i = -1;
		count = 0;
		while(format[++i])
		{
			if(format[i] == '%' && !format[i + 1] )
				break;
			else if(format[i] == '%')
				count += ft_parsing(format[++i], args);
			else
				count += ft_putchar(format[i]);
		}
		va_end(args);
		return (count);
}
