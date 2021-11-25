/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_high.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandriic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:21:24 by mandriic          #+#    #+#             */
/*   Updated: 2021/11/25 20:21:33 by mandriic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_high(long unsigned int nohex)
{
	char	*hex;
	int		i;

	if (!nohex)
		return (write(1, "0", 1));
	hex = ft_num_to_base((long unsigned int)nohex, "0123456789ABCDEF");
	i = 0;
	while (hex[i] != '\0')
		ft_putchar(hex[i++]);
	free(hex);
	return (i);
}
