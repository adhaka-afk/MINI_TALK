/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:41:37 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 15:02:22 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*newsrc;
	char	*newdst;
	size_t	i;

	i = 0;
	newsrc = (char *)src;
	newdst = (char *)dst;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		newdst[i] = newsrc[i];
		i++;
	}
	return (dst);
}
