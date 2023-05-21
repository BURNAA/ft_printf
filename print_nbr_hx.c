/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_hx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:30:18 by hlabouit          #+#    #+#             */
/*   Updated: 2022/12/13 04:34:23 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr_hx(unsigned int nb, char spf)
{
	int		len;
	char	*base;

	len = 0;
	if (spf == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb < 16)
		len += print_char(base[nb % 16]);
	else
	{
		len += print_nbr_hx(nb / 16, spf);
		len += print_nbr_hx(nb % 16, spf);
	}
	return (len);
}
