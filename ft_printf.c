/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandriic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:38:16 by mandriic          #+#    #+#             */
/*   Updated: 2021/11/25 20:38:21 by mandriic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	i = -1;
	count = 0;
	while (format[++i])
	{
		if (format[i] == '%' && !format[i + 1])
			break ;
		else if (format[i] == '%')
			count += ft_parsing(format[++i], args);
		else
			count += ft_putchar(format[i]);
	}
	va_end(args);
	return (count);
}
