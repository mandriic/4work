/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_ent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandriic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:19:11 by mandriic          #+#    #+#             */
/*   Updated: 2021/11/25 20:19:55 by mandriic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dec_ent(int number)
{
	int		i;
	char	*temp;

	temp = ft_itoa(number);
	i = 0;
	while (temp[i] != '\0')
		ft_putchar(temp[i++]);
	free(temp);
	return (i);
}
