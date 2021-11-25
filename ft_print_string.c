/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandriic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:36:58 by mandriic          #+#    #+#             */
/*   Updated: 2021/11/25 20:37:21 by mandriic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *printme)
{
	int		i;

	if (!printme)
		return (write(1, "(null)", 6));
	i = 0;
	while (printme[i] != '\0')
		ft_putchar(printme[i++]);
	return (i);
}
