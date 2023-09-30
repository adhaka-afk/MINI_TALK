/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:36:16 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 17:06:30 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		a;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	a = ft_len(n);
	new = (char *)malloc(sizeof(char) * (a + 1));
	if (!new)
		return (NULL);
	new[a--] = '\0';
	if (n == 0)
		new[0] = '0';
	if (n < 0)
	{
		new[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		new[a] = '0' + (n % 10);
		n = n / 10;
		a--;
	}
	return (new);
}
