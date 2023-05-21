/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:45:44 by hlabouit          #+#    #+#             */
/*   Updated: 2022/12/13 04:30:59 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <fcntl.h>

int	ft_printf(const char *s, ...);
int	print_char(char c);
int	print_nbr(int nbr);
int	print_nbr_hx(unsigned int nb, char spf);
int	print_str(char *str);
int	print_u_nbr(unsigned int n);
int	print_adr_hx(unsigned long nb, char spf);
int	print_0x(unsigned long n);

#endif