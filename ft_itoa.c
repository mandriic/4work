/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandriic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:26:31 by mandriic          #+#    #+#             */
/*   Updated: 2021/11/25 20:26:43 by mandriic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_int2char(long long int i, char *p)
{
	if (i / 10 == 0)
	{
		*p++ = i + '0';
		*p = '\0';
		return (p);
	}
	else
	{
		p = ft_int2char(i / 10, p);
		*p++ = i % 10 + '0';
		*p = '\0';
		return (p);
	}
}

static char	*memalloc(int n)
{
	int		numb;
	char	*str;
	int		ifneg;

	ifneg = 2;
	if (n < 0)
		ifneg += 1;
	numb = 0;
	while (n != 0)
	{
		n /= 10;
		numb++;
	}
	str = malloc(sizeof (char) * (numb + ifneg));
	return (str);
}

char	*ft_itoa(int n)
{	
	char			*str;
	long long int	temp;

	str = memalloc(n);
	if (str)
	{
		temp = (long long int)n;
		if (n < 0)
		{
			*str++ = '-';
			temp *= -1;
			ft_int2char(temp, str);
			return (str - 1);
		}
		ft_int2char(temp, str);
	}
	return (str);
}
