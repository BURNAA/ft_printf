/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:51:46 by hlabouit          #+#    #+#             */
/*   Updated: 2022/12/13 04:29:07 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_specifier(char spf, va_list ptr)
{
	int	len;

	len = 0;
	if (spf == 'c')
		len += print_char(va_arg(ptr, int));
	else if (spf == 's')
		len += print_str(va_arg(ptr, char *));
	else if (spf == 'd' || spf == 'i')
		len += print_nbr(va_arg(ptr, int));
	else if (spf == 'u')
		len += print_u_nbr(va_arg(ptr, long));
	else if (spf == 'x' || spf == 'X')
		len += print_nbr_hx(va_arg(ptr, long), spf);
	else if (spf == 'p')
		len += print_0x(va_arg(ptr, unsigned long int));
	else
		len += print_char(spf);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	ptr;
	int		i;
	int		len;

	len = 0;
	va_start(ptr, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += check_specifier(s[i + 1], ptr);
			i++;
		}
		else
			len += print_char(s[i]);
		if (s[i] == '\0')
			break ;
		i++;
	}
	va_end(ptr);
	return (len);
}
