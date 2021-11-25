/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_to_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandriic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:27:16 by mandriic          #+#    #+#             */
/*   Updated: 2021/11/25 20:28:30 by mandriic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numof_char(unsigned long long addr, unsigned long long len)
{
	int	i;

	i = 0;
	while (addr >= (unsigned long long)len)
	{
		addr = addr / len;
		i++;
	}
	return (i);
}

char	*ft_num_to_base(unsigned long long addr, char *base)
{
	char				*arrres;
	char				*temp;
	int					i2;
	int					i3;
	unsigned long long	len;

	i2 = 0;
	len = ft_strlen(base);
	i3 = ft_numof_char(addr, len);
	arrres = malloc (sizeof(char) * (i3 + 2));
	while (addr > 0)
	{
		arrres[i2++] = base[addr % len];
		addr = addr / len;
	}
	arrres[i2] = '\0';
	temp = malloc (sizeof(char) * (i3 + 2));
	i2 = 0;
	while (i3 != -1)
		temp[i2++] = arrres[i3--];
	temp[i2] = '\0';
	free(arrres);
	return (temp);
}
