/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 04:56:28 by adhaka            #+#    #+#             */
/*   Updated: 2023/05/30 16:51:41 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	printf_conv(va_list earg, const char f)
{
	if (f == 'c')
		ft_putchar(va_arg(earg, int));
	else if (f == 's')
		return (ft_putstr(va_arg(earg, char *)));
	else if (f == 'p')
		return (ft_print_ptr(va_arg(earg, unsigned long)));
	else if (f == 'd')
		return (ft_print_nbr(va_arg(earg, int)));
	else if (f == 'i')
		return (ft_print_nbr(va_arg(earg, int)));
	else if (f == 'u')
		return (ft_print_unsigned(va_arg(earg, unsigned int)));
	else if (f == 'x')
		return (ft_print_hex(va_arg(earg, unsigned int), f));
	else if (f == 'X')
		return (ft_print_hex(va_arg(earg, unsigned int), f));
	else if (f == '%')
		ft_putchar('%');
	return (1);
}

int	ft_printf(const char *astr, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start (args, astr);
	while (*astr)
	{
		if (*astr == '%')
		{
			astr = astr + 1;
			i = i + printf_conv(args, *astr);
		}
		else
		{
			ft_putchar(*astr);
			i = i + 1;
		}
		astr++;
	}
	va_end(args);
	return (i);
}
