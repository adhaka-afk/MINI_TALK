/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:57:52 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 15:02:34 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*newdst;
	char	*newsrc;
	size_t	a;

	a = 0;
	newsrc = (char *)src;
	newdst = (char *)dst;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
		while (len-- > 0)
			newdst[len] = newsrc[len];
	else
	{
		while (a < len)
		{
			newdst[a] = newsrc[a];
			a++;
		}
	}
	return (dst);
}
