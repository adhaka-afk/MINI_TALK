/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 05:01:01 by adhaka            #+#    #+#             */
/*   Updated: 2023/05/30 16:51:59 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_print_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n <= 9)
		len = len + ft_putchar(n + '0');
	else
	{
		len = len + ft_print_unsigned(n / 10);
		len = len + ft_print_unsigned(n % 10);
	}
	return (len);
}
