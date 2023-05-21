/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:51:54 by hlabouit          #+#    #+#             */
/*   Updated: 2022/12/13 04:35:33 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int n)
{
	long int	nb;
	int			len;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		len += write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
		len += print_char(nb + '0');
	else
	{
		len += print_nbr(nb / 10);
		len += print_nbr(nb % 10);
	}
	return (len);
}
