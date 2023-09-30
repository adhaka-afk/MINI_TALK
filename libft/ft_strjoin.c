/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:41:25 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 15:03:55 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	a;
	size_t	b;

	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	a = 0;
	b = 0;
	while (s1[a])
		new[b++] = s1[a++];
	a = 0;
	while (s2[a])
		new[b++] = s2[a++];
	new[b] = '\0';
	return (new);
}
