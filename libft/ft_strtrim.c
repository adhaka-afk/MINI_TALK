/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:42:02 by adhaka            #+#    #+#             */
/*   Updated: 2022/12/30 15:04:41 by adhaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	len;

	if (s1[0] == '\0')
		return (ft_strdup(""));
	while (*s1 && ft_strchr(set, *s1))
			s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + len - 1)) && len > 0)
			len--;
	new = ft_substr(s1, 0, len);
	return (new);
}
