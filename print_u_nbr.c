/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:52:01 by hlabouit          #+#    #+#             */
/*   Updated: 2022/12/13 04:37:50 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_u_nbr(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb < 10)
		len += print_char(nb + '0');
	else
	{
		len += print_u_nbr(nb / 10);
		len += print_u_nbr(nb % 10);
	}
	return (len);
}
