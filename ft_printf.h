/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandriic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:39:21 by mandriic          #+#    #+#             */
/*   Updated: 2021/11/25 20:43:47 by mandriic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
char	*ft_num_to_base(unsigned long long addr, char *base);
int		ft_putchar(char printme);
int		ft_print_string(char *printme);
int		ft_parsing(char caracter, va_list args);
int		ft_pointer(void *pointer);
int		ft_dec_ent(int number);
char	*ft_itoa(int n);
int		ft_unsign(long unsigned int u);
int		ft_strlen(const char *s);
int		ft_hex_low(long unsigned int nohex);
int		ft_hex_high(long unsigned int nohex);
int		ft_numof_char(unsigned long long addr, unsigned long long len);
#endif
