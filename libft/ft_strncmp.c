/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:01:38 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 15:04:24 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			a;
	unsigned char	*ns1;
	unsigned char	*ns2;

	a = 0;
	ns1 = (unsigned char *)s1;
	ns2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (ns1[a] == ns2[a] && (ns1[a] != '\0' || ns2[a] != '\0') && a < n - 1)
		a++;
	return (ns1[a] - ns2[a]);
}
