/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 05:00:52 by adhaka            #+#    #+#             */
/*   Updated: 2023/05/30 16:52:12 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_print_nbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		len = len + ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			len = len + ft_putchar('-');
			n = n * -1;
		}
		if (n <= 9)
			len = len + ft_putchar(n + '0');
		else
		{
			len = len + ft_print_nbr(n / 10);
			len = len + ft_print_nbr(n % 10);
		}
	}
	return (len);
}
