/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:14:19 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 15:03:59 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	dlen1;
	size_t	slen;
	size_t	a;

	dlen = ft_strlen(dst);
	dlen1 = ft_strlen(dst);
	slen = ft_strlen(src);
	a = 0;
	if (size <= dlen)
		return (slen + size);
	while ((src[a] != '\0') && (a < (size - dlen - 1)))
	{
		dst[dlen1] = src[a];
		a++;
		dlen1++;
	}
	dst[dlen1] = '\0';
	return (dlen + slen);
}
