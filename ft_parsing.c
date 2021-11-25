/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandriic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:32:03 by mandriic          #+#    #+#             */
/*   Updated: 2021/11/25 20:32:44 by mandriic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parsing(char caracter, va_list args)
{
	if (caracter == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (caracter == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (caracter == 'p')
		return (ft_pointer(va_arg(args, void *)));
	else if (caracter == 'd' || caracter == 'i')
		return (ft_dec_ent(va_arg(args, int)));
	else if (caracter == 'u')
		return (ft_unsign(va_arg(args, unsigned int)));
	else if (caracter == 'x')
		return (ft_hex_low(va_arg(args, unsigned int)));
	else if (caracter == 'X')
		return (ft_hex_high(va_arg(args, unsigned int)));
	else if (caracter == '%')
		return (ft_putchar('%'));
	else
		return (0);
}
