/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 05:00:49 by adhaka            #+#    #+#             */
/*   Updated: 2023/05/30 16:52:18 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_print_hex(unsigned int n, char a)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		len = len + ft_putchar('0');
		return (len);
	}
	if (n > 15)
	{
			len = len + ft_print_hex(n / 16, a);
			len = len + ft_print_hex(n % 16, a);
	}
	else
	{
		if (n <= 9)
			len = len + ft_putchar(n + '0');
		else if (a == 'X')
			len = len + ft_putchar(n + 55);
		else if (a == 'x')
				len = len + ft_putchar(n + 87);
	}
	return (len);
}
