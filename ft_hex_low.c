/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandriic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:23:12 by mandriic          #+#    #+#             */
/*   Updated: 2021/11/25 20:23:55 by mandriic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_low(long unsigned int nohex)
{
	char	*hex;
	int		i;

	if (!nohex)
		return (write(1, "0", 1));
	hex = ft_num_to_base((long unsigned int)nohex, "0123456789abcdef");
	i = 0;
	while (hex[i] != '\0')
		ft_putchar(hex[i++]);
	free(hex);
	return (i);
}
