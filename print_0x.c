/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_0x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:07:32 by hlabouit          #+#    #+#             */
/*   Updated: 2022/12/13 04:33:07 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_0x(unsigned long n)
{
	int	len;

	len = 0;
	len += print_str("0x");
	len += print_adr_hx(n, 'x');
	return (len);
}

int	print_adr_hx(unsigned long nb, char spf)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (nb < 16)
		len += print_char(base[nb]);
	else
	{
		len += print_adr_hx(nb / 16, spf);
		len += print_adr_hx(nb % 16, spf);
	}
	return (len);
}
