/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:57:37 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 15:02:00 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*temp;

	temp = (unsigned char *) s;
	a = 0;
	while (a < n)
	{
		if (*temp == (unsigned char)c)
			return (temp);
		temp++;
		a++;
	}
	return (NULL);
}
